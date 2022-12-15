#include <iostream>

using namespace std;

bool fun(string s,int m,int k)
{
    if(m=k||m>k)
    return true;
    if(s[m]!=s[k])
    return false;
    else
    return fun(s,m+1,k-1);
}
int main()
{
    string s="abcba";
    cout<<fun(s,0,4);

    return 0;
}
