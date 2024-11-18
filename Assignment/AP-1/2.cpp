#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* lca(Node* root, int n1, int n2) {
    if (root == NULL || root->data == n1 || root->data == n2) {
        return root;
    }
    Node* left_lca = lca(root->left, n1, n2);
    Node* right_lca = lca(root->right, n1, n2);    
    if (left_lca != NULL && right_lca != NULL) {
        return root;  
    }
    return (left_lca != NULL) ? left_lca : right_lca;
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);    
    int n1 = 3, n2 = 4;
    Node* lca_node = lca(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is: " << lca_node->data << endl;    
    n1 = 5, n2 = 4;
    lca_node = lca(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is: " << lca_node->data << endl;
    return 0;
}
