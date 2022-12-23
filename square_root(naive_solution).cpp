#include <iostream>

using namespace std;

int fun(int x)
{
    int i=1;
    while(i*i<=x)
    i++;
    return(i-1);
}
int main()
{
    cout<<fun(10);

    return 0;
}
