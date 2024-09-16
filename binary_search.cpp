#include<iostream>
using namespace std;

void sort(int a[], int n)
{
    for(int pass = 0; pass < n - 1; pass++)
    {
        int flag = 0;
        for(int i = 0; i < n - 1 - pass; i++)
        {
            if(a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                flag++;
            }
        }
        if(flag == 0)
        {
            break;  // Already sorted
        }
    }
}
int main()
{
    int a[] = {12, 23, 11, 5, 65, 76};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Array before sorting: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, n);

    cout << "Array after sorting: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}