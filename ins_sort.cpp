#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }

    for (int i = 1; i < n; i++)
    {
        int curr_val = vc[i];
        int prev_idx = i - 1;
        while (prev_idx >=0 && vc[prev_idx] > curr_val)
        {
            vc[prev_idx + 1] = vc[prev_idx];
            prev_idx--;
        }
        vc[prev_idx + 1] = curr_val;
    }
    for (int i = 0; i < n; i++)
    {
        cout << vc[i] << " ";
    }

    return 0;
}