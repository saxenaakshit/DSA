#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        this->next=NULL;
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
void traverse(Node* &head) {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}

void Delete(Node* &head,int target){
Node*prev=NULL;
Node*temp=head;
if(head==NULL){
    return;
}
else if(head->data==target){
    head=head->next;
    delete temp;
    return;
}
else{

    while(temp->data!=target){
        prev=temp;
        temp=temp->next;
        
    }
    prev->next=temp->next; 
    return;

}


}

int main(){
    Node*mynode=new Node(5);
    Node*head=mynode;
    insertAtHead(head,3);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,4);
    traverse(head);
    Delete(head,5);
    traverse(head);

return 0;
}
