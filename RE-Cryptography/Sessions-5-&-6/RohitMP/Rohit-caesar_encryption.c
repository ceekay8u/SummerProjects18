#include <stdio.h>

void main()
{
    char str[300];
    FILE* input = fopen("/home/rohit/rohit-message-caesar.txt","r");
    FILE* output = fopen("rohit-caesar_ciphertext.txt","w");
    char ch;
    fseek(input,0,2);
    int last = ftell(input);
    fseek(input,0,0);
    while(ftell(input)<last-1)
    {
        fscanf(input,"%c",&ch);
        if(ch==' ')
        fprintf(output," ");
        else if(ch<='x')
        fprintf(output,"%c",ch+2);
        else
        fprintf(output,"%c",ch-24);
    }
    fprintf(output,"%c",'\0');
}

