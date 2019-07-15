#include<bits/stdc++.h>

using namespace std;

void merge(int a[],int s,int e)
{
    int mid = (s+e)/2;
    int temp[e-s+1];
    int i=s;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while(i<=mid)
    {
         temp[k++] = a[i++];
    }
    while(j<=e)
    {
         temp[k++] = a[j++];
    }
    i=s;
    j=0;
    while(i<=e)
    {
        a[i++] = temp[j++];
    }
}
void mergesort(int a[],int s,int e)
{
    int mid = (s+e)/2;
    if(s>=e)
    {
        return;
    }
    else
    {
        mergesort(a,s,mid);
        mergesort(a,mid+1,e);
        merge(a,s,e);
    }
    

}

int main()
{
    int a[8]={6,2,4,1,5,3,8,7};
    mergesort(a,0,7);
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }
}