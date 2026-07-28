//Doubly linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    //destrucor
    ~Node(){
        int value=this->data;
        //memory free
        if(next!=NULL){
            delete next;
            next=NULL; 
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
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
void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void insertAtPosition(Node* &head,Node* &tail,int pos,int d){
    //insert at head
    if(pos==1){
        insertAtHead(head,tail,d);
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
        insertAtTail(tail,head,d);
        return;
    }
    //creating a node for d
    Node* NodeToInsert=new Node(d);
    NodeToInsert->next=temp->next;
    temp->next->prev=NodeToInsert;
    temp->next=NodeToInsert;
    NodeToInsert->prev=temp;
}
void deleteNode(Node* &head,Node* &tail,int pos){
    if(pos==1){
        //delete head or start node
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
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
            prev->next=NULL;
        }
        curr->prev=NULL;
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
    cout<< endl;

}
int getLength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,10);
    print(head);
    insertAtTail(tail,head,20);
    print(head);
    insertAtPosition(head,tail,3,25);
    print(head);
    insertAtTail(tail,head,30);
    print(head);
    insertAtTail(tail,head,35);
    print(head);
    insertAtHead(head,tail,5);
    print(head);
    deleteNode(head,tail,3);
    print(head);
    deleteNode(head,tail,5);
    print(head);
    deleteNode(head,tail,1);
    print(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    
    cout<<"Length of LL "<<getLength(head);
    return 0;
}