#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    vector<long long> v;
    long long sum = 0;
    for (long long  i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        v.push_back(x);
    }

    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        long long maxi = 0;
        for (long long i = 0; i < v.size(); i++)
        {
            sum -= v[i];
            if (sum % 2 == 0)
            {
                maxi = max(maxi, sum);
            }
            sum += v[i];
        }
        cout<<maxi;
    }

    return 0;
}
