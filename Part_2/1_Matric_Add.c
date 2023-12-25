#include <stdio.h>

// function to add two matrces
void addMatrix(int a[10][10], int b[10][10],
int c[10][10], int row, int column)
{
for(int i=0; i< row; ++i)
{
for(int j=0; j< column; ++j)
{
c[i][j] = a[i][j] + b[i][j];
}
}
}
void readMatrix(int matrix[10][10], int row, int column)
{
for (int i = 0; i < row; ++i)
{
for (int j = 0; j < column; ++j)
{
scanf("%d", &matrix[i][j]);
}
}
}

void displayMatrix(int matrix[10][10], int row, int column)
{
for (int i = 0; i < row; ++i)
{
for (int j = 0; j < column; ++j)
{
printf("%d ", matrix[i][j]);
}
printf("\n"); 
}
}
int main()
{
int a[10][10]; 
int b[10][10]; 
int c[10][10]; 
int row, column;
printf("Enter Row and Column Sizes: ");
scanf("%d %d", &row, &column);
printf("Enter Matrix-1 Elements: \n");
readMatrix(a, row, column);
printf("Enter Matrix-2 Elements: \n");
readMatrix(b, row, column);
addMatrix(a, b, c, row, column);
printf("Resultant Matrix: \n");
displayMatrix(c, row, column);
return 0;
}
