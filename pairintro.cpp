#include <iostream>
using namespace std;
struct Pair
{
    int min;
    int max;
};
Pair getminmx(int a, int b)
{
    Pair minmax;

    minmax.min = a;
    minmax.max = b;

    return minmax;
}
int main()
{
    int k, l;
    k = 4;
    l = 9;

    Pair values = getminmx(k, l);
    cout << "min: " << values.min << " max: " << values.max << endl;
    return 0;
}