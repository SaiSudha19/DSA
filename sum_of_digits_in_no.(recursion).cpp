#include <iostream>

using namespace std;

int fun(int n)
{
    if(n<10)
    return n;
    else
    {
        return fun(n/10)+n%10;
    }
}
int main()
{
    cout<<fun(253);

    return 0;
}
