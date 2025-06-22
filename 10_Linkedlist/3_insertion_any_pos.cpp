

#include <iostream>
#include <vector>

using namespace std;


class Node{
    public: 
    int data;
Node *next ;
    Node(int data)
    {
        this-> data  = data;
        this->next = NULL;
    }

};


    void printLL(Node *head)
    {
        Node *temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    
    int getLengtH(Node *head)
    {
        int length = 0;
        Node *temp = head;
        while(temp!= NULL)
        {
            length++;
            temp = temp->next;
        }
        return length;
    }


// insert at head

    void insertAtHead(Node *&head,Node * &tail, int data)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        { 
            head  = newNode;
            tail = newNode; 
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

// insert at end
    void insertAtTail(Node *& head,Node *& tail, int data)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
        
            head = newNode;
            tail = newNode;
        }

        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

// insert at middle

    void insertAtMiddle(Node * &head, Node *&tail, int data,int position)
    {
        Node *newNode = new Node(data);
        Node *previous = NULL;
        Node *current = head;

        while(position!=1)
        {
            previous = current;
            current = current->next;
            position--;
        }
    
        previous->next = newNode;
        newNode->next = current;
    
    }

    void insertAtPosition(Node*&head, Node *&tail,int data,int position)
    {
        int length = getLengtH(head);
        if(position<= 1)
        {
            insertAtHead(head, tail,data);
        }
   

       else if(position>length)
        {
            insertAtTail(head,tail,data);
        }
        else{
            insertAtMiddle(head,tail,data,position);
        }
    }


int main(){

Node *head  = NULL;
Node *tail = NULL;    

insertAtPosition(head,tail,10,1);
insertAtPosition(head,tail,20,2);
insertAtPosition(head,tail,40,4);
insertAtPosition(head,tail,50,5);

insertAtPosition(head,tail,30,3);
printLL(head);

return 0;
}