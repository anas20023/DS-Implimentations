#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int x,tp;
    int arr[1000];

public:
    Stack()
    {
        tp=-1;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            arr[i] = 0;
        }
    }
    void push(int n)
    {
        tp++;
        arr[tp]=n;

    }
    void display()
    {
        for(int i =x-1;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    Stack s1;
    while(1)
    {
        int m;
        cin>>m;
        s1.push(m);
        s1.display();
    }
}
