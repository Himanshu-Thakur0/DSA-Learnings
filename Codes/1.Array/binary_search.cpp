#include <iostream>
#include <stdlib.h>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int size, int element)
{

    int elemIndex = -1;
    int low = 0, high = size - 1;

    for (int i = low; i <= high; i++)
    {
        if (element != arr[i])
        {
            if (element < arr[high])
            {
                high = (low + high) / 2;
            }
            else
            {
                low = high;
                high = size - 1;
                high = (low + high) / 2;
            }
        }
        else
        {
            elemIndex = i;
        }
    }

    return elemIndex;
}

int main()
{
    system("cls");
    int arr[100] = {2,460,5900,60,7,800};
    int size = 6, element = 2;

    display(arr, size);
    int elemIdx = binarySearch(arr, size, element);
    if (elemIdx != -1)
    {
        cout << "Given Element " << element << " Found At Index " << elemIdx << endl;
    }
    else
    {
        cout << "Given Element " << element << " Not Found At Any Index " << endl;
    }
}