//Doubly circular linked list
#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            this->next = NULL; 
            this->prev = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int ele, int d) {
    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
        temp->prev = temp;
    } else {
        Node* curr = tail;
        
        while (curr->data != ele) {
            curr = curr->next;
        }

        Node* temp = new Node(d);
        
        temp->next = curr->next;
        temp->prev = curr;
        
        curr->next->prev = temp;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int d) {
    if (tail == NULL) {
        cout << "List is empty, pls check again " << endl;
        return;
    } else {
        Node* curr = tail->next; 

        while (curr->data != d) {
            curr = curr->next;
            
            if(curr == tail->next) {
                cout << "Element " << d << " not found in the list." << endl;
                return;
            }
        }

        if (curr == curr->next) { 
            tail = NULL;
        } 
        else if (tail == curr) { 
            tail = curr->prev;
        }

        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;

        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}

void print(Node* tail) {
    if (tail == NULL) {
        cout << "List is empty, pls try again " << endl;
        return;
    }
    
    Node* temp = tail->next; 
    
    do {    
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next); 
    cout << endl;
}

int main() {
    Node* tail = NULL;
    
    insertNode(tail, 2, 7);
    print(tail);
    
    insertNode(tail, 7, 9);
    print(tail);
    
    insertNode(tail, 9, 11);
    print(tail);
    
    insertNode(tail, 7, 8);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);
    
    deleteNode(tail, 7);
    print(tail);
    
    deleteNode(tail, 9);
    print(tail);
    
    deleteNode(tail, 11);
    print(tail);

    return 0;
}