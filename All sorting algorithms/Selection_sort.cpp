#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {3, 2, 15, 32, 76, 12, 23, 43};
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min_ind])
            {
                min_ind = j;
            }
        }
        swap(v[i],v[min_ind]);
    }

    for (auto &&i : v)
    {
        cout << i << " ";
    }
    return 0;
}
 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v = {3, 2, 15, 32, 76, 12, 23, 43};
//     int n = v.size();
//     int smaller;

//     for (int i = 0; i < n - 1; i++)
//     {
//         int Max_element = v[i];
//         int smaller = v[i + 1];
//         for (int j = i + 1; j < n; j++)
//         {
//             if (v[j] < smaller)
//             {
//                 smaller = v[j];
//                 cout << smaller << " ";
//             }
//         }
//         if (Max_element > smaller)
//         {
//             swap(Max_element, smaller);
//         }
//     }

//     for (auto &&i : v)
//     {
//         // cout << i << " ";
//     }
//     return 0;
// }