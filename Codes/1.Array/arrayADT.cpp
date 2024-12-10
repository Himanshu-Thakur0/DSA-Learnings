#include <iostream>
#include <stdlib.h>
using namespace std;

class dynamicArray {
    private:
        int* arr;
        int size;

    public:
        dynamicArray(int s){
            size = s;
            arr = new int[size];
        }

        ~dynamicArray(){
            cout << "array memory deallocated" << endl;
            delete[] arr;
        }

        void addElem(){
            for (int i = 0; i < size; i++)
            {
                arr[i] = i+1;
            }
        }
        void show(){
            for (int i = 0; i < size; i++)
            {
                // cout << (int(&arr[i])%100) << endl;
                cout << arr[i] << endl;
            }
            
        }
};



int main() {
    system("cls");

    dynamicArray obj(20);
    cout << "addElem runs "<<endl;
    obj.addElem();
    cout << "show runs "<<endl;
    obj.show();
}