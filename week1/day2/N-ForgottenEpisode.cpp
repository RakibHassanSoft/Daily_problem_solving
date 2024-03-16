#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> S;
    int n;
    cin >> n;
    
    int sum = 0,sum1=0;
    for (int i = 1; i <=n; i++)
    {
        int x;
        cin >> x;
        sum1+=i;
        S.insert(x);
    }

    vector<int> V;

    for( auto x : S){
        V.push_back(x);
        sum+=x;
    }

   cout<<abs( sum- sum1);

    return 0;
}