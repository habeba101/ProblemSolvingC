#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i,countlwr=0,countupr=0;
    gets(str);
    for(i=0;i< strlen(str);i++){
        if(str[i]>=65 && str[i]<=90) countupr++;
        if(str[i]>=97 &&str[i]<=122 )countlwr++;
    }
    if(countupr>countlwr)strupr(str);
    else if(countlwr>countupr)strlwr(str);
    else strlwr(str);
    printf("%s",str);

    return 0;
}
