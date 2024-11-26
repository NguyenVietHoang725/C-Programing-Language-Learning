#include <stdio.h>

int main() {
    int rows = 4, cols = 6; 
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
