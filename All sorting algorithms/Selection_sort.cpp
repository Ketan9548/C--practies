#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {3, 2, 15, 32, 76, 12, 23, 43};
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }

    for (auto &&i : v)
    {
        cout << i << " ";
    }
    return 0;
}