// Way 1
#include <bits/stdc++.h>
using namespace std;

// char find(set<char> chars)
char findChar(unordered_set<char> chars)
{
    for (char letter = 'a'; letter <= 'z'; ++letter)
    {

        // if the letter address has no element
        // cout << *chars.end()<< " " << *chars.find(letter);
        if (chars.find(letter) == chars.end())
            return letter;
    }
    return 0;
}

// char findChar1(unordered_set<char> chars)
char findChar1(set<char> chars)
{
    for (char letter = 'a'; letter <= 'z'; ++letter)
    {
        bool found = true;
        //filtering level 1
        for (char c : chars)
        {
            if (c == letter)
            {
                found = false;
                break;
            }
        }
        //filtering level 2
        if (found)
        {
            return letter;
        }
    }
    return 0;
}
int main()
{
    string S;
    cin >> S;

    // unordered_set<char> chars;
    set<char> chars;
    for (char c : S)
    {
        chars.insert(c);
    }

    char result = findChar1(chars);
    
    if ((int)result != 0)
    {
        cout << result << "\n";
    }
    else
    {
        cout << "None" << "\n";
    }

    return 0;
}
