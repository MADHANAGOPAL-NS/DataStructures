#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10],n;
    int large,small;
    int secondlarge=-1;
    int secondsmall;
    cout<<"Enter array size:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element:";
        cin>>arr[i];
    }
    large=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>secondlarge && arr[i]<large)
        {
            secondlarge=arr[i];
        }
    }
    small=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        secondsmall=arr[1];
    }
    cout<<"Second largest ele is:"<<secondlarge<<endl;
    cout<<"Second smallest ele is:"<<secondsmall<<endl;
    return 0;
}
