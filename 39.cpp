//Reverse Linked list
/*#include<iostream>
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
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}
Node* Reverse_Linkedlist(Node* &head){
    if(head==NULL|| head->next==NULL)   return head;
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
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
    Node* node1=new Node(3);
    Node* head=node1;
    insertAtHead(head,5);
    insertAtHead(head,7);
    insertAtHead(head,9);
    cout<<"Original Linked list "<<endl;
    print(head);
    head=Reverse_Linkedlist(head);
    cout<<"Reversed Linked list "<<endl;
    print(head);
}*/

//Reverse Linked list using recursion
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
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<< endl;
}
void reverse(Node* &head,Node* curr,Node* prev){
    //base case
    if(curr==NULL){
        head=prev;
        return;
    }
    // case to solve
    Node* temp=curr->next;
    reverse(head,temp,curr);
    curr->next=prev;
}
Node* Reverse_Linkedlist(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
    reverse(head,curr,prev);
    return head;
}
int main(){
    Node* node1=new Node(3);
    Node* head=node1;
    insertAtHead(head,5);
    insertAtHead(head,7);
    insertAtHead(head,9);
    cout<<"Original Linked list "<<endl;
    print(head);
    head=Reverse_Linkedlist(head);
    cout<<"Reversed Linked list "<<endl;
    print(head);
}