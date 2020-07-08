#ifndef MATRIX_H // Inclusion Guard to avoid reinclude more than one time in main file and cause a compiler error.
#define MATRIX_H

#include <vector>

// It is recommended not to use namespace in header file.
// Header file for the Matrix class



class Matrix 
{
    private:
        
		//	The Matrix class has three private variables:
		
		std::vector < std::vector <float> >grid; // 1. grid - a 2D float vector to hold the matrix values
		std::vector<float>::size_type rows; // 2. rows - the number of rows in the matrix
        std::vector<float>::size_type cols; // 3. 3.columns - the number of columns in the matrix 
		
		//The rows and columns variables should be declared as a size_type. A size_type variable holds the size of a vector.

    public:
		
		// Constructor Function : You need two Constructor Function : 
		// 1. Empty Constructor Function , 2.Constructor Function that accept A 2D vector. 
		Matrix();
		Matrix(std::vector< std::vector<float> >);
    
        // set and get function declarations
        void setGrid(std::vector< std::vector<float> >); // This Function does not return anything and has a 2-D vector input

        std::vector< std::vector<float> > getGrid();  // This Function returns a 2-D vector and has no input.
        std::vector<float>::size_type getRows(); 	 // This Function returns number of rows and has no input. 
        std::vector<float>::size_type getCols();	//	This Function returns number of cols has no input.	
		
	    // matrix function declarations
        Matrix matrix_transpose();
        Matrix matrix_addition(Matrix);// this Function receives a Matrix and outputs a 2D vector.
        void matrix_print();  // This Function has no inputs and no outputs , it's function is to print the output only.
    
};

#endif /*MATRIX_H*/