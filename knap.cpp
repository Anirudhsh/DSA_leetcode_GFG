#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int n,m=30;
    cout<<"Enter number of objs\n";
    cin>>n;
    setprecision(2);
    float wei[n],pro[n],pru[n],tot=0,x[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter profit and weight of "<<i+1<<"th object\n";
        cin>>pro[i]>>wei[i];
        pru[i]=pro[i]/wei[i];
        x[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<pru[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(pru[i]<pru[j])
            {
                float temp=pro[i];
                pro[i]=pro[j];
                pro[j]=temp;


                temp = pru[i];
                pru[i] = pru[j];
                pru[j] = temp;


                temp = wei[i];
                wei[i] = wei[j];
                wei[j] = temp;


            }
            
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<pru[i]<<" ";
    }
    cout<<"\n";
    cout<<"Sorted on the basis of profit per unit weight\n";
    cout<<"object weight profit profitperunit\n";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" | "<<wei[i]<<" | "<<pro[i]<<" | "<<pru[i]<<"\n";
    }
    int i;
    for(i=0;i<n;i++)
    {
        if(m<wei[i])
        {
            break;
        }
        else
        {
            x[i]=1;
            tot+=pro[i];
            m-=wei[i];
        }
        
    }
    if(i<n)
    {
        x[i]=m/wei[i];
        tot+=pru[i]*m;
        m=0;
    }
    cout<<"object weight profit profitperunit fraction\n";
    for(i=0;i<n;i++)
    {
        cout<<i+1<<" | "<<wei[i]<<" | "<<pro[i]<<" | "<<pru[i]<<" | "<<x[i]<<"\n";
    }
    cout<<"Total profit : "<<tot<<"\n";
    return 0;
}
