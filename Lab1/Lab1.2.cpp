/**
    CECS 282 LAB 1.2: Displays the decimal number equivalent
    of a binary string
    @authors Danny Nguyen, Nathan Lai
    @file Lab1.2.cpp
    @version 5.11 8/25/20 
*/
#include <iostream>
#include <string>
using namespace std;

/**
    Converts binary string into a decimal equivalent
    @param binaryString - binary input from the user 
    @return decimalNum - the decimal equivalent of binary string
*/
int bin2Dec(const string& binaryString) {
    int decimalNum = 0;
    // Amount of numbers checked
    int k = 0;
    // Loop through each character from left to right
    for(int i = binaryString.length() - 1; i >= 0; i--) {
    	
    	// Check character at index of string
        char binaryChar = binaryString.at(i);

        if(binaryChar == '1') {
            int twoMultiple = 1;
            
			// Power function of a binary number
            for(int j = 0; j < k; j++){
                twoMultiple *= 2;
            }
            decimalNum += twoMultiple;
        }
        k++;
    }
    return decimalNum;
}

// Controls operation of the program
int main() {
	string binaryString;
	
	// Checks that the input is valid
	bool done = false;	
	
	// Gets a binary string from the user
	while (done != true) {
    	cout << "Enter binary numbers: ";
    	cin >> binaryString;
    	done = true;
    	
    	// Checks each character from left to right
    	for(int i = binaryString.length() - 1; i >= 0; i--) {
    		char binaryChar = binaryString.at(i);
    		
    		// Detects nonbinary characters and gets another input
    		if(binaryChar != '1' && binaryChar != '0') {
    			done = false;
    			cout << "Invalid input. Try again" << endl;
    			break;
    		}
    	}
    }
    
	// Returns the decimal equivalent of binary string
    cout << "The decimal equivalent value is: ";
    cout << bin2Dec(binaryString);
    return 0;
}

