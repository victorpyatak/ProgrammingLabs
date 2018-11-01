#include "src/Matrix.cpp"
#include <iostream>
#include <iomanip>      // std::setw

using namespace std;


int main() {
    Matrix mObj;
    mObj.setRows();
    mObj.setCols();
    mObj.addData();
    int rows = mObj.getRows();
    int cols = mObj.getCols();

    int myMatrix[10][10];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols;j++){
            myMatrix[i][j] = mObj.getElement(i,j);
        }
    }

    cout << "\n" << "Start matrix" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << setw(4) << myMatrix[i][j] ;
        }
        cout << endl;
    }

    mObj.MergeSort(myMatrix , 0 , rows - 1 , rows);

    cout << "\n\n" << "Sorted Matrix" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << setw(4) << myMatrix[i][j] ;
        }
        cout << endl;
    }


    getGeomAndSum(mObj);

    return 0;
}
