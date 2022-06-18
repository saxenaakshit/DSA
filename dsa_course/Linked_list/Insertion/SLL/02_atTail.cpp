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

void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->next = newNode;
        //step3: head update;
        tail = newNode;
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

traverse(head);

traverse(head);


return 0;
}
