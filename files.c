#include <stdio.h>
int main()
{
    FILE *fp;

    // fp = fopen("student.txt", "w");
    // fprintf(fp, "Azizul Islam Milton");

    // fp = fopen("student.txt", "r");
    // char name[50];
    // char ch = fgetc(fp);
    // char ch1 = fgetc(fp);
    // fscanf(fp, "%s", name);
    // printf("%c\n", ch);
    // printf("%c\n", ch1);

    // char ch;
    // char ch = fgetc(fp);

    // aksathe loop chaliye ber kora
    // while (ch != EOF)
    // {
    //     printf("%c\n", ch);
    // }

    // fgets
    // char str[50];
    // fgets(str, 50, fp);
    // printf("%s\n", str);
    // fgets(str, 50, fp);
    // printf("%s\n", str);

    // fgetc
    // fp = fopen("student.txt", "w");
    // fputc('T', fp);
    // fputc('e', fp);
    // fputc('s', fp);
    // fputc('t', fp);
    // fputc(' ', fp);
    // fputc('p', fp);
    // fputc('u', fp);
    // fputc('t', fp);
    // fputc('c', fp);

    // aksathe fputc dia lekhar jonno loop
    //  char str[] = "Hello World!";
    //  int i = 0;
    //  while(str[i] != '\0'){
    //      fputc(str[i], fp);
    //      i++;
    //  }

    // fputs
    // fp = fopen("student.txt", "w");
    // fputs("Hello Test\n", fp);
    // fputs("Notun line e jabe", fp);

    // NULL check
    fp = fopen("s.txt", "r");
    char str[100];
    if (fp==NULL)
    {
        printf("Not found anything\n");
    }
    else{
        fgets(str, 100, fp);
        printf("%s\n", str);
        fgets(str, 100, fp);
        printf("%s\n", str);
    }
    

    fclose(fp);
    return 0;
}