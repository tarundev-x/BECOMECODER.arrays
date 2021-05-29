#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cap;
    cout<<"Enter the capacity of the elment";
    cin>>cap;
    int a[cap];
    cout<<"Enter the array elements";
    for(int i=0;i<cap;i++)
    {
        cin>>a[i];
    }
    int ele,flag=0,index;
    cout<<"Ente the element to be deleted:";
    cin>>ele;
    for(int i=0;i<cap;i++)
    {
        if(a[i]==ele)
        {
            index=i;
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
     
           for(int i=index;i<cap-1;i++)
           {
        	    a[i]=a[i+1];
            }
            cap--;
           for(int i=0;i<cap-1;i++)
           {
		cout<<a[i]<<" ";
       	}
      }
      else
  	{
	 	cout<<" element is not found ";
	  
    }
}
 
