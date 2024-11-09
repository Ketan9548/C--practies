#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 12};
    string s = "";
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        s = s + to_string(v[i]);
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout<<typeid(s[i]).name() << " ";
    }

    return 0;
}