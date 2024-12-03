#include <iostream>
using namespace std;

class Node{
    public:
    int val; Node* next;
    Node(){
        val=0;next=nullptr;
    }
    Node(int x){
        val=x;next=nullptr;
    }
};
class Linked_List{
    public:
    Node * head;
    Linked_List(){
        head=nullptr;
    }
    void insertAtHead(int x){
        Node* temp=new Node(x);
        temp->next=head;
        head=temp;
    }
    void insertAtback(int x){
        Node* temp=new Node(x);
        if(head==nullptr){
            head=temp;
            return;
        }
        Node* lastNode=head;
        while(lastNode->next!=nullptr){
            lastNode=lastNode->next;
        }
        lastNode->next=temp;
    }
    void showList(){
        Node* temp=head;
        while (temp!=nullptr)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }  
    }
};
int main() {
    Linked_List list;
    for (int i = 1; i <=5; i++)
    {
        if(i%2)list.insertAtHead(i);
        else list.insertAtback(i);
    }
    list.showList();
    return 0;
}
