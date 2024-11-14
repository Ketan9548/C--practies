// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v = {2, 1, 4, 5, 12, 992, 8, 6};
//     // vector<int> v = {3, 5, 7, 8, 9, 10, 13, 19};
//     int n = v.size();
//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (v[i] > v[i + 1])
//             {
//                 swap(v[i], v[i + 1]);
//             }
//         }
//         counter++;
//     }
//     for (auto &&i : v)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {91, 43, 14, 4, 3, 2, 1, 191, 21};
    int n = v.size();
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
            }
        }
        counter++;
    }

    for (auto &&i : v)
    {
        cout << "value is: " << i << endl;
    }

    return 0;
}   