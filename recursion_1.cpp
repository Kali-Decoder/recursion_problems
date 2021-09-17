#include<iostream>
using namespace std;

void numb(int n)
{
    if(n == 11)
    {
        return ;
    }
    cout<<n<<endl;
    numb(n+1);
}

int main()
{  
     numb(1);

    return 0;
}