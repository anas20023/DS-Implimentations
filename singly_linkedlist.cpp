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

void insetAtEnd(Node *&ptr, int num)
{
    Node *newNode = new Node(num);
    if (ptr == NULL)
    {
        ptr = newNode;
        return;
    }
    Node *temp = ptr;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void PrintData(Node *&head)
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
    Node *node1 = NULL;
    Node *head = node1;

    //insertAtHead(head, 20);
   // insertAtHead(head, 30);
    //insertAtHead(head, 40);
    insetAtEnd(head, 70);
    insetAtEnd(head, 80);
    insetAtEnd(head, 90);
    PrintData(head);

    return 0;
}
