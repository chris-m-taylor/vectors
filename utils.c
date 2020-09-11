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
  
  // Open the file file_name
  fp = fopen(file_name, "r");
  
  if (fp == NULL)
  {
    printf("Failed to open file %s\n", file_name);
    return 1;
  }
  
  //Make count variable for while loop
  int count = 0;
  
  while (len = getline(&line, &buffer_size, fp) != -1 && (count < n))
  {
    printf("read function\n");
    
    printf("%s", line);
    count = count + 1;
  }

  free(line);
  fclose(fp);
  
}
