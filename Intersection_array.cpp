#include <iostream>
#include <vector>
using namespace std;
vector<int> findintersaction(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    vector<int> ans;
    vector<int> marker(m,0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j] && marker[j] == 0)
            {
                ans.push_back(arr1[i]);
                marker[j] = 1;
                break;
            }
            else if (arr2[j] > arr1[i])
            {
                break;
            }
        }
    }

    return ans;
}
int main()
{
    vector<int> a = {1, 2, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 3};
    int n = a.size();
    int m = b.size();
    vector<int> ans = (findintersaction(a, b, n, m));
    for (auto &&i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// int main()
// {
//     unordered_map<int, int> m;
//     vector<int> ans = {1, 1, 1, 2, 3, 3, 3, 4, 4, 4};
//     for (int i = 0; i < ans.size(); i++)
//     {
//         m[ans[i]]++;
//     }

//     for (auto &&i : m)
//     {
//         cout << i.first << " " << i.second<<endl;
//     }

//     return 0;
// }