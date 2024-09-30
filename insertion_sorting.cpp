#include <iostream>
#include <vector>
using namespace std;
void insertionsort(vector<int> arr, int n)
{
    int minval = arr[n - 1];
    for (int i = n-2; i >= 0; i--)
    {
        if (arr[i] > minval)
        {
            arr[i+1] = arr[i];
        }
        else if (arr[i] < minval)
        {
            arr[i+1] = minval;
            break;
        }
    }
    for (auto &&i : arr)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> a = {2, 4, 6, 8, 3};
    int n = a.size();
    insertionsort(a, n);
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v = {2, 4, 3, 1, 5, 6};
//     int a = v.size();
//     for (int i = a-1; i >= 0; i--)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }