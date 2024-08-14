#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,5,3,4,5,6,5};
    int c1,c=0;
    cout<<"Enter the Search:";
    cin>>c1;
    for(int i=0;i<7;i++)
    {
        if (arr[i]==c1)
        c+=1;
    }
    cout<<"No. of counts : "<<c;
    return 0;
}
