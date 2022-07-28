#include <iostream>
#include <string>

using namespace std;

//sum of two numbers
void sumOfTwoNumbers() {

    int a, b, sum;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    sum = a + b;
    cout << "The sum of the two numbers are: " << sum << '\n';
}


/**
     *  Write a program to count and print the total number of characters (lowercase english alphabets only), 
     *  digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
     *  That is, input will be a stream of characters and you need to consider all the characters which are 
     *  entered till '$'.
     *  Print count of characters, count of digits and count of white spaces respectively (separated by space).
     *  ->  Sample input , output
     *          abc def4 5$ , 6 2 2
     */
    //However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):
    // That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
void countCharacterNumberSpaces() {
    string c;
    int character = 0, number = 0, space = 0;
    cout << "Enter the string: ";
    getline(cin, c);
    cout << "Length of string: "<< c.length() << '\n';
    for(int i=0; c[i]!='$'; i++){
        if(c[i] >= 'a' && c[i] <= 'z'){
            character++;
        }
        else if(c[i] >= '0' && c[i] <= '9'){
            number++;
        }
        else if(c[i] == ' ' || c[i] == '\n' || c[i] == '\t'){
            space++;
        }
    }
    cout << c << " , " << character << " " << number << " " << space;
}

void main() {
    //sumOfTwoNumbers();
    countCharacterNumberSpaces();
}