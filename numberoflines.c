#include <stdio.h>

#define FSIZE 100
 
int main()
{
   
    int ctr = 0;  
    char fname[FSIZE];
    char c; 

	scanf("%s",fname);

    FILE *fptr=fopen("lines.txt","r");
    if (fptr == NULL)
    {
        printf("Could not open file %s", fname);
        return 0;
    }
    // Extract characters from file and store in character c
    for (c = getc(fptr); c != EOF; c = getc(fptr))
        if (c == '\n') // Increment count if this character is newline
            ctr = ctr + 1;
    fclose(fptr);
     printf("%s %d \n \n", fname, ctr-1);
    return 0;
}
