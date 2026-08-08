//DETECT AND REMOVE LOOP IN LINKEDLIST
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    // Destructor
    ~Node() {
        int value = this->data;
        // Free memory
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data "
             << value << endl;
    }
};
// Insert at Head
void insertAtHead(Node* &head, int d) {
    // Create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Detect and Remove Loop
void RemoveLoop(Node* head) {
    if (head == NULL)
        return;
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            cout << "Loop detected!" << endl;
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            Node* temp = slow;
            while (temp->next != slow) {
                temp = temp->next;
            }
            temp->next = NULL;
            cout << "Loop removed!" << endl;
            return;
        }
    }
    cout << "No loop present!" << endl;
}
int main() {
    // Create first node
    Node* node1 = new Node(10);
    // Head points to node1
    Node* head = node1;
    insertAtHead(head, 11);
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    cout << "Linked List:" << endl;
    print(head);
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head->next;            //Comment line 75-79 to remove the loop in LL to check different Inputs
    RemoveLoop(head);
    cout << "Updated Linked List:" << endl;
    print(head);
    return 0;
}