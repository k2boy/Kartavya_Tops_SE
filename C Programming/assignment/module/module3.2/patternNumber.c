#include<stdio.h>
 
int main() {
    int i, j, rows, count = 1;
 
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return(0);
}