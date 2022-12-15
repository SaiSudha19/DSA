//write a recursive function to print numbers from 1 to n for given n
#include <iostream>

using namespace std;
void fun(int n)
{
    if(n==0)
    return;
    else
    {
        fun(n-1);
        cout<<n;
    }
}

int main()
{
    fun(3);

    return 0;
}
