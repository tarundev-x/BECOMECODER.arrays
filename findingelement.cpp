#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
   	cin>>arr[i];
    int FL=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==x)
       {
           cout<<i<<"\n";
           FL=1;
           break;
       }
   }
   if(FL==0)
   {
       cout<<-1<<"\n";
   }
   else
   {
   	cout<<1;
   }
return 0;
}
