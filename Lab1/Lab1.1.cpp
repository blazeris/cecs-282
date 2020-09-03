/**
    CECS 282 LAB 1, Problem 1: Sums the odd digits in a given string
    @file Lab1.1.cpp
    @author Nathan Lai
    @version 5.11 8/27/20 
*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Input string: ";
    
    int inputnum;
    
    cin >> inputnum;
        
    int sum = 0;
    
    int i = 0;
    
    while(inputnum > 0){
        int digit = inputnum%10;
        inputnum /= 10;
        if(i%2 == 1){
            sum += digit;
        }
        i++;
    }

    cout << endl << sum;

    return 0;
}


