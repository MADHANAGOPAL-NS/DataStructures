#include <iostream>
using namespace std;
int coun(int arr[], int n)
{
    int unique1 = 1;
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            unique1++;
    }
    return unique1;
}
int main()
{
    int arr[] = {10,20,30,10,20,40};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<"number of unique elements in the array is:"<< coun(arr, n);
    cout<<"\n";
    return 0;
}
