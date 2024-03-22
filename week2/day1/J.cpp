#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin >> l;
    while (l--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            char str;
            cin >> str;
            if (str == 'G' || str == 'B' )
            {
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
        else
        {
            string str1, str2;
            cin >> str1 >> str2;

            for (int i = 0; i < n; i++)
            {
                if (str1[i] == 'B' || str2[i] == 'B')
                {
                    str1[i] = 'G';
                    str2[i] = 'G';
                }
            }

            //   cout << str1 <<" "<< str2<<"\n";
            if (str1 == str2)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }

    return 0;
}