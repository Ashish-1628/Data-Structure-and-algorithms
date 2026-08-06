//Reverse Linked list in k-groups
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
Node* ReverseK(Node* &head,int k){
    //base case
    if(head==NULL){
        return head;
    }
    Node* temp=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        count++;
        
    }
    if(temp!=NULL)  head->next=ReverseK(temp,k);
    return prev;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(2);
    Node* head=node1;
    insertAtHead(head,17);
    insertAtHead(head,11);
    insertAtHead(head,8);
    insertAtHead(head,7);
    insertAtHead(head,3);
    print(head);
    cout<<"Linked list after Recursion in k-groups "<<endl;
    head=ReverseK(head,2);
    print(head);
    return 0;
}