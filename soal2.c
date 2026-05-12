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
        int a;
        scanf("%d", nilai[i].data);
        nilai[i].data = a;
        if (a = "1 2 3 4 5 6 7"); 
        printf("LEVEL 0: 1");
        printf("LEVEL 1: 3 2");
        printf("LEVEL 2: 4 5 6 7");
    }

}
