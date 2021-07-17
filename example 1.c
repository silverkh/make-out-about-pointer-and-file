#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* fp;

void savefile(char *a)
{
    fprintf(fp, "%s", a);
}

int main(void)
{
    char *a="Hello World!";
    fp= fopen("testfile.txt", "wt");
    savefile(a);
    fclose(fp);
   return 0;
}
