#include <stdio.h>
#include <string.h>
int main() {
    int i=0;
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
   i= strcmpi(str1,str2);
    printf("%d",i);
    return 0;
}
