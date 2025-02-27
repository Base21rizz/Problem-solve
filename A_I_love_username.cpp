#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        v.push_back(number);
    }
    int min_number = v[0];
    int max_number = v[0];
    int score = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] < min_number || v[i]>max_number)
        {
            score++;
        }
        min_number = min(min_number,v[i]);
        max_number = max(max_number,v[i]);
    }
    cout << score;
    return 0;
}