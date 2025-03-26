#!/bin/bash
# Ensure the script runs in the repository directory
cd "$(dirname "$0")" || exit

# Stage all changes in the repository
git add -A

# Check if there are any staged changes
if ! git diff-index --quiet HEAD --; then
  # List all staged files that have changed (comma separated)
  changed_files=$(git diff --cached --name-only | paste -sd ", " -)
  
  # Build a descriptive commit message including a timestamp and list of changed files
  commit_message="Auto commit on $(date '+%Y-%m-%d %H:%M:%S'): Updated files: ${changed_files}"
  
  # Create a commit with the generated message
  git commit -m "$commit_message"
  
  # Push changes to the 'temp' branch
  git push origin HEAD:temp
  
  # Create a pull request from 'temp' to 'main' with the commit message as its body
  gh pr create --base main --head temp --title "Auto PR: $(date '+%Y-%m-%d %H:%M:%S')" --body "$commit_message"
  
  # Automatically merge the pull request and delete the 'temp' branch afterward
  gh pr merge --auto --delete-branch
else
  echo "No changes detected. Optionally, you can enable an empty commit if you wish consistency."
  # To force an empty commit, uncomment the following lines:
  # git commit --allow-empty -m "Empty auto commit on $(date '+%Y-%m-%d %H:%M:%S'): No changes detected"
  # git push origin HEAD:temp
  # gh pr create --base main --head temp --title "Empty Auto PR: $(date '+%Y-%m-%d %H:%M:%S')" --body "No changes detected"
  # gh pr merge --auto --delete-branch
fi
