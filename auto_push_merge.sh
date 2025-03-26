#!/bin/bash
# Change to the repository directory (assumes the script is in the repo root)
cd "$(dirname "$0")" || exit

# Stage all changes
git add -A

# Check if there are any changes staged
if ! git diff-index --quiet HEAD --; then
  # Get a comma-separated list of changed files
  changed_files=$(git diff --cached --name-only | paste -sd ", " -)
  # Create a descriptive commit message with timestamp and changed files
  commit_message="Auto commit on $(date '+%Y-%m-%d %H:%M:%S'): Updated files: ${changed_files}"
  git commit -m "$commit_message"
else
  # No changes: create an empty commit for consistency
  commit_message="Empty auto commit on $(date '+%Y-%m-%d %H:%M:%S'): No changes detected"
  git commit --allow-empty -m "$commit_message"
fi

# Push the commit(s) to the 'temp' branch
git push origin HEAD:temp

# Create a pull request from 'temp' to 'main'
gh pr create --base main --head temp --title "Auto PR: $(date '+%Y-%m-%d %H:%M:%S')" --body "$commit_message"

# Automatically merge the pull request using a merge commit (non-interactively) and delete the temp branch
gh pr merge --auto --delete-branch --merge
