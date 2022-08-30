#include<iostream>
#include<algorithm>
using namespace std;

/**
 *  Pair Sum
 *  ->  You have been given an integer array/list(ARR) and a number X. Find and return 
 *      the total number of pairs in the array/list which sum to X.
 * 
 *  Note:
 *      Given array/list can contain duplicate elements. 
 *  Input format :
 *      The first line contains an Integer 't' which denotes the number of test 
 *      cases or queries to be run. Then the test cases follow.
 *      First line of each test case or query contains an integer 'N' representing 
 *      the size of the first array/list.
 *      Second line contains 'N' single space separated integers representing the 
 *      elements in the array/list.
 *      Third line contains an integer 'X'.
 *  Output format :
 *      For each test case, print the total number of pairs present in the array/list.
 *      Output for every test case will be printed in a separate line.
 *  Constraints :
 *      1 <= t <= 10^2
 *      0 <= N <= 10^3
 *      0 <= X <= 10^9
 *  Time Limit: 1 sec
 *  
 *  Sample Input 1:
 *      1
 *      9
 *      1 3 6 2 5 4 3 2 4
 *      7
 *  Sample Output 1:
 *      7
 * 
 *  Sample Input 2:
 *      2
 *      9
 *      1 3 6 2 5 4 3 2 4
 *      12
 *      6
 *      2 8 10 5 -2 5   
 *      10
 *  Sample Output 2:
 *      0
 *      2
 *  Explanation for Input 2:
 *      Since there doesn't exist any pair with sum equal to 12 for the first query, 
 *      we print 0.
 *      For the second query, we have 2 pairs in total that sum up to 10. They are, 
 *      (2, 8) and (5, 5).
 */

int sum(int *arr, int key, int size){
    int count = 0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] + arr[j] == key){
                count++;
            }
        }
    }
    return count;
}

int sumOptimised(int *arr, int key, int size){
    sort(arr, arr + size);
    int l=0,count=0;
    int r=size-1;
    while(l<r){
        if(arr[l]+arr[r] > key){
            cout << "in if " << arr[l] << " - " << arr[r] << endl;
            r--;
        }
        else if(arr[l]+arr[r] < key){
            cout << "in else if " << arr[l] << " - " << arr[r] << endl;
            l++;
        }
        else{
            cout << "in else " << arr[l] << " - " << arr[r] << endl;
            count++;
            l++;
        }
    }
    return count;
}

void main(){
    int cases, key, size;
    cin >> cases;
    for(int i=1; i<=cases; i++){
        cin >> size;
        int *arr = new int[size];
        for(int j=0; j<size; j++){
            cin >> arr[j];
        }
        cin >> key;
        cout << sumOptimised(arr, key, size) << endl;
        delete[] arr;
    }
}