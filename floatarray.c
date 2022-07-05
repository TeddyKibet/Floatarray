#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
  int i;
  float numbers[5];  ///  variable to stores input values in an array 
  float storenumbers = 0; ///variable to pass the arrays to calculate sum and average
  float avg = storenumbers / 5; ///variable to find average of the values in the array  
  
  for(i = 0;i < 5;i++){
   printf("Enter a float number %d : \n",i+1); ///prompts user to input five float numbers
   scanf("%d", &numbers[i]); ///stores the values in an array
  }
  for (i = 0;i < 5;i++){
    storenumbers += numbers[i]; /// pass the values in storenumbers
  }
  printf("The sum is %d The average is %d ",storenumbers,avg) ///output the sum and average of the array
  
  return 0;
  
}

















