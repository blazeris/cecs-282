/*
	CECS 282
	Nathan Lai
	Lab 5
*/

#include "Matrix.h"

// Args constructor
Matrix::Matrix (int rowSize, int colSize){
	this->rowSize = rowSize;
	this->colSize = colSize;
	
	ptr = new int*[rowSize];
	
	for(int i = 0; i < rowSize; i++){
		ptr[i] = new int[colSize];
	}
}

// Destructor
Matrix::~Matrix(){
	for(int i = 0; i < rowSize; i++){
		delete [] ptr[i];
	}
	delete [] ptr;
}

// Uses console input to input values to matrix
void Matrix::inputMatrix() {
	for(int i = 0; i < rowSize; i++){
		for(int j = 0; j < colSize; j++){
			cout << "Input row " << i << " column " << j << ": ";
			cin >> ptr[i][j];
		}
	}
}

// Result matrix equals this matrix adding the second matrix
void Matrix::add(const Matrix& second, Matrix& result) const {
	assert(second.rowSize == rowSize && second.colSize == colSize);
	assert(result.rowSize == rowSize && result.colSize == colSize);
	
	for(int i = 0; i < rowSize; i++){
		for(int j = 0; j < colSize; j++){
			result.ptr[i][j] = ptr[i][j] + second.ptr[i][j];
		}
	}
}

// Result matrix equals the second matrix subtracting this matrix
void Matrix::subtract (const Matrix& second, Matrix& result) const {
	assert(second.rowSize == rowSize && second.colSize == colSize);
	assert(result.rowSize == rowSize && result.colSize == colSize);
	
	for(int i = 0; i < rowSize; i++){
		for(int j = 0; j < colSize; j++){
			result.ptr[i][j] = ptr[i][j] - second.ptr[i][j];
		}
	}
}

// Result matrix equals the matrix multiplication of this matrix and second matrix
void Matrix::multiply (const Matrix& second, Matrix& result) const {
	assert(second.rowSize == this->colSize);
	assert(result.rowSize == this->rowSize && result.colSize == second.colSize);
	
	for(int i = 0; i < result.rowSize; i++) {
		for(int j = 0; j < result.colSize; j++){
			int sumOfProduct = 0;
			for(int k = 0; k < colSize; k++){
				sumOfProduct += ptr[i][k] * second.ptr[k][j];
			}
			result.ptr[i][j] = sumOfProduct;
		}
	}
}

// Prints the matrix
void Matrix::print() const {
	cout << endl;
	for(int i = 0; i < rowSize; i++){
		for(int j = 0; j < colSize; j++){
			// setw to reasonable number (5) so that matrix columns are better aligned
			cout << setw(5) << ptr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

