/*
combination-> nCr means the number of different combinations of 'r' object taken at a time
from a pool of 'n' objects;

comb(n,r) = n!/(n!*(n-r)!)  -> combination formula
comb(n,r) = comb(n-1,r)+comb(n-1,r-1) -> recursive combination formula

terminating conditions
comb(a,0)=1;
comb(a,a)=1;

*/

#include<bits/stdc++.h>
using namespace std;

int comb(int n,int r){
    if(r==0){
        return 1;
    }else if(n==r){
        return 1;
    }else{
        return comb(n-1,r)+comb(n-1,r-1);
    }
}
int main(){
    int value = comb(25,15);
    cout << value << endl;

    return 0;
}