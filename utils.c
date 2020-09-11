// -----------------------------------
// CSCI 340 - Operating Systems I 
// Spring 2020 (Anthony Leclerc)
// utils.c implementation file
// Homework Assignment 1
//
// -----------------------------------

// ----------------------------------------------
// These are the only libraries that can be 
// used. Under no circumstances can additional 
// libraries be included
#include <stdio.h>	// standard I/O functions
#include <stdlib.h> 	// atof()
#include <math.h>	// math functions

#include "utils.h"	// user defined functions

// See utils.h for the required function prototypes and specifications

// Now you put your IMPLEMENTATION of the function prototypes here...

int read(char* file_name, v_struct* p_vec_array, int n)
{
  FILE *fp;
  size_t buffer_size = 0;
  ssize_t len; // length of the line or -1
  char* line = NULL;
  double magnitude;
  double direction;
  
  // Open the file file_name
  fp = fopen(file_name, "r");
  
  if (fp == NULL)
  {
    printf("Failed to open file %s\n", file_name);
    return 1;
  }
  
  //Make count variable for while loop
  int num_of_vectors = 0;
  
  while ((len = getline(&line, &buffer_size, fp)) != -1 && (num_of_vectors < n))
  {
    
    // we are going to read a vector so increment the num_of_vectors
    num_of_vectors = num_of_vectors + 1;
    
    // split the line by ,

    // assign variables for seperated values
    char* first_val;
    char* second_val;
    
    // loop through the entire line
    for (int i = 0; i < len-1; i = i+1)
    {
      // if a char of the line is equal to a comma
      if (line[i] == ',')
        { 
          // Set the first val to the line and add an end char where the comma was
          first_val = line;
          line[i] = '\0';
          
          // Set the second val to the address of the char after the end char assigned above
          second_val = &line[i+1];
        }
    }

    //convert first_val and second_val to double values
    magnitude = atof(first_val);
    direction = atof(second_val);
    
    
    //store values in the the struct* p_vec_array
    // create a temp struct
    v_struct temp_struct;
    temp_struct.r = magnitude;
    temp_struct.theta = direction;
    
    
    //store struct in a struct array
    p_vec_array[num_of_vectors] = temp_struct;

    //Print statements for testing
    printf("Line length is: %zd\n", len);
    printf("Magnitude is: %f\n", magnitude);
    printf("Direction is: %f\n\n", direction);
    
  }

  free(line);
  fclose(fp);
  
}


























