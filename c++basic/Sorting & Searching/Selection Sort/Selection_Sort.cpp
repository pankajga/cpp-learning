#include<iostream>
using namespace std;

void selectionSort(int *arr, int size){
    for(int i=0; i<size-1; i++){
        int min = arr[i];
        int j=i+1;
        int swapIndex;
        bool swap = false;
        for(j; j<size; j++){
            if(arr[j] < min){
                swap = true;
                swapIndex = j;
                min = arr[j];
            }
        }
        if(swap){
            arr[swapIndex] = arr[i];
            arr[i] = min;
        }
    }
}

void main(){
    int cases, size;
    cin >> cases;
    for(int i=1; i<=cases; i++){
        cin >> size;
        int *arr = new int[size];
        for(int j=0; j<size; j++){
            cin >> arr[j];
        }
        selectionSort(arr, size);
        cout << "*************************************************************";
        for(int j=0; j<size; j++){
            cout << endl << arr[j] << endl;
        }
        delete[] arr;
    }
}