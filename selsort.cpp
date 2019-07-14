#include <bits/stdc++.h>

using namespace std;
//IMPLEMENTING SELECTION SORT
int main()
{
    int n;
    cout<<"Enter Array Length\n";
    cin>>n;
    int a[n];
    cout<<"Enter Elements\n";
    for (int i=0;i<n;i++)
    {
        cin>>a[i]; 
    }
    //printing array before selection sort
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" "; 
    }
    cout<<"\n";
    //Performing selection sort
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
               min=j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    //printing array after selection sort
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" "; 
    }
    cout<<"\n";
    return 0;
}
