#include<iostream>

using namespace std;

void primecheck() {
    int number, count = 0;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=2; i<number; i++){
        if(number % i == 0){
            count++;
            break;
        }
    }
    cout << count << '\n';
    if(count > 0){
        cout << "The number is not a prime number";
    }
    else {
        cout << "The number is a prime number";
    }
}

/**
 *  Number Pattern 1
 *  -   Print the following pattern
 *  -   Pattern for N = 4
 *              1
 *              23
 *              345
 *              4567
 *  
 *  Input Format :
 *      N (Total no. of rows)
 *  Output Format :
 *      Pattern in N lines
 *  
 *  Sample Input 1 :
 *      3
 *  Sample Output 1 :
 *      1
 *      23
 *      345
 */
void pattern1() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=1; i<=number; i++) {
        for(int j=0; j<i; j++) {
            cout << i+j;
        }
        cout << '\n';
    }
}

/**
 *  Number Pattern 2
 *  -   Print the following pattern
 *  -   Pattern for N = 4
 *              1
 *             23
 *            345
 *           4567
 *  
 *  Input Format :
 *      N (Total no. of rows)
 *  Output Format :
 *      Pattern in N lines
 * 
 *  Sample Input :
 *      5
 *  Sample Output :
 *       1
 *      23
 *     345
 *    4567
 *   56789
 */
void pattern2() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=number; i>=1; i--){
        int count = 1;
        for(int j=1; j<=number; j++) {
            if(j>=i){
                cout << number-i+count;
                count++;
            }
            else {
                cout << " ";
            }
        }
        cout << '\n';
    }
}

/**
 *  Start Pattern
 *  -   Print the following pattern
 *  
 *  Input Format :
 *      N (Total no. of rows)
 *  Output Format :
 *      Pattern in N lines
 *  
 *  Constraints :
 *      0 <= N <= 50
 *  
 *  Sample Input 1 
 *      3
 *  Sample Output 1 :
 *      *
 *     *** 
 *    *****
 *  
 *  Sample Input 2 :
 *      4
 *  Sample Output 2 :
 *      *
 *     *** 
 *    *****
 *   *******
 */
void pattern3() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=number; i>=1; i--){
        for(int j=1; j<=number; j++){
            if(j>=i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(int k=number; k>=1; k--){
            if(k>i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << '\n';
    }
}

/**
 *  Reverse Number pattern
 *  -   Print the following pattern for the given N number of rows.
 *  -   Pattern for N = 4
 *          1
 *          21  
 *          321
 *          4321
 *  
 *  Input format :
 *      Integer N (Total no. of rows)
 *  Output format :
 *      Pattern in N lines
 *  
 *  Constraints
 *      0 <= N <= 50
 *  
 *  Sample Input 1:
 *      5
 *  Sample Output 1:
 *      1
 *      21
 *      321
 *      4321
 *      54321
 * 
 *  Sample Input 2:
 *      6
 *  Sample Output 2:
 *      1
 *      21
 *      321
 *      4321
 *      54321   
 *      654321
 */
void pattern4() {
    int number;
    cout << "Enter the number";
    cin >> number;
    for(int i=1; i<=number; i++){
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << '\n';
    }
}

/**
 *  Character Pattern:
 *  N = 4 ,print :
 *      ABCD
 *      ABCD
 *      ABCD
 *      ABCD
 */
void pattern5() {
    char character = 'A';
    int number;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=1; i<=number; i++){
        for(int j=1; j<=number; j++){
            char c = character+j-1;
            cout << c;
        }
        cout << '\n';
    }
}

/**
 *  Character Pattern:
 *  N = 4 ,print :
 *      ABCD
 *      BCDE
 *      CDEF
 *      DEFG
 */
void pattern6(){
   char character = 'A';
    int number;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=1; i<=number; i++){
        for(int j=1; j<=number; j++){
            char c = character+j+i-2;
            cout << c;
        }
        cout << '\n';
    } 
}

/**
 *  Character Pattern
 *  -   Print the following pattern for the given N number of rows.
 *  -   Pattern for N = 4
 *          A
 *          BC
 *          CDE
 *          DEFG
 *  Input format :
 *      Integer N (Total no. of rows)
 *  Output format :
 *      Pattern in N lines
 *  
 *  Constraints
 *      0 <= N <= 13
 *      
 *  Sample Input 1:
 *      5
 *  Sample Output 1:
 *      A
 *      BC
 *      CDE
 *      DEFG
 *      EFGHI
 *  
 *  Sample Input 2:
 *      6
 *  Sample Output 2:
 *      A
 *      BC
 *      CDE
 *      DEFG
 *      EFGHI
 *      FGHIJK
 */
void pattern7() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=1; i<=number; i++) {
        for(int j=1; j<=i; j++) {
            char n = 'A' + i + j - 2;
            cout << n;
        }
        cout << '\n';
    }
}

