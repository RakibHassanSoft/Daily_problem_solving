#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int itemCount, itemCost;
        cin >> itemCount >> itemCost;

        int totalBill = itemCount * itemCost;

        if (totalBill >= 10000 && totalBill <= 99999) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}



// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int totalPeople, hallCapacity;
//         cin >> totalPeople >> hallCapacity;

//         if (totalPeople <= hallCapacity) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
