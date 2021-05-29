#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	int temp, f=0;
	int l=n-1;
	while(l>f)
	{
			temp=a[f];
			a[f]=a[l];
			a[l]=temp;
			l--;
			f++;
			
	}
	cout<<"reversed array is"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
