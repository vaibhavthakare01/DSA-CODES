#include <iostream>
using namespace std;

struct Node {
    string name, phone;
    Node *left, *right;
    bool thread;

    Node(string n, string p) {
        name = n;
        phone = p;
        left = right = NULL;
        thread = true;
    }
};

Node* insert(Node* root, string n, string p) {
    Node* temp = new Node(n, p);

    if (root == NULL)
        return temp;

    Node *cur = root, *par = NULL;

    while (cur != NULL) {
        par = cur;

        if (n < cur->name) {
            if (cur->left == NULL) break;
            cur = cur->left;
        } else {
            if (cur->thread) break;
            cur = cur->right;
        }
    }

    if (n < par->name) {
        temp->right = par;
        par->left = temp;
    } else {
        temp->right = par->right;
        par->right = temp;
        par->thread = false;
    }

    return root;
}

void inorder(Node* root) {
    Node* cur = root;

    if (cur == NULL) {
        cout << "Directory is empty!";
        return;
    }

    while (cur->left != NULL)
        cur = cur->left;

    while (cur != NULL) {
        cout << cur->name << " - " << cur->phone << endl;

        if (cur->thread)
            cur = cur->right;
        else {
            cur = cur->right;
            while (cur != NULL && cur->left != NULL)
                cur = cur->left;
        }
    }
}

int main() {
    Node* root = NULL;
    int choice;
    string name, phone;

    do {
        cout << "\n1. Insert Contact\n2. Display Contacts\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter phone: ";
            cin >> phone;
            root = insert(root, name, phone);
        }
        else if (choice == 2) {
            inorder(root);
        }
    } while (choice != 3);

    return 0;
}
