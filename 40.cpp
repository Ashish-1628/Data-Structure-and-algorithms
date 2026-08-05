//Reverse Doubly linked list
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
Node* ReverseDoubly(Node* &head,Node* &tail){
    Node* curr=head;
    Node* prev=NULL;
    tail=head;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        curr->prev=NULL;
        prev=curr;
        curr=temp;
    }
    return prev;
}
void insertAtHead(Node* &head,Node* &tail,int d){
    //Empty List
    if(head==NULL){
            Node* temp=new Node(d);
            head=temp;
            tail=temp;
    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<< endl;

}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    cout<<"Original Doubly "<<endl;
    insertAtHead(head,tail,1);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,5);
    insertAtHead(head,tail,7);
    insertAtHead(head,tail,9);
    print(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    head=ReverseDoubly(head,tail);
    cout<<"Reversed Doubly "<<endl;
    print(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    return 0;
}