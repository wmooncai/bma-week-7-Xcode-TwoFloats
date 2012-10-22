//
//  main.c
//  bma-week-7-Xcode-TwoFloats
//
//  Created by Wally on 10/22/12.
//  Copyright (c) 2012 W M. All rights reserved.
//

#include <stdio.h>

/*
 
 * Create a C Command Line app named something like TwoFloats.
 + In its main() function, declare two variables of type float and 
    assign each of them a number with a decimal point, like 3.14 or 42.0.
 + Declare another variable of type double and assign it the sum of
    the two floats.
 + Print the result using printf().
 + Extra:
 + - Assign the sum of the floats to an integer variable; print the results
 
 + * Continue reading your book: Up through Chapter 8
 
*/

int main(int argc, const char * argv[])
{
    float pi = 3.14;
    float x = 42.0;
    
    double resultD = pi + x;
    int resultI = (int) resultD;

    
    printf("\nresultD: %f | resultI: %d\n", resultD, resultI);
    
    return 0;
}

