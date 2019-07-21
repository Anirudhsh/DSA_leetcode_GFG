#include<bits/stdc++.h>

using namespace std;

int fun(int x)
{
    if(x>=5)
    {
        cout<<"5";
        return x;
    }
    else
    {
        cout<<" Called "<<x<<" \n";
        return fun(x+1) + x;
    }
    
}

int main()
{
    fun(1);
    return 0;
}