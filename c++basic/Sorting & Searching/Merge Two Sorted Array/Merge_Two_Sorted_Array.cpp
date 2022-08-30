#include<iostream>
using namespace std;

/**
 *  Code Merge Two Sorted Arrays
 *  ->  You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, 
 *      merge them into a third array/list such that the third array is also sorted.
 * 
 *  Input Format :
 *      The first line contains an Integer 't' which denotes the number of test cases 
 *      or queries to be run. Then the test cases follow.
 *      First line of each test case or query contains an integer 'N' representing 
 *      the size of the first array/list.
 *      Second line contains 'N' single space separated integers representing the 
 *      elements of the first array/list.
 *      Third line contains an integer 'M' representing the size of the second array/list.
 *      Fourth line contains 'M' single space separated integers representing the 
 *      elements of the second array/list.
 *  Output Format :
 *      For each test case, print the sorted array/list(of size N + M) in a single 
 *      row, separated by a single space.
 *      Output for every test case will be printed in a separate line.
 *  Constraints :
 *      1 <= t <= 10^2
 *      0 <= N <= 10^5
 *      0 <= M <= 10^5
 *  Time Limit: 1 sec 
 *     
 *  Sample Input 1 :
 *      1
 *      5
 *      1 3 4 7 11
 *      4
 *      2 4 6 13
 *  Sample Output 1 :
 *      1 2 3 4 4 6 7 11 13 
 *  
 *  Sample Input 2 :
 *      2
 *      3
 *      10 100 500
 *      7   
 *      4 7 9 25 30 300 450
 *      4
 *      7 45 89 90
 *      0
 *  Sample Output 2 :
 *      4 7 9 10 25 30 100 300 450 500
 *      7 45 89 90
 */

void mergeArray(int *arr1, int size1, int *arr2, int size2, int *arr3, int size3){
    int index = 0;
    for(int i=0; i<size3; i++){
        if(i<size1){
            arr3[i] = arr1[i];
        }
        else{
            arr3[i] = arr2[index];
            index++;
        }
    }
    for(int i=size1; i<size3; i++){
        bool swap = false;
        int swapIndex;
        int key = arr3[i];
        int j=i-1;
        for(j; j>=0; j--){
            if(key < arr3[j]){
                arr3[j+1] = arr3[j];
                swap = true;
                swapIndex = j;
            }
        }
        if(swap){
            arr3[swapIndex] = key;
        }
    }
}

void mergeArrayOptimised(int *arr1, int size1, int *arr2, int size2, int *arr3, int size3){
    int a1len =0;
    int a2len =0;
    int count =0;
    while(count < size3){
        if(arr1[a1len] == arr2[a2len]){
            arr3[count] = arr1[a1len];
            count++;
            arr3[count] = arr2[a2len];
            a1len++;
            a2len++;
            count++;
        }
        else if(a1len<size1 && a2len<size2){
            if(arr1[a1len] < arr2[a2len]){
                arr3[count] = arr1[a1len];
                a1len++;
                count++;
            }
            else{
                arr3[count] = arr2[a2len];
                a2len++;
                count++;
            }
        }
        else if(a1len>=size1 && a2len<size2){
            arr3[count] = arr2[a2len];
            a2len++;
            count++;
        }
        else if(a2len>=size2 && a1len<size1){
            arr3[count] = arr1[a1len];
            a1len++;
            count++;
        }
        else{
            count++;
        }
    }
}

void main(){
    int *arr1;
    int *arr2;
    int size1, size2, size3;

    for(int i=0; i<2; i++){
        if(i == 0){
            cin >> size1;
            arr1 = new int[size1];
            for(int j=0; j<size1; j++){
                cin >> arr1[j];
            }
        }
        else{
            cin >> size2;
            arr2 = new int[size2];
            for(int j=0; j<size2; j++){
                cin >> arr2[j];
            }
        }
    }
    size3 = size1 + size2;
    int *arr3 = new int[size3];
    mergeArrayOptimised(arr1, size1, arr2, size2, arr3, size3);
    for(int i=0; i<size3; i++){
        cout << arr3[i] << endl;
    }
}