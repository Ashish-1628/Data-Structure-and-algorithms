// Linkedlist(Insertion,Deletion,traversal)
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destrucor
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL; 
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
void insertAtHead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertAtPosition(Node* &head,Node* &tail,int d,int pos){
    //insert at head
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    //insert at tail
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* NodeToInsert=new Node(d);
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;

}
void deleteNode(Node* &head,Node* &tail,int pos){
    if(pos==1){
        //delete head or start node
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //delete middle or last node
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;  
            curr=curr->next;
            cnt++;
        }
        //Updating tail pointer 
        if(curr->next==NULL){
            tail=prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    //created a newnode
    Node* node1=new Node(10);
    //head point
    Node* head=node1;
    //tail point
    Node* tail=node1; 

    insertAtTail(tail,11);
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(head,tail,13,4);
    print(head);
    insertAtPosition(head,tail,9,1);
    print(head);
    insertAtPosition(head,tail,16,7);
    print(head);
    cout<<"Head  "<<head->data<<endl;
    cout<<"Tail  "<<tail->data<<endl;
    deleteNode(head,tail,1);
    print(head);
    deleteNode(head,tail,6);
    print(head);
    cout<<"Head  "<<head->data<<endl;
    cout<<"Tail  "<<tail->data<<endl;
    return 0;

}