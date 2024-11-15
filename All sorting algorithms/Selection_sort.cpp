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
        int min_element = v[i];
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < min_element)
            {
                swap(v[j],min_element);
            }
        }
    }

    for (auto &&i : v)
    {
        cout << i << " ";
    }
    return 0;
}