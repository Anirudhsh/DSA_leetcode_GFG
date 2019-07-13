#include <iostream>

using namespace std;

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
    //printing array before bubble sort
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" "; 
    }
    cout<<"\n";
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    //printing array after bubble sort
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" "; 
    }
    cout<<"\n";
    return 0;

}
