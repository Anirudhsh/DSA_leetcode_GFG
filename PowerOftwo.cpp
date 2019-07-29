#include<bits/stdc++.h>

using namespace std;

//Method With O(Logn) time complexity where n is the number
bool powerOfTwo1(int c)
{
    while(c%2==0)
    {
        c/=2;
    }
    return (c==1);
}
//Method with O(1) time complexity 
bool powerOfTwo2(int c)
{
    /*
        if x=16 then in binary it is (1000)
        then x-1=15 and it is (0111)

        if x=32 then in binary its (10000)
        then x-1=31 and it is (01111)

        so x&(x-1) is zero for powers of two
     */
    if(c==0)
    {
        return 0;
    }
    else
    {
        return(!(c&(c-1)));
    }
    
}

int main()
{
    int x;
    cout<<"Enter Number To Check If It Is Power Of Two\n";
    cin>>x;
    cout<<powerOfTwo1(x)<<" "<<powerOfTwo2(x)<<"\n";
    return 0;
}