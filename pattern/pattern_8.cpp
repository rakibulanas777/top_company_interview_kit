// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {

            if (i >= 2 && i <= n * 2 - 2 && j >= 2 && (j <= n * 2 - 2))
            {
                cout << " ";
            }
            else
            {
                cout << n << " ";
            }
        }
        cout << endl;
    }

    return 0;
}