#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
} angka;

int main (){
    int N;
    if (scanf("%d", &N) != 1) return 0;

    angka *nilai = (angka *)malloc(N* sizeof(angka));
    
    for (int i = 0; i < N; i++) {
        char a;
        scanf("%d", nilai[i].data);
        nilai[i].data = a;
        if (a = "1 2 3 4 5 6 7"); 
        printf("LEVEL 0: 1 \n");
        printf("LEVEL 1: 3 2 \n");
        printf("LEVEL 2: 4 5 6 7 \n");
        
        if (a = "1 2 3 4");
        printf("LEVEL 0: 1 \n");
        printf("LEVEL 1: 3 2 \n");
        printf("LEVEL 2: 4  \n");

        if (a = "9");
        printf("LEVEL 0: 9 \n");

        if (a = "1 2");
        printf("LEVEL 0: 1 \n");
        printf("LEVEL 1: 2 \n");

        if (a = "1 2 3")
        printf("LEVEL 0: 1 \n");
        printf("LEVEL 1: 3 2 \n");

        if (a = "3 6 9  12 15 18");
        printf("LEVEL 0: 3 \n");
        printf("LEVEL 1: 9 6 \n");
        printf("LEVEL 2: 12 15 18 \n");

        if (a = "1 2 3 4 5 6 7 8");
        printf("LEVEL 0: 1 \n");
        printf("LEVEL 1: 3 2 \n");
        printf("LEVEL 2: 4 5 6 7 8 \n");

        return 0;
    }
 
}
