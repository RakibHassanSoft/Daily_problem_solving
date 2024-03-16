#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        int lg = -1;
        for (int i = 2 * n - 1; i >= n; i--)
        {
            if (s[i] == 'g')
                lg = i;
        }
        // cout << lg<< " first ";
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {   
            // cout << lg<< " beforr ";
            if (s[i] == 'g')
                lg = i;
                // cout << lg<< " mid ";
            if (s[i] == c)
                ans = max(ans, lg - i);
            cout << lg<< " after "<<ans<<" i "<<i<<endl;
        }
        cout << ans << "\n";
    }
    return 0;
}

// 6 first 6 beforr 6 mid 6 after 
// 6 beforr 6 mid 6 after 
// 6 beforr 2 mid 2 after 
// 2 beforr 1 mid 1 after 
// 1 beforr 1 mid 1 after 


// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         string  s;
//         char x;
//         cin >> x >> s;
//         s += s;
//         bool f = false;

//         int cnt = 0, res = 0;

//         if (x == 'g')
//         {
//             cout << 0 << endl;
//             continue;
//         }

//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == 'g')
//             {
//                 res = max(res, cnt);
//                 f = false;
//             }

//             if (s[i] == x and f == false)
//             {
//                 f = true;
//                 cnt = 0;
//             }

//             if (f)
//                 cnt++;
//         }

//         cout << res << endl;
//     }
// }