
#include<iostream>
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
        //step2: set next ptr to head node
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


void deleteNode(Node* &head, int target, int pos) {

    //empty list
    if(head == NULL)
        return;

    Node* temp = head;
    Node* prev = NULL;
    if(target == temp->data && pos == 1){
        head  = head ->next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        while(temp != NULL && temp->data != target) {
            prev = temp;
            temp = temp->next;
        }
        //here we are assuiming that we have found the element

        if(temp == NULL)
            {
                cout << "NOde node found" << endl;
                return;
            }
        prev -> next = temp->next;
        temp ->next = NULL;
        delete temp;

    }

}

int getLength(Node* &head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    } return len;
}

int main() {

    //object creation

    Node* b = new Node(3);
    Node* head = b;
    Node* tail = b;

  
  

    traverse(head);
   
    traverse(head);

    Node* head2 = NULL;
    deleteNode(head2, 13, 1);
    traverse(head);
    cout << getLength(head) << endl;




    return 0;
}
