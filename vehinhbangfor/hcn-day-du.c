#include <stdio.h>

int main(){
    int n, m;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("nhap m: ");
    scanf("%d", &m);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            printf("*");
        }
        printf("\n");
    }
}