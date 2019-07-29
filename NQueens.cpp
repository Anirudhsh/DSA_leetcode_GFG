#include<bits/stdc++.h>

using namespace std;

int b[11][11]={0};

bool isAttacked(int N,int x,int y)
{
    for(int i=0;i<N;i++)
    {
        if(b[i][y]==1||b[x][i]==1)
        {
        	//cout<<"AT"<<i<<y<<"\n";
            return 1;
        }
    }
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {   
            if(((x+y)==(i+j))&&b[i][j]==1)
            {
                //cout<<"AT"<<i<<j<<"\n";
                return 1;
            }
            else if(((x-y)==(i-j))&&b[i][j]==1)
            {
                //cout<<"AT"<<i<<j<<"\n";
                return 1;
            }
        }
    }
    return 0;
    
}
bool Nqueen(int x,int N)
{
    if(N==0)
    {
        return 1;
    }
    else
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<x;j++)
            {
                if(isAttacked(x,i,j))
                {
                   continue; 
                }
                else
                {
                    b[i][j]=1;
                    if(Nqueen(x,N-1))
                    {
                        return 1;
                    }
                    else
                        b[i][j]=0;
                    
                    
                }
            }
        }
        return 0;
    }
    
}



int main()
{
    int N;
    cin>>N;
    int x=N;
    bool cond=Nqueen(x,N);
    if(cond)
    {
        cout<<"YES\n";
        for(int i=0;i<N;i++)
        {
        	for(int j=0;j<N;j++)
        	{
        		cout<<b[i][j]<<" ";
        	}
        	cout<<"\n";
        }
    }
    else
    {
        cout<<"NO\n";
    }
    
    
    return 0;
}
