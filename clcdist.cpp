#include <bits/stdc++.h>
using namespace std;

// Function to calculate distance
float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

// Drivers Code
int main()
{
    cout << distance(3, 4, 4, 3);
    return 0;
}