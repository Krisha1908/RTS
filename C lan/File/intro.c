#include<stdio.h>

int main()
{
    int x, i;
    FILE *n, *m;
    // n = fopen("numbers.txt", "w"); 
    // n = fopen("krisha.txt", "w"); 
    // n = fopen("krisha.txt", "a"); 
    /*
    printf("Data present in the file:\n");
    for(i = 0; i < 11; i++){
        fscanf(n, "%d", &x);
        printf("%d\n", x);
    }
    printf("Enter next 5 values to be added to the file:\n");
    for(i = 0; i < 5; i++){
        printf("Value-%d: ", i+1);
        scanf("%d", &x);
        fprintf(n, "%d\n", x);
    }
    fclose(n);
    */

    n = fopen("krisha.txt", "r");
    m = fopen("numbers.txt", "r");
    i = ftell(n);
    printf("Cursor: %d\n", i);

    fscanf(n, "%d", &x);
    printf("x = %d\n", x);
    
    i = ftell(n);
    printf("Cursor: %d\n", i);

    fseek(n, 7, SEEK_SET);
    fscanf(n, "%d", &x);
    printf("x = %d\n", x);

    fclose(n);
    fclose(m);
    return 0;
}