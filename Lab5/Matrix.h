/***************************************************************
* The interface file for the Matrix class. The only private *
* members are the sizes of the matrix and the pointer that *
* points to the matrix in the heap. *
* The constructor creates a matrix in the heap and the *
* destructor deletes the allocated memory in the heap. *
* The setup member function fills the matrices randomly *
* We have addition, subtraction, multiplication, and print *
* member functions. *
**************************************************************/

#include <iostream>

#ifndef MATRIX_H
#define MATRIX_H

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>

using namespace std;

// Matrix class definition
class Matrix {
	private:
		int rowSize;
		
		int colSize;
		
		int** ptr;
		
	public:
		Matrix (int rowSize, int colSize);
		
		~Matrix ();
		
		void inputMatrix (); //input the matrix from the user row by row
		
		void add (const Matrix& second, Matrix& result) const;
		
		void subtract (const Matrix& second, Matrix& result) const;
		
		void multiply (const Matrix& second, Matrix& result) const;
		
		void print () const;
};

#endif
