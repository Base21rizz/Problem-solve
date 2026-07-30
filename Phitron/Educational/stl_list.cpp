#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

signed main()
{
    // list<int> l; list declaration
    // list<int> l(10) with size
    // list<int> l(10, 3);  with size and repititve value
    // with datas directly
    list<int> l = {1, 20, 3, 50, 5, 20, 7};
    // copying list to another list O(n)
    // list<int> l2(l);
    // copying array to list and vector
    // list<int> l3(arr, arr + n); array
    // list<int> l3(v.begin(), v.end()); vector

    // using iterator to go through all datas in list
    /* for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    } */

    // l.clear(); clearing a list
    // l.empty(); checking a list is whether empty or not
    // l.resize(x, y); resizing a list to x size with y values can also be done without specifying the value

    // l2 = l; assing another list
    // l2.asiign(l.begin(), l.end()); assing another list

    // l.push_back(6);  // inserting at tail
    // l.push_front(0); // inserting at head

    // l.pop_back();  // delete at tail
    // l.pop_front(); // delete at front

    // accessing the i'th element
    // cout << *next(l.begin(), 2) << endl; // here i = 2

    // l.insert(next(l.begin(), 2), 100); // inserting at any index(index is accesed by the next STL)
    /* inserting here and in vector causes same O(n) but
    for vecotr getting to the index takes O(1) + inserting takes O(N) = O(N)
    here getting to the index takes O(n) + inserting takes O(1) = O(N) */

    // l.insert(next(l.begin(), 2), l2.begin(), l2.end()); // inserting a whole list starting from the indext gotten from next
    // l.insert(next(l.begin(), 2), v.begin(), v.end()); // inserting a whole vector starting from the indext gotten from next

    // l.erase(next(l.begin(), 3)); // erasing at index
    // l.erase(next(l.begin(), 2), next(l.begin(), 5)); // erasing from index to another index

    // replace(l.begin(), l.end(), 20, 100); // replaces all occurance of 20 with 100

    // Using find to find a value
    /* auto it = find(l.begin(), l.end(), 20); // finding 20 by searching from begin to end
    if (it == l.end())
        cout << "Not found" << endl;
    else
        cout << "Found" << endl; */

    // l.remove(20); // removes occurances of value = 20
    // l.sort(); // sorting a list increasing
    // l.sort(greater<int>()); // sorting a list decreasing

    // l.unique(); // Finds unique only if the list is sorted

    // l.reverse(); // reversing a list

    // cout << l.front() << endl; // prints head
    // cout << l.back() << endl;  // prints tail

    // using range based iterator to go through all datas in list
    for (auto it : l)
    {
        cout << it << endl;
    }
    return 0;
}