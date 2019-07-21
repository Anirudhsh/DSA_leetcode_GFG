#include<bits/stdc++.h>

using namespace std;

int fun(int x)
{
    static int c=0;
    if(x<=0)
    {
        return x;
    }
    else
    {
        c++;
        cout<<" Called "<<x<<" With c value "<<c<<"\n";
        return fun(x-1) + c;
    }
    
}

int fun1(int x)
{
    int c=0;
    if(x<=0)
    {
        return x;
    }
    else
    {
        c++;
        cout<<" Called "<<x<<" With c value "<<c<<"\n";
        return fun1(x-1) + c;
    }
    
}


int main()
{
    int x=fun(10);
    int y=fun1(10);
    cout<<x<<" "<<y;
    return 0;
}