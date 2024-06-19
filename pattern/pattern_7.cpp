// a a a
// b b b
// c c c

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1 + 64; i <= n + 64; i++)
    {
        for (int j = 1 + 64; j <= n + 64; j++)
        {
            cout << char(j) << " ";
        }
        cout << endl;
    }

    return 0;
}