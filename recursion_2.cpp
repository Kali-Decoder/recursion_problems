#include<iostream>
using namespace std;
void numb(int n)
{
    if(n==0)
    return;
    cout<<n<<endl;
    numb(n-1);
}
int main()
{   numb(10);
    return 0;
}