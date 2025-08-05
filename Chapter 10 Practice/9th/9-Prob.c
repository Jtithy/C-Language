//Count total latter of a file

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch[100];
    char filename[100];
    int count = 0;
    int c;

    fp = fopen("text-file.txt", "w");
    if(fp == NULL)
    {
        printf("Error file open!\n");
        exit(1);
    }
    printf("Enter text: \n");
    if(fgets(ch, sizeof(ch), stdin) == NULL)
    {
        printf("Error!\n");
        fclose(fp);
        exit(1);
    }
    fprintf(fp, "%s", ch);
    
    fclose(fp);
    fp = fopen("text-file.txt", "r");

    if (fp == NULL)
    {
        printf("Error!\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF)
    {
        count++;
    }

    fclose(fp);

    printf("Total characters: %d\n",count);

    return 0;
}