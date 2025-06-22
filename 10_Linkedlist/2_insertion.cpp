

#include <iostream>
#include <vector>

using namespace std;


class Node{
public: 
int data;
Node *next;

        Node(){
            this->next = NULL;
        }

        Node(int data){

        
            this->data = data;
            this->next = NULL;
        }
};


void printNodes(Node *head)
{
    Node *temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



// insert new node at head
void insertAtHead(Node*  &head,Node* &tail, int data)
{
    if(head == NULL) //Empty LL
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        //create new node
    Node *newNode = new Node(data);
    // attach new node with head node
    newNode-> next = head;
    // make new node head
    head = newNode;
        } 

}


void insertAtTail(Node* &head, Node* &tail,int data)
{
    if(head== NULL) // empty LL
    {
      Node *newNode = new Node(data);
      // single node hae entire LL mae so head and tail dono is pr point honge
      head =  newNode;
      tail = newNode;
    }
    else{
        // create
        Node *newNode = new Node(data);

        // attach tail
        tail->next = newNode;
        //switch tail
        tail = newNode;
    }
}

int main(){

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next= second;
    second->next= third;

    Node *head = first;
    Node *tail = third;
    
    insertAtHead(head,tail,40);
    cout<<"after insertion at head- "<<endl;
    printNodes(head);

    cout<<endl<<"after insertion at tail- "<<endl;
    insertAtTail(head,tail,199);
    printNodes(head);
    
return 0;
}