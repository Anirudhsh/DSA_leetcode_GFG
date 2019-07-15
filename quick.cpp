#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e)
{
    int parInd=s;
    int pivot=e;
    int i;
    for(i=s;i<e;i++)
    {
        if(a[i]<=a[pivot])
        {
            int temp = a[i];
            a[i] = a[parInd];
            a[parInd] = temp;
            parInd++;
        }
    }
    int temp = a[i];
    a[i] = a[parInd];
    a[parInd] = temp;

    return parInd;
}
void quickSort(int a[],int s,int e)
{
    if(s>e)
    {
        return;
    }
    else
    {
        int parInd = partition(a,s,e);
        quickSort(a,s,parInd-1);
        quickSort(a,parInd+1,e);
    }
    
}
int main()
{
    int a[8]={6,2,4,1,5,3,8,7};
    quickSort(a,0,7);
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
