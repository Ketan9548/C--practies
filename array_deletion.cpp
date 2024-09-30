#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 2, 13, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a;
    cout << "enetr the value which you want deleated: " << endl;
    cin >> a;
    for (int i = a; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    n = n - 1;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}