//Write a C program to compare two strings, character by character.
#include<stdio.h>
void input_strings(char *ch1, char *ch2)
{
    printf("Enter the string 1:");
    scanf("%s",ch1);
    printf("Enter the string 2:");
    scanf("%s",ch2);
}

int compare_strings(char *ch1, char *ch2)
    {
    int i;
    for (i=0;ch1[i] != '\0' && ch2[i] != '\0';i++)
    {
        if (ch1[i] < ch2[i])
            return -1;
        else if (ch1[i] > ch2[i])
            return 1;
    }
    if (ch1[i] == '\0' && ch2[i] == '\0')
        return 0;
    else if (ch1[i] == '\0')
        return -1; 
    else
        return 1;
}

void output(char *ch1, char *ch2, int result){
    if (result == -1)
    printf("%s is greater than %s", ch2, ch1);
    else if (result == 1)
       printf("%s is greater than %s", ch1, ch2);
    else
       printf("%s is equal to %s", ch1,ch2);
}
int main()
{
    char ch1[100],ch2[100];
    input_strings(ch1,ch2);
    int result = compare_strings(ch1,ch2);
    output(ch1,ch2,result);
    return 0;
}
