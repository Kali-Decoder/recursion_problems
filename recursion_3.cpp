#include<iostream>
using namespace std;
void sumission(int i,int n,int sum)
{
    if(i==n)
    {
        sum+=i;
        cout<<sum<<endl;
        return;
    }
    sum+=i;
    sumission(i+1,n,sum);
}
int main()
{   sumission(1,20,0);
    return 0;
}