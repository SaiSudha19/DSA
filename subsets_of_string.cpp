#include <iostream>

using namespace std;
void printsub(string s,string curr=" ",int index=0)
{
    if(index==s.length())
    {
        cout<<curr<<" ";
        return;
    }
    printsub(s,curr,index+1);
    printsub(s,curr+s[index],index+1);
}
int main()
{
    printsub("abc");
    return 0;
}
