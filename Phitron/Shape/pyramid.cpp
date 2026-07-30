#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int star = 1, space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = space; j > 0; j--)
            cout << " ";

        for (int j = 1; j <= star; j++)
            cout << "*";

        cout << "\n";
        star += 2;
        space--;
    }
    return 0;
}