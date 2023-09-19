#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, q;
    cin >> n >> q;
    // vector must be added.

    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        a[i].resize(s);
        for (int j = 0; j < s; j++)
        {
            cin >> a[i][j];
        }
    }
    // for (int k = 0; k < q; k++)
    // {
    //     cin >> a[i];
    //     cout<<a[i][k];

    //     for (int j = 0; j < s; j++)
    //     {
    //         // cout << ;
    //     }
    // }

    return 0;
}