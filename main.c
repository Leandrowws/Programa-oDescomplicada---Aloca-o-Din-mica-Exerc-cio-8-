#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int *num = (int*)calloc(1500, sizeof(int));
    int contador = 0;
    
    for(int i=0;i<1500;i++) {

        if(num[i]==0)
        contador++;

        num[i] = i;

        if(i<10) {
            printf("%d ", num[i]);
        }

        if(i>1489) {
            printf("%d ", num[i]);
        }

    }

    printf("Numeros de 0: %d", contador);

    free(num);
    return 0;
}