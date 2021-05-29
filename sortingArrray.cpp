#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];//10,40,30,20,50
	}
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			flag=-1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Element is sorted:"<<endl;
	}
	else
	{
		cout<<"Element is not sorted:"<<endl;
	}
	cout<<"Sorting using bubble sort:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;	
			}
		}
	}
	cout<<"data after sorting is(bubble):";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
