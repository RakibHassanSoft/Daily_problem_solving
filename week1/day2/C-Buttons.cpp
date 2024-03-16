//Done

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    if (a > b)
    {
        // cout << "Here a is " << a << "\n";
        cnt += a;
        a--;
    }else{
        // cout << "Here b is " << b << "\n";
        cnt += b;
        b--;
    }

    if (b > a)
    {
        // cout << "Here b is " << b << "\n";
        cnt += b;
        b--;
    }
    else{
        // cout << "Here b is " << a << "\n";
        cnt += a;
        a--;

    }
   

    cout << cnt << "\n";

    return 0;
}