/**
 *  Interesting Alphabets
 *  -   Print the following pattern for the given number of rows.
 *  -   Pattern for N = 5
 *          E
 *          DE
 *          CDE
 *          BCDE
 *          ABCDE   
 *  
 *  Input format :
 *      N (Total no. of rows)
 *  Output format :
 *      Pattern in N lines
 *  Constraints
 *      0 <= N <= 26
 *  
 *  Sample Input 1:
 *      8
 *  Sample Output 1:
 *      H
 *      GH
 *      FGH
 *      EFGH
 *      DEFGH
 *      CDEFGH
 *      BCDEFGH
 *      ABCDEFGH
 *  
 *  Sample Input 2:
 *      7
 *  Sample Output 2:
 *      G
 *      FG
 *      EFG
 *      DEFG
 *      CDEFG
 *      BCDEFG  
 *      ABCDEFG
 */
void pattern8() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    char character = 'A' + number -1;
    for(int i=1; i<=number; i++) {
        for(int j=1; j<=i; j++) {
            char result = character - i + j;
            cout << result;
        }
        cout << '\n';
    }
}

/**
 *  Inverted Triangle
 *      N=4, 
 *          ****
 *          ***
 *          **
 *          *
 */
void pattern9() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=number; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << '\n';
    }
}

/**
 *  Isoceles Triangle
 *      N=4,
 *          1
 *         121
 *        12321
 *       1234321
 */
void pattern10() {
    int number;
    cout << "Enter the number";
    cin >> number;
    for(int i=number; i>=1; i--){
        int l=1;
        for(int j=1; j<=number; j++){
            if(j >= i){
                cout << j-i+1;
            }
            else{
                cout << " ";
            }
        }
        for(int k=number; k>i; k--){
            cout << k-i;
        }
        cout << '\n';
    }
}

/**
 *  Triangle of Numbers
 *  -   Print the following pattern for the given number of rows.
 *  
 *  Input format :
 *      Integer N (Total no. of rows)
 *  Output format :
 *      Pattern in N lines
 *  
 *  Constraints :
 *      0 <= N <= 50
 *  
 *  Sample Input 1:
 *      5
 *  Sample Output 1:
 *          1
 *        232
 *      34543
 *    4567654
 *  567898765
 *  
 *  Sample Input 2:
 *      4
 *  Sample Output 2:
 *          1
 *        232
 *      34543
 *    4567654
 */
void pattern11() {
    int number;
    int m=1;
    cout << "Enter the number: ";
    cin >> number;
    int l = number*2-1;
    for(int i=number*2-1; i>=1; i=i-2){
        int j=1;
        for(j; j<=l; j++){
            if(j >= i){
                cout << m;
                m++;
            }
            else{
                cout << " ";
            }
        }
        for(int k=j; k<=number*2-1; k++){
            if(k==j){
                m--;
            }
            cout << --m;
            if(k==number*2-1){
                m++;
            }
        }
        cout << '\n';
        l--;
    }
}

/**
 *  Diamond of stars
 *  -   Print the following pattern for the given number of rows.
 * 
 *  Input format :
 *      N (Total no. of rows and can only be odd)
 *  Output format :
 *      Pattern in N lines
 *  
 *  Constraints :
 *      1 <= N <= 49
 *      
 *  Sample Input 1:
 *      5
 *  Sample Output 1:
 *      *
 *     ***
 *    *****
 *     ***
 *      *
 *  
 *  Sample Input 2:
 *      3
 *  Sample Output 2 
 *      *
 *     ***
 *      *
 */
void pattern12(){
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int count=0;
    int incNum=(number+1)/2;
    for(int i=incNum; i>=1; i--){
        int j;
        for(j=1; j<=incNum; j++){
            if(j>=i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(int k=j; k<j+count; k++){
            if(count!=0){
                cout << "*";
            }
        }
        cout << '\n';
        count++;
    }
    int secCount = incNum-2;
    for(int i=1; i<=incNum-1; i++){
        int j;
        for(j=1; j<=incNum-1; j++){
            if(j>i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(int k=j; k<=j+secCount; k++){
            //if(secCount != 0){
                cout << "*";
            //}
        }
        cout << '\n';
        secCount--;
    }
}

/**
 *  N=4,
 *          4444444
 *          4333334
 *          4322234
 *          4321234
 *          4322234
 *          4333334  
 *          4444444
 */
void pattern13(){
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int c=number, d=number;
    int length = (number*2)-1;
    for(int i=length; i>=number; i--){
        for(int j=number; j>=1; j--){
            if(j>=c){
                cout << j;
            }
            else{
                cout << c;
            }
        }
        for(int k=2; k<=number; k++){
            if(k<=d){
                cout << d;
            }
            else{
                cout << k;
            }
        }
        c--;
        d--;
        cout << '\n';
    }
    int e=2, f=2;
    for(int i=number; i>1; i--){
        for(int j=number; j>=1; j--){
            if(j<=e){
                cout << e;
            }
            else{
                cout << j;
            }
        }
        for(int k=2; k<=number; k++){
            if(k>=f){
                 cout << k;
            }
            else{
                cout << f;
            }
        }
        e++;
        f++;
        cout << '\n';
    }
} 

void main() {
    //primecheck();
    //pattern1();
    //pattern2();
    //pattern3();
    //pattern4();
    //pattern5();
    //pattern6();
    //pattern7();
    //pattern8();
    //pattern9();
    //pattern10();
    //pattern11();
    //pattern12();
    pattern13();
}