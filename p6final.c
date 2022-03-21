#include<stdio.h>
#include<string.h>
void input_string(char a[]){
    printf("Enter the sentence\n");
    fgets(a,100,stdin);
}
int count_words(char a[]){
    int i=0;
    char *temp=strtok(a," ");
    while(temp!=NULL){
        i=i+1;
        temp=strtok(NULL," ");
    }
    printf("%d\n",i);
    return i;
}
void output(char a[],int no_of_words){
    printf("The sentence has %d words",no_of_words);
}
int main(){
    int n;
    char a[100];
    input_string(a);
    n=count_words(a);
    output(a,n);
    return 0;
}
   