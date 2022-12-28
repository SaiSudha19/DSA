#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={2,6,1,4};
    sort(v.begin(),v.end());
    for(int x:v)
    cout<<x<<" ";
    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;
    for(int x:v)
    cout<<x<<" ";
}

