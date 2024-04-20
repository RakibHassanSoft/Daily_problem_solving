
int main() {
    long long X, Y;
    cin >> X >> Y;

    long long current = X;
    int length = 1;

    while (current * X <= Y) {
        current *= X;
        length++;
    }

    cout << length << endl;

    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;
// struct User
// {
//     int id;
//     char name[100];
//     char email[100];
//     char password[100];
// };
// void bubblesort(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int binarySearch(int arr[], int left, int right, int target)
// {
//     if (right >= left)
//     {
//         int mid = (right + left) / 2;

//         // base case
//         if (arr[mid] == target)
//             return mid;

//         // If the element is smaller than mid, then it can only be present in the left subarray
//         if (arr[mid] > target)
//             return binarySearch(arr, left, mid - 1, target);

//         // Else the element can only be present in the right subarray
//         return binarySearch(arr, mid + 1, right, target);
//     }

//     // Element is not present in the array
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     // struct User Arr[n];
//     // for (int i = 0; i < n; i++)
//     // {
//     //     scanf("%d %s %s %s", &Arr[i].id, &Arr[i].name, &Arr[i].email, &Arr[i].password);
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("%d %s %s %s\n", Arr[i].id, Arr[i].name, Arr[i].email, Arr[i].password);
//     // }

//     // int arr[n];
//     // for (int i = 0; i < n; i++)
//     // {
//     //     scanf("%d", &arr[i]);
//     // }
//     // bubblesort(arr, n);
//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     // // First, sort the array
//     // bubblesort(arr, n);
//     // // Then, perform the binary search
//     // int target = 1;
//     // int index = binarySearch(arr, 0, n - 1, target);
//     // cout<<"\n"<<index;


//     return 0;
// }

// // *
// //    **
// //   ***
// //  ****