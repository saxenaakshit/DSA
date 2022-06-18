#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {

    //Data Member are below:
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this->data  = data;
        this->next = NULL;
    }

};
void insertAtHead(Node* &head, int d) {
        //step 1: create new node
        Node* newNode = new Node(d);
        //step2: set next ptr of new Node to head node
        newNode->next = head;
        //step3: head update;
        head = newNode;
}


void insertAtPosition(Node* &head, int pos, int d) {
    //TODO: tail updation, while inserting node at the end
    //TODO: validate that position should 
    //be atmax 1 more than current Lenght of LL
    if(pos == 1) {
        insertAtHead(head,d);
    }
    else {
        //Step1: cration of New Node
        Node* Nodetoinsert = new Node(d);

        //step2: 
        Node* temp = head;
        int cnt=1;
        while(cnt<pos-1)
        {
            temp= temp->next;
        }
        //after loop temp will point to the linked list just before the position where we have to insert the new node

        //step3: connections update
        Nodetoinsert->next = temp->next;//we did it before because after this step the adress will be lost or changed
        temp->next = Nodetoinsert;
    }
}
void traverse(Node* &head) {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}
int main(){

Node *mynode=new Node(5);
Node *head=mynode;
insertAtHead(head,6);
traverse(head);
insertAtPosition(head,2,8);
traverse(head);


return 0;
}
