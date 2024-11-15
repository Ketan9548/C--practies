#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {10, 5, 50, 30, 80, 60};
    int n = v.size();
    for (int i = 1; i < n - 1; i++)
    {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}