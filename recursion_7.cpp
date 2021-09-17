#include<iostream>
using namespace std;
int calculatePow(int x,int n)
{
    if(n==0)
    return 1;
    if(x==0)
    return 0;

    if(n%2==0)
    return calculatePow(x,n/2)*calculatePow(x,n/2);
    else
    return calculatePow(x,n/2)*calculatePow(x,n/2)*x;

}
int main()
{   int ans=calculatePow(2,10);
    cout<<ans<<endl;
    return 0;
}