#include<iostream>
using namespace std;
void calcfib(int a,int b,int n)
{
    if(n==0)
    return;
    int c=a+b;
    cout<<c<<",";
    calcfib(b,c,n-1);
}
int main()
{   int a=0,b=1;
cout<<a<<","<<b<<",";
    int n=10; //Number of terms 
    calcfib(a,b,n-2);
    return 0;
}