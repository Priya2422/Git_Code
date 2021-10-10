#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    int count, small = arr[0], large = arr[0], logarr[n], temp = 0, flag, check = 1;
    for (int i = 0; i < n; ++i)
    {
        logarr[i] = '\n';
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
        count = 0;
        flag = 1;
        for (int j = 0; j < n; ++j)
        {
            if (arr[i] == logarr[j])
            {
                flag = 0;
            }
        }
        if (flag)
        {
            for (int j = 0; j < n; ++j)
            {
                if (arr[j] == arr[i] && i != j)
                {
                    if (check)
                    {
                        check = 0;
                        cout << endl
                             << "Duplicates found:";
                    }
                    if (count == 0)
                    {
                        cout << endl
                             << arr[i] << " was found at " << i + 1 << " " << j + 1;
                    }
                    else
                    {
                        cout << " " << j + 1;
                    }
                }
            }
        }
        logarr[temp++] = arr[i];
    }
    if (check)
    {
        cout << endl
             << "No duplicates were found";
    }
    cout << endl
         << "Smallest element is: " << small << "\tLargest element is: " << large;
}