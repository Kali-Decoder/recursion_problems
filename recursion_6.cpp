#include<iostream>
using namespace std;
int calcxPow(int x, int n)
{   
    if(n==0)
    return 1;
    if(x==0)
    return 0;
    int calcxPownm1=calcxPow(x,n-1);
    int xpow=x*calcxPownm1;
    return xpow;
}
int main()
{   
    int powerValue=calcxPow(2,10);
    cout<<powerValue;
    return 0;
}