#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* insertintoTree(node* root, int data) {
    if (root == nullptr) {
        root = new node(data);
        return root;
    }
    if (data > root->data) {
        root->right = insertintoTree(root->right, data);
    } else {
        root->left = insertintoTree(root->left, data);
    }
    return root;
}

node* Takeinput() {
    int n;
    cin >> n;
    node* root = nullptr;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root = insertintoTree(root, data);
    }
    return root;
}

void levelOrderTraversal(node* root) {
    if (!root) return;
    queue<node*> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == nullptr) {
            cout << endl;
            if (!q.empty()) {
                q.push(nullptr);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root) {
    if (root == nullptr) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    node* root = Takeinput();
    postorder(root);
    return 0;
}
