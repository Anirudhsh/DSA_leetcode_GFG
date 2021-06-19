#include <iostream>

using namespace std;

/*

	BRUTE FORCE METHOD IS RUNNING A LOOP ONE TIME TO COUNT NUMBER OF 0s 1s 2s
	AND THEN REPLACING THEM FROM START

*/

int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int s = 0,mid = 0,e = n-1;

	while(mid<=e)
	{
		if(a[mid] == 0)                                        

		{
			swap(a[s],a[mid]);
			s++;
			mid++;
		}
		else if(a[mid] == 1)
		{
			mid++;
		}
		else if(a[mid] == 2)
		{
			swap(a[mid],a[e]);
			e--;
		}

	}


	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" : ";
	}
	cout<<endl;

	return 0;
}