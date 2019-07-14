#include<bits/stdc++.h>

using namespace std;

void insSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key = a[i];
        int j=i-1;
        while(key<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    int a[5]={5,3,1,7,2};
    insSort(a,5);
    for(int i=0;i<5;i++)
   {
       cout<<a[i]<<" ";
   }
    return 0;
}