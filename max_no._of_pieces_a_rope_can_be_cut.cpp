#include <iostream>
    using namespace std;
    int max(int a, int b, int c)
    {
        if(a>b&&a>c)
        return a;
        else if(b>a&&b>c)
        return b;
        else
        return c;
    
    }
    
    int maxpiece(int l, int a, int b, int c)
    {
        int r;
        if (l == 0) 
        {
            return 0;
        }
        if (l<0)
        {
            return -1;
        }
        
    
        r = max(maxpiece(l-a, a, b, c), maxpiece(l-b, a, b, c), maxpiece(l-c, a, b, c));
    
        if (r == -1)
            return -1;
    
        return r + 1;
    }
    
    int main()
    {
        int lenth;
        cout << "enter rope lenth ";
        cin >> lenth;
        int p1, p2, p3;
        cout << endl
             << "enter the only three parameters in which rope can be cut ";
        cin >> p1 >> p2 >> p3;
        cout << endl
             <<"ans = "<< maxpiece(lenth, p1, p2, p3);
    }
