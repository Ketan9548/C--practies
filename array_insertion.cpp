#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 1, 3, 4};
    int a, b;
    cout << "enter the position of a which you have to inserted :" << endl;
    cin >> a;
    cout << endl;
    cout << "enter the value of b which you have to inserted :" << endl;
    cin >> b;
    // shifted element to right
    for (int i = 9; i > a; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[a] = b;

    cout << "updated array is: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}