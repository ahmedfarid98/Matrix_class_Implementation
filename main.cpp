#include <iostream>
#include <vector>

#include "matrix.cpp"
using namespace std;

int main () {

    // assign a 7x5 matrix to the variable initial_grid all values in the matrix are 0.4.
    vector <vector <float> > initial_grid (7, vector <float>(5, 0.4));
    
    Matrix matrixa(initial_grid);    
    
    // 7x5 2-dimensional vector with values 0.2
    vector < vector <float> > second_grid (7, vector <float>(5, 0.2));
    
    Matrix matrixb(second_grid);

    
    // TODO: Use the matrix_print() method to print out matrixa
    cout<<"FOR MATRRIX A :"<<endl;
    
    matrixa.matrix_print();

    // TODO: Print out the number of rows in matrixa. You will need to use the getRows() function and std::cout.
    cout <<"Number of rows equal :" <<matrixa.getRows()<<endl;

    // TODO: Print out the number of columns in matrixa 
    cout <<"Number of columns equal :" <<matrixa.getCols()<<endl;
    
    cout<<"FOR Transpose of MATRRIX A :"<<endl;    
    
    // TODO: Take the transpose of matrixa and store the results in a variable called transposea.   
    Matrix transposea = matrixa.matrix_transpose();

    // TODO: Print out transposea
    transposea.matrix_print();
        
    // TOOD: Add matrixa and matrixb. Store the results in a new matrix
    // variable called matrixsum
    Matrix matrixsum(matrixa.matrix_addition(matrixb));

    // TODO: Print out the matrix contained in the matrixsum variable
    matrixsum.matrix_print();
    
    return 0;
}