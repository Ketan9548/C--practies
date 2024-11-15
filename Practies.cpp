#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {3,42,221,4,53,2,121,53};
    int n = v.size();
    int smaller = v[0];
    for (int i = 0; i < n; i++)
    {
        if(v[i]<smaller){
            smaller = v[i];
        }
    }
    cout<<smaller;
             
    return 0;
}