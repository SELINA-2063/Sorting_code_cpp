#include<iostream>
using namespace std;

int partition(int a[],int lb,int ub)
{
    int pivot,start,end;
    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
            start++;
        while(a[end]>pivot)
            end--;
        if(start<end)
            swap(a[start],a[end]);
    }
    swap(a[lb],a[end]);

    return end;

}

void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}

int main()
{
    int n;
    cout<<"Enter the total number of elements : \n";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements : \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    int lb=0;
    int ub=n-1;
    quicksort(a,lb,ub);
    cout<<"sorted list : \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}
