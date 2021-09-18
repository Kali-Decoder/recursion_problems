#include<iostream>
using namespace std;
float e(float x, float n)
{
    float s=1;
    for(;n>0;n--)
    {
        s=1 + (x/n)*s;

    }
    return s;
}
int main()
{   cout<<e(1,3)<<endl;
    return 0;
}