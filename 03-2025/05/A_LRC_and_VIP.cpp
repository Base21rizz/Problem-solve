/* #include <bits/stdc++.h>
#include<numeric>
#define int long long
#define vi vector<int>
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) 
    {
        int n;
        cin >> n;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.pb(num);
        }
        int b=v[0];
        for (int i = 0; i < n-1; i++)
        {
            b = __gcd(b,v[i]);
        }
        
        if(b != v[n-1])
        {
            Yes
            for (int i = 0; i < n-1; i++)
            {
                cout << '2' << ' ';
            }
            cout << '1' << endl;
        }
        else
        {
            No
        }
    }
    return 0;
} */

#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define vi vector<int>
#define all(a) a.begin(),a.end()
using namespace std;

signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);


	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		vi v(n);
		for(auto &i :  v) cin>>i;
		int maxElem = *max_element(all(v));
		int minElem = *min_element(all(v));
		if(maxElem == minElem) cout<<"No"<<endl;
		else{
			cout<<"Yes"<<endl;
			for (int i = 0; i < n; ++i)
			{
				if(v[i] == maxElem) cout<<2<<" ";
				else cout<<1<<" ";
			}
			cout<<endl;
		}
	}

return 0;
}