#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node()
    {
        value = 0;
        next = nullptr;
    }
    Node(int x)
    {
        this->value = x;
        this->next = nullptr;
    }
};
class linked_list
{
    Node *head;

public:
    linked_list()
    {
        head = nullptr;
    }
    void insertAtBegin(int n)
    {
        Node *temp = new Node(n);
        if (head == nullptr)
        {
            head = temp;
            temp->next = nullptr;
            return;
        }
        temp->next = head;
        head = temp;
    }
    void deleteEnd()
    {
        Node *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = nullptr;
    }
    void Print()
    {
        Node *temp = head;
        if (temp == nullptr)
        {
            cout << "List is Empty\n";
        }
        while (temp != nullptr)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    linked_list lst;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        lst.insertAtBegin(i);
    }
    lst.deleteEnd();
    lst.Print();
}
