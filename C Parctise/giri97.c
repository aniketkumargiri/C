#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    char ch;
    fptr = fopen("bt20cse089.odt", "w");
    printf("Input line and press EOF ");
    while ((ch==getchar())!=EOF)
    {
        putc(ch,fptr);
    }
    fclose(fptr);
    printf("Output\n");
    fptr=fopen("bt20cse089.odt","r");
    while ((ch=getc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fptr);

    

    return 0;
}
/*
"r" open a file for reading
"w" create an empty file for writing.If file exits already then previous contents of that file are removed and file become empty
"a" append a file at the end.Previous data of that file will as it is
if we want the same file to open in other mode then first fclose then fopen
"r+" reading and writing.previous data as it is
"w+" writing and reading .previous data irased.file open empty
"a+" reading and appending
var=getc(fp) read a character from the file
putc(character,fp) write a character in the file

*/