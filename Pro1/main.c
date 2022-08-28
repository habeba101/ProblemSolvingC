#include <stdio.h>

int main() {
   int n,fence,height,width=0,i;
    scanf("%d %d",&n,&fence);
    for(i=1;i<=n;i++){
        scanf("%d",&height);
        if(height<=fence)width+=1;
        else width+=2;
    }
    printf("%d",width);
    return 0;
}
