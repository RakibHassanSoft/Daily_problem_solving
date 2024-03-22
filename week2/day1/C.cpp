#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x;
    cin >> n >> x;

    vector<long long> V(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    // for (auto y : V)
    // {
    //     if (y == x)
    //         V.pop_back();
    // }
    V.erase(remove(V.begin(), V.end(), x), V.end());
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i];
        if (i != V.size() - 1)
            cout << " ";
    }

    return 0;
}