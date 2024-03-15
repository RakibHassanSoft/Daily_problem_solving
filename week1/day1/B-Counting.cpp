#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<0<<"\n";
    }else{
        int result=b-a+1;
        cout<<result<<"\n";
    }

    return 0;
}