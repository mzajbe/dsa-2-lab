#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}

int main()
{
    for (int i = 1; i <=6; i++)
    {
        int factorial = fac(i);
        cout << i<< "--->"<< factorial << endl;
    }

    return 0;
}