#include<iostream>
using namespace std;

int main()
{

 int n,temp;
 cout<<"Enter total number of elements : \n";
 cin>>n;
 int a[n];
 cout<<"Enter "<<n<<" elements : \n";
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(int i=1;i<n;i++)
 {
     for(int j=0;j<n-i;j++)
     {
         if(a[j]>a[j+1])
         {
           temp=a[j]  ;
           a[j]=a[j+1];
           a[j+1]=temp;
         }
     }

     cout<<"\n After pass "<<i<<" : ";
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";


 }
 cout<<"\n\nsorted list is : \n";
 for(int i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }
}
