


//B   https://codeforces.com/problemset/problem/1729/C

#include <bits/stdc++.h>
using namespace std;
// Custom sorting function to sort pairs based on the index directly
bool sortByIndex(const pair<char, int> &a, const pair<char, int> &b) {
    return a.second < b.second;
}
int main()
{

    int l;
    cin >> l;
    while (l--)
    {

        string s;
        cin >> s;
        int n = s.length();

        // creating a vector that can hold all the value like char and index
        vector<pair<char, int>> charAndNumberStor;

        // definig 2 varibale that will help us to think about the char that we can take
        char mn = min(s[0], s[n - 1]), mx = max(s[0], s[n - 1]);

        // storing input without extra char
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= mn && s[i] <= mx)
            {
                charAndNumberStor.push_back({s[i], i});
            }
        }

        // Sorting the pair based on the index directly using the custom sorting function
        sort(charAndNumberStor.begin(), charAndNumberStor.end(), sortByIndex);

        // sorting without first and last char and if first char is > last then sort by small to big else do big to small
        if (charAndNumberStor.size() > 2)
        {
            sort(charAndNumberStor.begin() + 1, charAndNumberStor.begin() + charAndNumberStor.size() - 1, [&](pair<char, int> a, pair<char, int> b)
                 {
                if (s[0] > s[n - 1]) {
                    return a.first > b.first;
                }
                return a.first < b.first; });
        }



        // for index storing
        vector<int> seq;
        long long moves = 0;

        // first here will be one number index
        seq.push_back(1);

        // counting
        for (int i = 1; i < charAndNumberStor.size(); i++)
        {
            // difference of char add adding in moves
            moves += abs(charAndNumberStor[i - 1].first - charAndNumberStor[i].first);
            // indsex is adding in seq;
            seq.push_back(charAndNumberStor[i].second + 1);
        }

        // printing the result
        cout << moves << " " << seq.size() << "\n";
        for (auto index : seq)
        {
            cout << index << " ";
        }
        cout << "\n";
    }

    return 0;
}

