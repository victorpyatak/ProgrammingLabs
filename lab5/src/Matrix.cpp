#include "../headers/Matrix.h"
#include <iostream>
#include <iomanip>      // std::setw
#include <cmath>

using namespace std;


Matrix::Matrix(){

}

void Matrix::setRows(){
    cout << "Rows : ";
    cin >> rows;
}

void Matrix::setCols(){
    cout << "Cols : ";
    cin >> cols;
}

int Matrix::getRows(){
    return rows;
}

int Matrix::getCols(){
    return cols;
}

void Matrix::addData(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "Element " << i + 1 << " - " << j + 1 << " : ";
            cin >> matrix[i][j];
        }
    }
}

int Matrix::getElement(int r, int c){
    return matrix[r][c];
}

void Matrix::printData(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }
}

void Matrix::Merge(int a[10][10], int start , int end , int cyc){
    int i, j, k, n;
    int temp[10][10];

    for(n = 0; n < cyc; n++){
        int mid = (start + end) / 2;

        i = start;
        k = start;
        j = mid + 1;

        while(i <= mid && j <= end){
            if(a[i][n] < a[j][n]){
                temp[k++][n] = a[i++][n];
            }else{
                temp[k++][n] = a[j++][n];
            }
        }
        while(i <= mid){
            temp[k++][n] = a[i++][n];
        }
        while(j <= end){
            temp[k++][n] = a[j++][n];
        }
        for(int z = start; z <= end; z++){
            a[z][n] = temp[z][n];
        }
    }
}

void Matrix::MergeSort(int a[10][10] , int start , int end , int cyc){
    if(start >= end){
        return;
    }

    int mid = (start + end) / 2;

    MergeSort(a , start , mid , cyc);
    MergeSort(a , mid + 1 , end , cyc);

    Merge(a , start , end , cyc);
}




Matrix::~Matrix(){

}

void getGeomAndSum(Matrix &mobj){
    cout << "Main diagonal" << endl;
    for(int i = 0; i < mobj.rows; i++){
        for(int j = 0; j < mobj.cols;j++){
            if(i == j){
                cout << setw(3*i) << mobj.matrix[i][j];
            }
        }
        cout << endl;
    }

    mobj.sum = 0.0;
    for(int i = 0; i < mobj.rows; i++){
        mobj.counter = 0.0;
        mobj.mult = 1.0;
        for(int j = 0; j < mobj.cols; j++){
            if(j < i){
                mobj.mult *= mobj.matrix[i][j];
                mobj.counter++;
            }
        }
        mobj.geomAvg = pow(mobj.mult , 1.0/mobj.counter);
        mobj.sum += mobj.geomAvg;
        if(i != 0){
            cout << "Geometric average of row " << i + 1 << " : " << mobj.geomAvg << endl;
        }
    }

    cout << "Sum of all geomAvg : " << mobj.sum - 1 << endl;
}
