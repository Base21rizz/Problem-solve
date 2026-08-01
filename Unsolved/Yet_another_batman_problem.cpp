#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

const int N = 1e6 + 9;
vector<string> v;
vector<int> primes;
bool f[N];

void sieve(int n)
{
    f[0] = f[1] = true;
    for (int i = 2; i <= n; i++)
    {
        if (!f[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                f[j] = true;
            }
        }
    }
}

int is_available(string s)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == s)
            return 1;
    }
    return -1;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int abc;
    cin >> s >> abc;
    while (true)
    {
        if (v.size() == (s.size() * (s.size() - 1)))
            break;
        string x = s;
        random_shuffle(x.begin(), x.end());
        if (is_available(x) == -1)
            v.push_back(x);
    }
    /* for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    } */
    vector<int> values;
    for (int m = 0; m < v.size(); m++)
    {
        int temp = 0;
        string k = v[m];
        for (int i = k.size() - 1, j = 1; i >= 0; i--, j *= 10)
        {
            temp += (((int)k[i] - 48) * j);
        }
        values.push_back(temp);
    }

    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
    }
    vector<int> ldsfh = values;
    sort(ldsfh.begin(), ldsfh.end());
    sieve(ldsfh[ldsfh.size() - 1]);
    vector<int> finals;
    for (int i = 0; i <= values.size(); i++)
    {
        for (int j = 0; j < primes.size(); j++)
        {
            if (values[i] == primes[j])
            {
                finals.push_back(values[i]);
            }
        }
    }

    for (int i = 0; i < ldsfh.size(); i++)
    {
        cout << ldsfh[i] << " ";
    }

    return 0;
}