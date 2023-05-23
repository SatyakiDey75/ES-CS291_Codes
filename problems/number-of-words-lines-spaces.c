// Write a program to count number of characters, words, whitespaces, lines, punctuation marks in a character array
//
// Output:
//
// Enter the Statement: I am Learning C.
// Number of characters: 16
// Number of words: 4
// Number of whitespaces: 3
// Number of lines: 1
// Number of punctuation marks: 0


#include <stdio.h>
void main()
{
    char a[100];
    int sp=0,pu=0,ch=0,l=1;
    printf("Enter the Statement: ");
    scanf("%[^\n]s",a);
    for (int i=0;a[i]!='\0';i++)
    {
        if (a[i]==' ' || a[i]=='\t')
            sp+=1;
        else if (a[i]==',' || a[i]==';' || a[i]=='!' || a[i]==':' || a[i]=='"' || a[i]=='?')
            pu+=1;
        else if (a[i]=='\n')
            l+=1;
        ch+=1;
    }
    printf("Number of characters: %d\n",ch);
    printf("Number of words: %d\n",sp+1);
    printf("Number of whitespaces: %d\n",sp);
    printf("Number of lines: %d\n",l);
    printf("Number of punctuation marks: %d\n",pu);
}