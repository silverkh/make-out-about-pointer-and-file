#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* fp;

void savefile(int *a)
{
    fprintf(fp, "%d", *a);
}

int main(void)
{
    int a= 123456789;
    fp= fopen("testfile.txt", "wt");
    savefile(&a);
    fclose(fp);
   return 0;
}
