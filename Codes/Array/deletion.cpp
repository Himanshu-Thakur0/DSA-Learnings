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

int deletion(int arr[], int size, int capacity, int index)
{
    if (index >= capacity-1 || index >=size)
    {
        return -1;
    }
    else
    {
        for (int i = index; i < size; i++)
        {
            arr[i] = arr[i+1];
        }
        return 0;
    }
}

int main()
{
    system("cls");

    int arr[100] = {24, 67, 6, 45, 7};
    int size = 5, index = 1;
    display(arr, size);

    int flag = deletion(arr, size, 100,  index);
    if (flag == 0)
    {
        cout << "Element deleted successfully." << endl;
        size -= 1;
        display(arr, size);
    }
    else
    {
        cout << "Element deletion failed." << endl;
    }
}