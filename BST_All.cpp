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
bool searchinBST(node* root,int x){
    if(root==nullptr){
        return false;
    }
    if (root->data == x) {
        return true;
    }
    if(root->data>x){
        return searchinBST(root->left,x);
    }
    else {
        return searchinBST(root->right,x);
    }
}
node* deleteFromBST(node* root, int x) {
    if (root == nullptr) {
        return root;
    }

    if (x < root->data) {
        root->left = deleteFromBST(root->left, x);
    } else if (x > root->data) {
        root->right = deleteFromBST(root->right, x);
    } else {
        if (root->left == nullptr) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            node* temp = root->left;
            delete root;
            return temp;
        }
        node* temp = root->right;
        while (temp->left != nullptr) {
            temp = temp->left;
        }
        root->data = temp->data;
        root->right = deleteFromBST(root->right, temp->data);
    }
    return root;
}
int main() {
    node* root = Takeinput();
    //postorder(root);
    //cout<<"Enter Element to Search:";
    int x;cin>>x;
    if(searchinBST(root,x))cout<<"Present\n";
    else cout<<"Not Present\n";
    return 0;
}
