#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin >> a >> b >>t;

    int result = (t + .5)/ a;

    int finalResult = result * b;

    cout << finalResult << "\n"; 
    

    return 0;
}