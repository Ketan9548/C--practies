#include <iostream>
#include <vector>
using namespace std;
// void selectionsort(vector<int> arr, int n)
// {
//     vector<int> temp(n);

//     for (int i = 0; i < n; i++)
//     {
//         int min_val = 0;
//         for (int j = 1; j < n; j++)
//         {
//             if (arr[j] < arr[min_val])
//             {
//                 min_val = j;
//             }
//         }
//         temp[i] = arr[min_val];
//         arr[min_val] = INT16_MAX;
//     }
//     for (int i = 0; i < temp.size(); i++)
//     {
//         arr[i] = temp[i];
//     }

//     for (auto &&i : arr)
//     {
//         cout << i << " ";
//     }
// }

void selectionsort(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minind])
            {
                minind = j;
            }
        }
        swap(arr[minind], arr[i]);
    }

    for (auto &&i : arr)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> a = {3, 5, 2, 1, 8, 7, 10};
    int n = a.size();
    selectionsort(a, n);
    return 0;
}