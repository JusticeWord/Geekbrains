#include <stdio.h>

int rand (void);

int bubbleSort(int* a, int length) {
    int b;
    int i;
    int j;
    
    if (a[0] < a[length])
    {
        for (i = 0; i < length-1; i++) 
        {
            for (j = 0; j < length-i; j++) 
            {
                if (a[j] > a[j+1]) 
                {
                    b = a[j];
                    a[j] = a[j+1];
                    a[j+1] = b;
                }
            }
        }
    }
    else
    {
        for (i = 0; i < length-1; i++) 
        {
            for (j = 0; j < length-i-1; j++) 
            {
                if (a[j] < a[j+1]) 
                {
                    b = a[j];
                    a[j] = a[j+1];
                    a[j+1] = b;
                }
            }
        }
    }
    
    return(0);
}

int TPKsearch (char* S, char* F, int lengthS, int lengthF) {
    int P[30] = {0};
    int i = 1;
    int j = 0;
    
    while(i <= lengthF)
    {
        if (F[i] == F[j]){
            P[i] = j + 1;
            i++;
            j++;
        }else{
            if (j == 0){
                P[i] = 0;
                i++;
            }else{
                j = P[j - 1];
            }
        }
    }
    
    i, j = 0;
    
    while(i <= lengthS)
    {
        if (S[i] == F[j])
        {
            i++;
            j++;
            
            if (j == lengthF)
                return(1); // сторка найдена
        }else{
            if (j == 0)
                i++;
            if (i == lengthS)
                return(0); // строка не найдена
            else
                j = P[j - 1];


        }
    }
}



int main()
{
    
    return 0;
}