#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;

    cout << "Enter search position : ";
    cin >> x;
    int res = linear_search(arr, n, x);

    cout << res << endl;
}