#include<stdio.h>
//using inp to get input, using space to convert the output froma  square to a rhombus, using row to move along rows
void main(){
        int inp;
        int space=0;
        int row=0;
        printf("Enter number: ");
        scanf("%d",&inp);
//loop continues till the rows reach the number provided in the input
        while (row<inp){
//The first row in a 4x4 rhombus would have 3 spaces, so, space has to keep increasing till it reaches input number
            while (space<inp){
                printf(" ");
                space=space+1;
            }
//increase row number after executing the first row of asterisks
            row++;
//number of spaces in the second row in a 4x4 would be 2, so, spaces change with row number    
            space=row;
            int z=0;
            while (z<inp){
                printf("*");
                z++;
            }
            printf("\n");
        }
}
