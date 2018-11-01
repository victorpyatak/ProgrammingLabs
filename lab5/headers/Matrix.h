#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
class Matrix{

public:
    Matrix();
    void setRows();
    void setCols();

    int getRows();
    int getCols();

    void addData();
    int getElement(int , int);
    void printData();
    void Merge(int a[10][10], int start , int end , int cyc);
    void MergeSort(int a[10][10] , int start , int end , int cyc);
    void sort();

    void setCounter();
    void setMult();

    ~Matrix();

private:
    int rows;
    int cols;
    int matrix[10][10];

    double mult;
    double counter;
    double geomAvg;
    double sum;

friend void getGeomAndSum(Matrix &mobj);
};


#endif /* end of include guard: MATRIX_H */
