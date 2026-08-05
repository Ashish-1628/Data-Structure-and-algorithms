//Middle element of Linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* getMiddle(Node* head){
    if(head == NULL || head->next == NULL) {
        return head;
    }
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    Node* node1=new Node(4);
    Node* head=node1;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    cout<<"Linked list is "<<endl;
    print(head);
    cout<<"Middle element of LL is "<<endl;
    Node* mid=getMiddle(head);
    cout<<mid->data;
    return 0;
}