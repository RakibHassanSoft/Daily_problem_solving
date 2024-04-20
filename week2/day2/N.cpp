#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin >> l;
    while(l--){
        
        int x, y;
        cin >> x >> y;

        vector<char> V(x);

        for( int i = 0; i< x ;i++){
            if(i == y){
                continue;
            }
            cin >> V[i];
        }
        

        for( auto x : V){
            cout << x;
        }


    }
    

    return 0;
}