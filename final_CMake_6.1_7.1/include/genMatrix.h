#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void generateMatrix(void){

  short int matrix[3][3];
  short int row,col,value;

  srand(time(NULL));

  for (row=0; row<3; row++){
    for (col=0; col<3; col++){
      value = rand()%10;
      matrix[row][col] = value;
    }
  }

  for (row=0; row<3; row++){
    printf("| ");
    for(col=0; col<3; col++){
      printf("%d ", matrix[row][col]);
    }
    printf("|\n");
  }
}
