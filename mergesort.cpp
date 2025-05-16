#include<iostream>
using namespace std;



void merge(int a[],int l,int mid,int r)
{
    int n=sizeof(a);
    int n1,n2;
    n1=mid-l+1;
    n2=r-mid;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
    {
        L[i]=a[i+l];
    }

    for(int j=0;j<n2;j++)
    {
        R[j]=a[j+mid+1];
    }

    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {

        if(L[i]< R[j])
        {
            a[k]=L[i];
            i++;
        }

        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);

        merge(a,l,mid,r);
    }
}

int main()
{

    int n;
    cout<<"Enter total number of elements : \n";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements : \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l=0;
    int r=n-1;

    mergesort(a,l,r);
    cout<<"\nsorted list : \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
