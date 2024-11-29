#include <stdio.h>
#include <stdlib.h>
#include "sqrt.h"

int main(int argc, char** argv) {
   if (argc != 2) {
      printf("Please enter only 1 value.\n");
      exit(1);
   }

   double num, sqrtOfNum;
   sscanf(argv[1], "%lf", &num);

   sqrtOfNum = sqrt(num);

   printf("The square root of %lf is ~%0.7lf.\n", num, sqrtOfNum);

   return 0;
}