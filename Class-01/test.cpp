#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // return fib(n - 1) + fib(n - 2);
        return n * fib(n-1);
    }
}

int main()
{
    for (int i = 1; i <=6; i++)
    {
        int factorial = fib(i);
        cout << i<< "--->"<< factorial << endl;
    }

    return 0;
}