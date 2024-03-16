#include <iostream>
using namespace std;

int main()
{
    int arr1size = 5, arr2size = 5;
    int arr_resultsize = arr1size + arr2size;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int c[arr_resultsize];

    int l = 0, r = 0;

    // Merge the arrays using two pointers l and r
    for (int k = 0; k < arr_resultsize; ++k)
    {
        if (l < arr1size )
        {  
            if((r >= arr2size || a[l] <= b[r])){
                c[k] = a[l++];
            }
            
        }
        else
        {
            c[k] = b[r++];
        }
    }

    // Output the merged array
    for (int x = 0; x < arr_resultsize; x++)
    {
        cout << c[x] << " ";
    }

    return 0;
}

// word game
//  #include <iostream>
//  #include <map>
//  #include <vector>
//  using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         map<string, int> freq;

//         vector<string> a[3];
//         for (int i = 0; i < 3; i++)
//         {
//             a[i].resize(n);
//             for (int j = 0; j < n; j++)
//             {
//                 cin >> a[i][j];
//                 freq[a[i][j]]++;
//             }
//         }

//         int p[3] = {0};
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (freq[a[i][j]] == 1)
//                 {
//                     p[i] += 3;
//                 }
//                 else if (freq[a[i][j]] == 2)
//                 {
//                     p[i] += 1;
//                 }
//             }
//         }

//         cout << p[0] << " " << p[1] << " " << p[2] << endl;
//     }
//     return 0;
// }
