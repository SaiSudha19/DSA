#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cout<<"enter x:";
    int x;
    cin>>x;
    int i;
      for( i=0;i<n;++i)
  {
      if(x==a[i])
        {
            for(int j=i;j<n-1;j++)
            {
            a[j]=a[j+1];
            }
        }
         
  }
  for(int i=0;i<n-1;i++)
            {
            cout<<a[i];
            }
            return n-1;
  
}
