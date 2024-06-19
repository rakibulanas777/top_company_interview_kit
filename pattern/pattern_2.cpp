// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n * n; i++)
    {
        if (i % n == 0)
        {
            cout << i << " ";
            cout << endl;
        }
        else
        {
            cout << i << " ";
        }
    }

    return 0;
}