#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        // int min_el=v[i];
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[i])
            {
                swap(v[j], v[i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}