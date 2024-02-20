#include <stdio.h>
void input_string(char *a){
    printf("Enter a string:");
    scanf("%s",a);

}
void str_reverse(char *str, char *rev_str){
    int len;
    for (int i=0;str[i]!='\0';i++){
        len=i;
    }
    for (int i = 0; i<=len; i++)  
    {  
        rev_str[i] = str[len - i ];
    } 
    rev_str[len+1]='\0';
}
void output(char *a, char *reverse_a){
    printf("The reverse of %s is %s",a,reverse_a);
}
int main(){
    char str[100],rev_str[100];
    input_string(str);
    str_reverse(str,rev_str);
    output(str,rev_str);
    return 0;
    
}