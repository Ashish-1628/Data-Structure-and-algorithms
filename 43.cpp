//LL is circular or not
//Circular Linked List
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
void insertNode(Node* &tail,int ele,int d){
    //assuming that the element is present in the list
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        Node* curr=tail;
        while(curr->data!=ele){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}
//deletion by value
void deleteNode(Node* &tail,int d){
    if(tail==NULL){
        cout<<"List is empty, pls check again "<<endl;
        return;
    }
    else{
        Node* prev=tail;
        Node* curr=tail->next;
        while(curr->data!=d){
            prev=curr;
            curr=curr->next; 
        }
        prev->next=curr->next;
        //Single Node Linkedlist
        if(curr==prev){
            tail=NULL;
        }
        // >=2 Node linked list     
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* &tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"List is empty, pls try again "<<endl;
        return ;
    }
    do{    
        cout<<tail->data <<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl; 
}
bool isCircular(Node* head){
    //empty list
    if(head==NULL)  return NULL;
    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head)  return true;
    return false;
}
int main(){
    Node* tail=NULL;
    insertNode(tail,2,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,9,11);
    print(tail);
    insertNode(tail,7,8);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    deleteNode(tail,7);
    print(tail);
    deleteNode(tail,9);
    print(tail);
    if(isCircular(tail))    cout<<"LL is Circular in nature "<<endl;
    return 0;

}
