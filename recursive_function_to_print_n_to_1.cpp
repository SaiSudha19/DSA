//write a recursive function to print numbers from n to 1 for given n
#include <iostream>

using namespace std;
void print(int n)
{
    if(n==0)
    return ;
    else
    {
        cout<<n;
        print(n-1);
    }
}
int main()
{
    print(6);

    return 0;
}

