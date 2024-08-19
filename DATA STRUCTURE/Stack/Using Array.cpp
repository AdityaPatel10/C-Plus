#include<iostream>
using namespace std;
#define MAX 10 // Define the maximum size of the stack

class Stack {
    int top = -1; // Initialize the top of the stack to -1
public:
    int stack[MAX]; // Array to hold stack elements
    int push(int X); // Function to push an element onto the stack
    int pop(); // Function to pop an element from the stack
    int peek(); // Function to peek at the top element of the stack
    bool isEmpty(); // Function to check if the stack is empty
    bool isFull(); // Function to check if the stack is full
    void Display(); // Function to display the elements of the stack (not implemented in your code)
};

// Function to push an element onto the stack
int Stack::push(int X) {
    if (top == MAX - 1) {
        // If the stack is full, print an error message
        cout << "Stack Overflow.." << endl;
    } else {
        // Increment the top and add the element to the stack
        top++;
        stack[top] = X;
        cout << stack[top] << " pushed into the stack." << endl;
    }
}

// Function to pop an element from the stack
int Stack::pop() {
    if (top == -1) {
        // If the stack is empty, print an error message
        cout << "Stack Underflow.." << endl;
    } else {
        // Store the top element in a temporary variable, decrement the top, and print the popped element
        int temp = stack[top];
        top--;
        cout << temp << " popped out from the stack." << endl;
    }
}

// Function to peek at the top element of the stack
int Stack::peek() {
    if (top == -1) {
        // If the stack is empty, print an error message
        cout << "Stack Underflow.." << endl;
    } else {
        // Print the top element of the stack
        cout << "Top element is= " << stack[top] << endl;
    }
}

// Function to check if the stack is empty
bool Stack::isEmpty() {
    return top == -1; // Return true if top is -1, indicating the stack is empty
}

// Function to check if the stack is full
bool Stack::isFull() {
    return top == MAX - 1; // Return true if top is equal to MAX-1, indicating the stack is full
}

// Main function to demonstrate the stack operations
int main() {
    Stack s1; // Create an instance of the Stack class
    s1.isEmpty(); // Check if the stack is empty
    s1.push(1); // Push element 1 onto the stack
    s1.push(2); // Push element 2 onto the stack
    s1.push(10); // Push element 10 onto the stack
    s1.pop(); // Pop the top element from the stack
    s1.peek(); // Peek at the top element of the stack
}
