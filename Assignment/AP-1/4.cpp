#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; 
        current->next = prev; 
        prev = current;       
        current = next;      
    }
    
    return prev; 
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void insert(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    Node* head = nullptr;
    int N, value;
    cout << "Enter the number of nodes: ";
    cin >> N;
    cout << "Enter the values of the nodes: ";
    for (int i = 0; i < N; i++) {
        cin >> value;
        insert(head, value);
    }
    cout << "Original Linked List: ";
    printList(head);
    head = reverseList(head);
    cout << "Reversed Linked List: ";
    printList(head);
    return 0;
}
