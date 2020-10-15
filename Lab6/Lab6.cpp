#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// Tranforms a cstring into a cstring of only 
void transform( char *raw, char *finalStr) {
	int i = 0;
	int j = 0;
	while(*(raw + i) != '\0'){
		if(isalpha(*(raw + i))){
			if(islower(*(raw + i))){
				*(finalStr + j) = toupper(*(raw + i));
			} else {
				*(finalStr + j) = *(raw + i);
			}
			j++;
		}
		i++;
	}
	*(finalStr + j) = '\0';
}

// Tests if a given string is a palindrome
bool testPalindrome(char *str) {
	int j = strlen(str) - 1;
	bool isPalindrome = true;
	
	for(int i = 0; i < strlen(str)/2; i++, j--){
		if(str[i] != str[j]){
			isPalindrome = false;
		}
	}
	return isPalindrome;
}

main(){
	bool done = false;
	// Loop so you can test multiple palindromes while running it once
	while(!done){
		string inputS;
		cout << endl << "\nInput String? (y/n): ";
		getline(cin, inputS);
		if(inputS == "n"){
			done = true;
		} else if(inputS == "y"){
			cout << "Input String: ";
			string s;
			getline(cin, s);
			//declares a constant char[] and puts the contents of s into it
			const char* input = s.c_str();
			
			//make a new char[] of length s + 1 so we can have \0 at the end
			char* test = new char[s.length() + 1];
			
			//copies char[] input to char[] test
			strcpy(test, input);
			
			//creates new cstring to store transformed cstring
			char* final = new char[s.length() + 1];
			transform(test, final);
			
			//tells you if the input string is a palindrome
			cout << "Is it a palindrome? ";
			if(testPalindrome(final)){
				cout << "Yes." << endl;
			}
			else {
				cout << "No." << endl;
			}
		}
	}
	
	
	return 0;
}

