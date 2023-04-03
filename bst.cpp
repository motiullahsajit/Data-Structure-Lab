#include <iostream>

using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
};

Node* createNode(int key) {
    Node* newNode = new Node;
    newNode->key = key;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return createNode(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    }
    else if (key > root->key) {
        root->right = insert(root->right, key);
    }

    return root;
}

void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    cout << root->key << " ";
    inorderTraversal(root->right);
}

int main() {
    int keys[] = { 25, 59, 19, 34, 44, 29, 38, 46, 8, 17, 22 };
    int n = sizeof(keys) / sizeof(keys[0]);

    Node* root = nullptr;
    for (int i = 0; i < n; i++) {
        root = insert(root, keys[i]);
    }

    cout << "Inorder traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
