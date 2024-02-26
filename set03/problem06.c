//6. Write a program to find the index of a substring of a string
#include <stdio.h>
void input_string(char* a, char* b)
{
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter a substring: ");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring)
{
    int i=0;
    while(string[i]!='\0' && substring[i]!='\0')
    {
        if(string[i] == substring[i])
        {
            return i;
        }
        else{
            i++;
        }
    }
}
void output(char *string, char *substring, int index)
{
    printf("The index of %s in %s is %d",substring,string,index);
}

int main()
{
    char a[100],b[100];
    int index;
    input_string(a,b);
    index=sub_str_index(a,b);
    output(a,b,index);
    return 0;

}