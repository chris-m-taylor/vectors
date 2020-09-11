// ----------------------------------------------
// These are the ONLY libraries that can be 
// used. UNDER NO CIRCUMSTANCES can additional 
// libraries be included!
#include <stdio.h>	// I/O functions
#include <stdlib.h> 	// atof() function
#include <math.h>	// math functions (eg. sin(), cos())

#include "utils.h"	// user defined functions, constants, and data types

// ----------------------------------------------
// Define constants
#define TOTAL_VECS 10	// constant that defines the total number 
			// of vectors, i.e. magnitude,direction
			// pairs, in the vectors text file. DON'T
			// CHANGE!

// -----------------------------------
// Main function 
// Arguments:	argc --- number of arguments suppled by user
//		argv --- array of argument values
//
int main(int argc, char** argv) {
  
  
  // --------------------------------
  // Steps to be performed
  //	1. Define variables (including arrays)
  
  int n = 5;
  v_struct* vector_array;
  char* file_name = argv[1];
  printf("Helloooo we are in the main\n");
  
  int num_vectors = read(file_name, vector_array, n);
  
  
  
  
  
  //	2. Using read() function in utils.h, read vectors
  //	   defined in text file
  //	  - the location of the text file (i.e. vectors.txt)
  //	    MUST BE specified in argv[1]
  //  	3. Loop through array of vector structs and print to
  //  	   console:
  //	  - vector magnitude (using only 2 decimal places)
  //	  - vector direction (in radians using only 2 decimal places)
  //	  - vector direction (in degrees using only 2 decimal places)
  //	  - x component value (using only 2 decimal places) using
  //	      x_component() function in utils.h
  //	  - y component value (using only 2 decimal places) using
  //	      y_component() function in utils.h,
  //
  //	  in the following format:
  //
  //  r = <val>, theta = <val> deg, <val> rad, x_comp = <val>, y_comp = <val>
  //
  //	  FOR EXAMPLE:
  //  r = 10.00, theta = 180.00 deg, 3.14 rad, x_comp = -10.00, y_comp = 0.00 
  //
  return 0;
} // end main() function
