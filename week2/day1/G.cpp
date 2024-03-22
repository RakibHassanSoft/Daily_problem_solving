#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int length;
        cin >> length;
        string str;
        cin >> str;

        string target = "Timur";

        sort(str.begin(), str.end());
        sort(target.begin(), target.end());

        if (str == target) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}



// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int length;
//         cin >> length;
//         string str;
//         cin >> str;

//         // Check if the length is 5 and if the string is a permutation of "Timur"
//         if (length == 5 && is_permutation(str.begin(), str.end(), "Timur")) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
