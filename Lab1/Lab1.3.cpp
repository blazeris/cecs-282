/**
    CECS 282 LAB 1.3: Displays data of rainfall from rainfall.txt
    of a binary string
    @authors Danny Nguyen, Nathan Lai
    @file Lab1.3.cpp
    @version 5.11 8/27/20 
*/
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>

using namespace std;

const int NUM_MONTHS = 12;
const double RAIN_RATE = 0.20;//20% more rain than average
const double DRY_RATE = 0.25; //25% less rain than average

void inputRainFall(int [], int);
int calculateAverageRainFall(int [], int );
void classifyAndDisplayRainfall(int [],int);
 

/**
    Opens a file to store in an array, then closes it
    @param rainFall [] - array that tracks the amount of rainfall
    for each month
    @param size - the number of months of rainfall recorded
*/
void inputRainFall(int rainFall [], int size) {
	ifstream inputFile;
	inputFile.open("rainfall.txt");
	
	//Initialize month counter
	int month = 0; //first month
	
	//Read the monthly rainfall in the file line by line through for loop
	for(; month < size; month++) {
		inputFile >> rainFall[month];
	}
	inputFile.close();
}

/**
    Calculates and returns the average rainfall of a given array
    @param rainFall [] - array that tracks the amount of rainfall
    for each month    
	@param size - the number of months of rainfall recorded
*/
int calculateAverageRainFall(int rainFall [], int size) {
	double sum = 0;
	
	// Adds up the ammount of rainfalls recorded
	for(int i = 0; i < size; i++){
		sum += rainFall[i];
	}
	return round(sum / size);
}

/**
    Gives classifications to monthly rainfalls and prints it in a table
    @param rainFall [] - array that tracks the amount of rainfall
    for each month    
	@param months - the number of months of rainfall recorded
*/
void classifyAndDisplayRainfall(int rainFall[], int months) {
	string  month[] = {"January", "February", "March", "April", 
	"May", "June", "July", "August", "September", "October", 
	"November", "December"};
	double averageRain = calculateAverageRainFall(rainFall,NUM_MONTHS);
 
 	cout << "The year's average monthly rainfall was " << 
	 averageRain << " mm." << endl;
 
 	// Set the indexes for the highest and lowest months of rainfall
 	int maxIndex = 0;
 	int minIndex = 0;
 
 	/* Compares all the values in the table to determine the index 
	 of the lowest and highest months of rainfall */
 	for(int i = 0; i < months; i++) {
 		if(rainFall[i] > rainFall[maxIndex]) {
 			maxIndex = i;
		}
		if(rainFall[i] < rainFall[minIndex]) {
		 	minIndex = i;
		}
	 }
 	
 	//Displays the highest and lowest months of rainfall
 	cout << month[maxIndex] << " has the highest rainfall (" <<
	  rainFall[maxIndex] << " mm)." << endl;
 	cout << month[minIndex] << " has the lowest rainfall (" <<
	  rainFall[minIndex] << " mm)." << endl;
 
	/* Classify months as Dry, Average, or Rainy and display
	 the result */
   	cout << endl << "   Month      Rainfall(mm)   Classification"<< endl;
   	cout << "__________     ___________    _____________"<<endl;
   	
   	//For loop that classifies and prints each month of rainfall
   	for(int i = 0; i < months; i++) {
   		/* Classifies each month by comparing to established 
		   rates of rainy and dry classifications */
   		string classification = "Average";
   		if(rainFall[i] > (1 + RAIN_RATE) * averageRain) {
   			classification = "Rainy ";
		} 
		else if(rainFall[i] < (1 - DRY_RATE) * averageRain) {
			classification = "Dry  ";
		}
   		
   		// Prints each row of the table once classification is done
   		cout << setw(6) << (i + 1) << setw(16) << rainFall[i] << 
		   setw(18) << classification << endl;
   }
}

// Controls operation of the program
int main() {
	int rainFall[NUM_MONTHS];
	
	// Read rainfall from the the file and the fill them in the array
	inputRainFall(rainFall, NUM_MONTHS);
	 
	// Classify months as Dry, Average, or Rainy and display the result
	classifyAndDisplayRainfall(rainFall, NUM_MONTHS);
	
	return 0;
 }

