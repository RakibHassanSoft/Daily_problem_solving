//wrong

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
     
     int num = 0;
    for( int i = a; i < b; i++){
        if(i%c==0){
            num=i;
            break;
        }
    }

   if(num==0){
    cout << -1 << "\n";
   }else{
    cout << num << "\n";
   }
    return 0;
}