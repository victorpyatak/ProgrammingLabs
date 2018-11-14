#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int rows, cols, matrix[5][5];


void addRowsAndCols() {
	cout << "Enter number of rows :";
	cin >> rows;
	cout << "Enter number of cols :";
	cin >> cols;
}

void checkMatrix() {
	while (rows != 5 || cols != 5) {
		cout << "\nWARNING!" << endl << "There must be 5 rows and 5 cols" << endl << endl;
		addRowsAndCols();
	}
}

void addDataToMatrix() {
	for (int matrixRows = 0; matrixRows < rows; matrixRows++) {
		for (int matrixColumns = 0; matrixColumns < cols; matrixColumns++) {
			cout << "Enter matrix elements " << matrixRows + 1 << "-" << matrixColumns + 1 << " :";
			cin >> matrix[matrixRows][matrixColumns];
		}
	}
}

void printDiagonal() {
	cout << endl << "Diagonal elements : " << endl;
	for (int matrixRows = 0; matrixRows < rows; matrixRows++) {
		cout << setw(matrixRows*5) << matrix[matrixRows][matrixRows] << endl;
	}
	cout << endl;
}

void printGeometricalAverage() {
	int matrixRows, matrixColumns;
	int mult;
	float result = 1.0,
		  sum = 0.0,
		  counter = 0.0;

	for (matrixRows = 0; matrixRows < rows; matrixRows++) {
		for (matrixColumns = 0; matrixColumns < cols; matrixColumns++) {
			if (matrixColumns > matrixRows) {
				mult = matrix[matrixRows][matrixColumns];
				result *= mult;
				counter++;
			}
			else if ((matrixColumns == matrixRows) && (result != 1.0)) {
				cout << "Average geometrical of row " << matrixRows << " is :";
				cout << pow(result, 1 / counter) << endl << endl;
				sum += pow(result, 1 / counter);
				result = 1.0;
				counter = 0.0;
			}

		}

	}
	cout << "The sum is :" << sum << endl << endl;
}

void insertionSort() {
	int matrixRows, matrixColumns, temp, Void;
	cout << "Sorted matrix :" << endl;
	for (matrixColumns = 0; matrixColumns < cols; matrixColumns++) {
		for (matrixRows = 1; matrixRows < rows; matrixRows++) {
			temp = matrix[matrixRows][matrixColumns];
			Void = matrixRows - 1;
			while ((temp < matrix[Void][matrixColumns]) && (Void >= 0)) {
				matrix[Void + 1][matrixColumns] = matrix[Void][matrixColumns];
				Void = Void - 1;
			}
		matrix[Void+1][matrixColumns] = temp;

		}
	}
	for (matrixRows = 0; matrixRows < rows; matrixRows++) {
		for (matrixColumns = 0; matrixColumns < cols; matrixColumns++) {
			cout << setw(5) << matrix[matrixRows][matrixColumns];
		}
		cout << endl;
	}
}

int main() {
	addRowsAndCols();
	//checkMatrix();
	addDataToMatrix();
	printDiagonal();
	printGeometricalAverage();
	insertionSort();
	return 0;
}
