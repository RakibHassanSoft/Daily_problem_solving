

// ans C


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
        string str;
        cin >> str;
        string answerString = "";
 
        for (int i = 0; i < n; i++)
        {  
     
            if (i + 2 < n && str[i + 2] == '0' && (i + 3 >= n || str[i + 3] != '0'))
            {
                int num = ((str[i] - '0') * 10) + (str[i + 1] - '0');
                answerString.push_back((char)(96 + num));
                i += 2;
            }
            else
            {
                int num = ((str[i] - '0'));
                answerString.push_back((char)(96 + num));
            }
        }
 
        cout << answerString << endl;
    }
 
    return 0;
}