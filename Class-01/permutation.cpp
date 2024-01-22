/*
Permutation-> npr means the number of different permutation of 'r' objects taken at a time from a pool of 'n' objects;
n>=r

perm(a,0)=1;
perm(a,a)=a!;
perm(n,r)= r! * perm(n-1,r-1) + perm(n-1,r); //recursive definition
*/

#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int perm(int n, int r)
{
    if (r == 0)
    {
        return 1;
    }
    else if (n == r)
    {
        return fact(r);
    }
    else
    {
        return r * perm(n - 1, r - 1) + perm(n - 1, r);
    }
}
int main()
{
    int value = perm(7,4);
    cout << value << endl;

    return 0;
}