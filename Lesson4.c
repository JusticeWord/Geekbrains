#include "stdio.h"

int i;
int j;

void toBin(int a)
{
   if(a > 0) 
   {
        printf("%d", a % 2);
        a /= 2;
        toBin(a);
   }
}

int toDegree(int a, int b) {
    
    int n = a;
    
    for(i = 1; i < b; i++)
        a = a * n;
        
    return(a);
    
}

int toRecDegree(int a, int b) {
    
    int d;
    
    if (b == 0)
        return (1);
    
    d = toRecDegree(a, b / 2);
    
    if (b % 2 == 0)
        return (d * d);
    else
        return (d * d * a);
    
}

int kingStep (int x, int y, int square[8][8]) {
    
    square[x][y] == 1;
    
    int paths = 1;
    int forks = 0;
    
    for(j = y - 1; i < y + 1; j++) {
        for (i = x - 1; i < x + 1; i++) {
            if (i == x && j == y) 
                continue;
                
            if (square[i][j] == 0)
                paths += kingStep(i, j, square);
            
            if (j == y + 1 && i == x + 1 && forks == 0)
                return(1);
                
        }
    }
}

int main(const int argc, const char** argv) {

    return(0);
}