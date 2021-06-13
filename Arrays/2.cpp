#include <iostream>
#include <climits>

using namespace std;


int main()
{
	int n;
	cin>>n;

	int a[n];
	int mx = INT_MIN;
	int mn = INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mx = max(mx,a[i]);
		mn = min(mn,a[i]);
	}

	cout<<mx<<" "<<mn;



	return 0;
}