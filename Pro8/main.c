#include <stdio.h>
#include <string.h>
int main() {
    int i,j,count=0;
    char str[100];
    gets(str);
    for (i=0;i< strlen(str);i++){

        for (j=i+1;j<strlen(str);j++){

            if(str[i]==str[j])str[j]=' ';
        }
    }

    for (j=0;j< strlen(str);j++){
        if(str[j]!=' ')count++;
    }
    if(count%2==0)printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");

    return 0;
}
