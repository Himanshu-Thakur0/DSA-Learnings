#include <iostream>
#include <stdlib.h>
using namespace std;


void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int linearSearch(int arr[], int size, int element){

    int elemIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            elemIndex = i;
        }   
    }
    return elemIndex;
}


int main() {
    system("cls");
    int arr[100] = {23,10,66,37,48,55,6,74};
    int size = 8 , element = 60;

    display(arr, size);
    int elemIdx = linearSearch(arr, size,element);
    if (elemIdx != -1) 
    {
        cout << "Given Element " << element <<" Found At Index " << elemIdx << endl;
    }
    else
    {
        cout << "Given Element " << element <<" Not Found At Any Index "<< endl;
    }

}