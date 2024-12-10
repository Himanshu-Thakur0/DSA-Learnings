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

int insertion(int arr[], int size, int capacity, int element, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 0;
    }
}

int main()
{
    system("cls");

    int arr[100] = {24, 67, 6, 45, 7};
    int size = 5, element = 5, index = 2;
    display(arr, size);

    int flag = insertion(arr, size, 100, element, index);
    if (flag == 0)
    {
        cout << "Element inserted successfully." << endl;
        size += 1;
        display(arr, size);
    }
    else
    {
        cout << "Element insertion failed due to less memory." << endl;
    }
}