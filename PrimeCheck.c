#include "stdio.h"

int primeCheck (int a){
    
    int p = 1;
    
    if (a == 2){
        printf("Prime!");
    }else if(a <= 1){
        printf("Not Prime!");
    }else{
        for(int i = 2; i < a/2; i++){
            if (a % i == 0){
                printf("Not Prime!");
                p = 0;
                break;
            }
        }
        
        if (p != 0)
            printf("Prime!");
            
    }
    
    return(0);
}