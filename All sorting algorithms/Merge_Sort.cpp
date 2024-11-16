#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& v, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftarr(n1);
    vector<int> rightarr(n2);

    for (int i = 0; i < n1; i++)
    {
        leftarr[i] = v[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        rightarr[i] = v[mid + i + 1];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (leftarr[i] <= rightarr[j])
        {
            v[k] = leftarr[i];
            i++;
        }
        else
        {
            v[k] = rightarr[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        v[k] = leftarr[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        v[k] = rightarr[j];
        j++;
        k++;
    }
}
void MergeSort(vector<int>& v, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        // Sort Array
        MergeSort(v, left, mid);
        MergeSort(v, mid + 1, right);

        // Merge array
        merge(v, left, mid, right);
    }
}
int main()
{
    vector<int> v = {3, 1, 21, 54, 10, 90, 42, 76};
    int n = v.size();
    MergeSort(v, 0, n - 1);
    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}