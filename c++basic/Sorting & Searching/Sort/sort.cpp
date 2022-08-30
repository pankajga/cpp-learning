#include<iostream>
using namespace std;

/**
 *  Sort 0 1
 *  -   You have been given an integer array/list(ARR) of size N that contains 
 *      only integers, 0 and 1. Write a function to sort this array/list. Think of a 
 *      solution which scans the array/list only once and don't require use of an 
 *      extra array/list.
 *  Note:
 *      You need to change in the given array/list itself. Hence, no need to 
 *      return or print anything. 
 * 
 *  Input format :
 *      The first line contains an Integer 't' which denotes the number of test 
 *      cases or queries to be run. Then the test cases follow.
 *      First line of each test case or query contains an integer 'N' representing 
 *      the size of the array/list.
 *      Second line contains 'N' single space separated integers(all 0s and 1s) 
 *      representing the elements in the array/list.    
 *  Output format :
 *      For each test case, print the sorted array/list elements in a row separated 
 *      by a single space.
 *      Output for every test case will be printed in a separate line.
 *  
 *  Constraints :
 *      1 <= t <= 10^2
 *      0 <= N <= 10^5
 *  Time Limit: 1 sec
 *  
 *  Sample Input 1:
 *      1
 *      7
 *      0 1 1 0 1 0 1
 *  Sample Output 1:
 *      0 0 0 1 1 1 1
 * 
 *  Sample Input 2:
 *      2
 *      8   
 *      1 0 1 1 0 1 0 1
 *      5
 *      0 1 0 1 0
 *  Sample Output 2:
 *      0 0 0 1 1 1 1 1
 *      0 0 0 1 1 
 */

void sortArr(int *input, int size){
    int start=0, end=size-1;
    while(start < end){
        while(input[start] == 0){ // these two while loops to tackale equal cases.
            start++;
        }
        while(input[end] == 1){
            end--;
        }
        if(start<end){
         	int temp = input[start];
            input[start] = input[end];
            input[end] = temp;
            start++;
            end--;   
        }
    }
}

void sortArrOptimised(int *arr, int size){
    int *count = new int[2];
    for(int i=0; i<2; i++){
        count[i] = 0;
    }
    for(int i=0; i<size; i++){
        count[arr[i]]++;
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<count[i]; j++){
            cout << i;
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
        sortArr(arr, size);
        cout << "*************************************************************";
        for(int j=0; j<size; j++){
            cout << endl << arr[j] << endl;
        }
        delete[] arr;
    }
}