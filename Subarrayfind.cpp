// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     int n = v.size();
//     int i = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k < j; k++)
//             {
//                 cout << v[k] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }

// prifix sum
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v = {10, 20, 10, 5, 15};
//     int n = v.size();

//     for (int i = 1; i < n; i++)
//     {
//         v[i] = v[i] + v[i - 1];
//     }

//     for (auto &&i : v)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

// postfix sum