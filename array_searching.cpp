#include <iostream>
#include <vector>
using namespace std;
vector<int> moveZeros(int n, vector<int> a)
{
    vector<int> nonzero;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            nonzero.push_back(a[i]);
        }
    }
    int n1 = nonzero.size();
    int j = 0;
    for (int i = 0; i < n1; i++)
    {
        a[i] = nonzero[j];
        j++;
    }
    for (int i = n1; i < n; i++)
    {
        a[i] = 0;
    }
    return a;
}

int main()
{
    vector<int> val = {1, 2, 0, 0, 2, 3};
    int n = val.size();
    vector<int> result = moveZeros(n, val);
    for (auto &&i : result)
    {
        cout << i << " ";
    }

    return 0;
}