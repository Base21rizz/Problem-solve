#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        map<char, int> mp1, mp2;
        for (int i = 0; i < n; i++)
            mp1[s1[i]]++;
        for (int i = 0; i < n; i++)
            mp2[s2[i]]++;
        int count1in1 = mp1['1'];
        int count0in1 = mp1['0'];
        int count1in2 = mp2['1'];
        int count0in2 = mp2['0'];
        if (((count0in1 % 2 == 0 && count0in2 % 2 == 0) || (count0in1 % 2 != 0 && count0in2 % 2 != 0)) && ((count1in1 % 2 == 0 && count1in2 % 2 == 0) || (count1in1 % 2 != 0 && count1in2 % 2 != 0)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
