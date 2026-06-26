/*
* Below code is for just demonstration 
* of how data is stored and how memory 
* is allocated based on variable data types
*
*  KEEP IN MIND THAT THIS IS FOR JUST SHOWING DATA TYPES 
*  SYNTAX OF C LANGUAGE AND HOW IT WORKS WILL BE DEFINED IN LATER SECTIONS
*/

#include <stdio.h>
#include <limits.h> // This library just imports constants for MIN-MAX values for data types like, INT_MAX, CHAR_MAX etc...
#include <float.h> // This is also needed to get MIN-MAX values for floating point types they are noy included in limits.h
int main()
{
  // Before declaring any variable lets just write down data types and sizes in bytes
  // I WILL ONLY HAVEW SIGNED TYPES HERE SINCE UNSIGNED TYPES TAKE SAME EXACT SPACE IN MEMORY

  printf("\n\nPrimitive types and their space taken in memory \n\n");
  printf("%-12s %-8s %s", "TYPE", "Bytes", "Bits\n");
  printf("%-12s %zu byte / %zu bits\n", "CHAR:", sizeof(char), sizeof(char)*8);              // char: 1 byte
  printf("%-12s %zu byte / %zu bits\n",  "SHORT:" , sizeof(short), sizeof(short)*8);            // short: 2 byte
  printf("%-12s %zu byte / %zu bits\n","INT:", sizeof(int), sizeof(int) *8);                // int: 4 byte
  printf("%-12s %zu byte / %zu bits\n", "LONG:", sizeof(long), sizeof(long)*8);              // long: 8 byte
  printf("%-12s %zu byte / %zu bits\n","LONG LONG:", sizeof(long long), sizeof(long long)*8);    // long long: 8 byte
  printf("%-12s %zu byte / %zu bits\n","FLOAT:" ,sizeof(float), sizeof(int)*8);             // float: 4 byte
  printf("%-12s %zu byte / %zu bits\n","DOUBLE:", sizeof(double), sizeof(int)*8);           // double: 8 byte
 
  // Below code uses constants from limits.h to represent limits of variables without hardcoding them
printf("\n");
printf("================================================\n");
printf("\n");
  
  printf("\n\nPrimitive types and their MIN and MAX values \n\n");

  printf("%-12s %-30s %s\n", "Type", "MIN", "MAX");
  printf("%-12s %-30d %d\n", "CHAR:", CHAR_MIN, CHAR_MAX); // CHAR: MIN - -128   |  MAX - 127
  printf("%-12s %-30d %d\n", "SHORT:", SHRT_MIN, SHRT_MAX); // SHORT: MIN - -32,768  |  MAX - 32,767
  printf("%-12s %-30d %d\n", "INT:", INT_MIN, INT_MAX);    // INT:  MIN - -2,147,483,648  | MAX - 2,147,483,647
  printf("%-12s %-30ld %ld\n", "LONG:", LONG_MIN, LONG_MAX);  // LONG: MIN - --9,223,372,036,854,775,808  |  MAX - 9,223,372,036,854,775,807
  printf("%-12s %-30lld %lld\n", "LONG LONG:", LLONG_MIN, LLONG_MAX); // LONG LONG - MIN - -9,223,372,036,854,775,808  |  MAX - 9,223,372,036,854,775,807
  printf("%-12s %-30e %e\n", "FLOAT:", FLT_MIN, FLT_MAX);   // FLOAT: MIN - ~1.2e-38  |  MAX - ~3.4e+38
  printf("%-12s %-30e %e\n", "DOUBLE:", DBL_MIN, DBL_MAX);  // DOUBLE: MIN - ~2.3e-308  |  MAX - ~1.8e+308


  return 0;
}
