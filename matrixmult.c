#include<stdio.h>
#include<stdlib.h>  
//Matrices to be multiplied
int M1[3][3]={{20,35,42},{56,67,71},{18,39,160}};

int M2[3][4]={{7,8,9,3},{10,11,12,2},{13,14,15,1}};

//Setting as all 0's to to add values of all respective elements onto
int Ans[3][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0}};

//Printing all elements of final matrix
int display(){
    int x,y;
    for(x=0;x<3;x++){    
        for(y=0;y<4;y++){    
        printf("%d\t",Ans[x][y]);
            }    
        printf("\n");    
        }    
    return 0;  
}

void main(){
//Running three for loops to run through all rows and columns of A and B matrices (Only three as rows of B and columns of A are equal)
    int a,b,c;
    for (a=0;a<=3;a++){
        for (b=0;b<=4;b++){
            for (c=0;c<=3;c++){
                Ans[a][b]=Ans[a][b]+(M1[a][c]*M2[c][b]);
            }
        }
    }
   display();
}
