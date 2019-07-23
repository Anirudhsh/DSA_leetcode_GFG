#include<bits/stdc++.h>

using namespace std;
/*
	SubArray With Max Sum In An Array
	Time Compexity: 
					1..O(n^3)
					2..O(n^2)
					3..O(n^3)
 */
int main()
{
    array<int,10> p{6,3,-1,7,-2,7,1,-2,4,5};
    
	int maxsum1=0;
    for(int i=0;i<10;i++)
    {
		
        for(int j=i;j<10;j++)
		{
			int sum=0;
			for(int k=i;k<=j;k++)
			{
				sum+=p[k];
			}
			maxsum1=max(maxsum1,sum);
			//cout<<maxsum1<<"\n";
		}
    }
	/*   Method:---2
		remove k loop
	*/
	int maxsum2=0;
	for(int i=0;i<10;i++)
	{
		int sum1=0;
		for(int j=i;j<10;j++)
		{
			sum1+=p[j];
			maxsum2=max(maxsum2,sum1);
		}
	}
	cout<<maxsum2<<"\n";

	/*
		Method:---3
		Find max sum for each ending index	
	 */
	int endsum[10];
	for(int i=0;i<10;i++)
	{endsum[i]=0;}

	int maxsum3=p[0];
	for(int i=0;i<10;i++)
	{
		if(i>0)
		{
			endsum[i]+=endsum[i-1]+p[i];
		}
		else
		{
			endsum[i]=p[i];
		}
		if(endsum[i]>maxsum3)
			maxsum3=endsum[i];
		
	}
	cout<<maxsum3<<"\n";
    /* for(int i=0;i<10;i++)
    {
        cout<<p[i]<<" ";
    }*/
    return 0;
}