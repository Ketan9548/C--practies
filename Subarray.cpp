// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v = {3, 2, 4, 7, 8, 1};
//     int n = v.size();
//     int sum = 0;
//     int maxsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             sum = sum + v[j];
//             cout << v[j] << " ";
//             // maxsum = 0;
//             // maxsum = max(maxsum, sum);
//         }
//         cout << endl;
//     }
//     // cout << maxsum;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}