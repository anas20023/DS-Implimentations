#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int num)
{
    Node *newNode = new Node(num);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int num)
{
    Node *newNode = new Node(num);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(Node *&head, int pos, int num)
{
    if (pos == 1)
    {
        insertAtHead(head, num);
        return;
    }

    Node *newNode = new Node(num);
    Node *temp = head;
    int count = 1;

    while (count < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        cout << "Position out of range." << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFromHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteFromEnd(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void deleteAtPosition(Node *&head, int pos)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    if (pos == 1)
    {
        deleteFromHead(head);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < pos - 1 && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        cout << "Position out of range." << endl;
        return;
    }

    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void printData(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    // Insertions
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtPosition(head, 3, 25);
    cout << "After Insertions: ";
    printData(head);

    // Deletions
    deleteFromHead(head);
    cout << "After Deleting from Head: ";
    printData(head);

    deleteFromEnd(head);
    cout << "After Deleting from End: ";
    printData(head);

    deleteAtPosition(head, 2);
    cout << "After Deleting at Position 2: ";
    printData(head);

    return 0;
}
