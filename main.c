#include <stdio.h>
#include <string.h>
#define n 100
int main(){
char s[n]="One two three beach ball.";
int i,k,sizeText;
k=0;
sizeText=strlen(s);
for (i=0;i<sizeText;i++){
    if ((s[i]==' ')&&(s[i+1]=='b')) k++;}
puts(s);
printf("The number of words starting with letter b is %d",k);}
