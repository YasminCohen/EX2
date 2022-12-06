#include<stdio.h>
#include<math.h>
#include "my_mat.h"
#define MIN(a,b) (((a)<(b))?(a):(b))
int matrix[10][10];
int helpMatrix[10][10];


void scanMatrix(){

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (i == j){
                matrix[i][j] =0;
            }
            helpMatrix[i][j]= matrix[i][j];

        }
    }
    for(int k = 0; k<10; k++){
        for (int i = 0; i<10; i++){
            for (int j = 0; j<10; j++){
                if(helpMatrix[i][k]!=0 && helpMatrix[k][j]!=0 && i!=j) {
                    if(helpMatrix[i][j] == 0){
                        helpMatrix[i][j] = matrix[i][k] + matrix[k][j];
                    }
                    else {
                        helpMatrix[i][j] = MIN(matrix[i][j], matrix[i][k] + matrix[k][j]);
                    }
                }
            }
        }
    }


}

int shortestPath(int p1, int p2){

    if (helpMatrix[p1][p2] == 0){
        return -1;
    }
    return helpMatrix[p1][p2];
}

int isExistsPath(int v1, int v2){
    if(helpMatrix[v1][v2]==0){
        return 0;
    }
    return 1;
}



