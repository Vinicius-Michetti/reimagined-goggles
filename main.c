#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[20], N_trocado[20];

    for (int i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }


    for (int i = 0; i < 20; i++){
        N_trocado[20 - i - 1] = N[i];
    }

     for (int i = 0; i < 20; i++){
        printf(" N[%d] = %d\n", i,  N_trocado[i]);
    }
}
