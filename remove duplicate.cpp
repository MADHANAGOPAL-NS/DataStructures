#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << "Array Elements : ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\nUnique elements : ";
    for (int i = 0; i < s; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
            cout << arr[i] << " ";
    }
    cout<<"\n";
    return 0;
}
