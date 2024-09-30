#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> v = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    vector<int> v = {10, 20, -30, 40, -50, 60};
    int n = v.size();
    int sum = 0;
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum = sum + v[j];
            if(sum < 0){
                sum = 0;
            }
            cout << v[j] << " ";
        }
        maxsum = max(maxsum, sum);
        sum = 0;
        cout<<endl;
    }
    // cout << maxsum;
    return 0;
}