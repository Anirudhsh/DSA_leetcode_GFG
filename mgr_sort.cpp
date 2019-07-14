#include<bits/stdc++.h>

using namespace std;
/*
DIVIDE
SORT
MERGE
REPEAT
 */
void merge(int a[],int p,int r)
{
    int mid = (p+r)/2;
    int l=r+p+1;
    int temp[l];
    int i=p;
    int j=mid+1;
    int q=p;
    while(i<=mid&&j<=r)
    {
        if(a[i]<a[j])
        {
            temp[q++]=a[i++];
        }
        else
        {
            temp[q++]=a[j++];
        }
    }
    while(i<=mid)
    {
        temp[q++]=a[i++];
    }
    while (j<=r)
    {
        temp[q++]=a[j++];
    }
    for(int i=p;i<=r;i++)
    {
        a[i]=temp[i];
    }
    
}
void mergeSort(int a[],int n,int m)
{
    //we always have a base case for a recursive fxn so here goes
    if(n>=m)
    {
        return;
    }
    else
    {
        int middle = (n+m)/2;
        mergeSort(a,n,middle);
        mergeSort(a,middle+1,m);
        merge(a,n,m);
    }
}
    

int main(int argc, const char** argv) 
{
    int a[7]={7,2,1,6,3,5,8};
    mergeSort(a,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}