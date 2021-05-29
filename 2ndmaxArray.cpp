#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,a[n];
 cin>>n;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 int maxi=INT_MIN;
 for(int i=0;i<n;i++)
 {
 	if(maxi<a[i])
 	{
 		maxi=a[i];
	 }
 }
 cout<<endl;
 cout<<maxi;
 int maxi2=-1;

	for(int i=0;i<n;i++)
	{
		if(a[i]!=maxi)
		{
			if(maxi2==-1)
		{
			maxi2=a[i];
		}
		else
		{
			if(a[i]>maxi2)
			{
				maxi2=a[i];
			}
		}
		}
		
	}
	if(maxi2==-1)
	cout<<"elements are same:";
	else
	cout<<"second largest element is:"<<maxi2;
}
