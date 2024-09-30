// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {3, 2, 1, 4, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{ 
    int m = 10;
    vector<int> marker(m, 0);
    for (auto &&i : marker)
    {
        cout << i << " ";
    }

    return 0;
}