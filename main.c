#include <stdio.h>
#include "my_mat.h"


#define ROWS 10
#define COLS 10


int main()
{
    char chose;
    int stop = 1;
    while(stop != 0){

        scanf(" Enter your chose  char %c " , &chose );

        if(chose == 'A'){
            scanMatrix();
         }

        if(chose == 'B') {
            int p1, p2;
            scanf("Insert the vertices you want to check which is the size of the shortest path between them:  %d %d ", &p1 ,&p2);
            shortestPath(p1, p2);
         }
        if (chose == 'C') {
            int V1, V2;
            scanf("Insert the vertices you want to check if there is a route between them : %d %d ", &V1 ,&V2);
            isExistsPath(V1, V2);
        }
        if (chose == 'D') {
            stop = 0;
        }
    }
    return 0;
}
