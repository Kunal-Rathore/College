

#include <iostream>
#include <vector>

using namespace std;


class Node{
public: 
int data;
Node *next;

        Node(){
            this->next = NULL;
            cout<<"in default ctor\n";
        }

        Node(int data){

            cout<<"in parameterized ctor\n";
        
            this->data = data;
            this->next = NULL;
        }
};


void printLL(Node *head)
{
    Node *temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
}



int getLength(Node *head)
{
    Node *temp = head;
int length = 0;
    while(temp!= NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
        length ++;
    }
return length;
}


int main(){

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next= second;
    second->next= third;

    Node* head= first;

    printLL(head);

    cout<<"\nLength is- "<<getLength<<endl;

return 0;
}