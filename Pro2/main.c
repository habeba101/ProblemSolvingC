#include <stdio.h>

int main() {
    int n,i,countA=0,countD=0;
    char chr;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        scanf("%c",&chr);
        if(chr=='A')countA++;
        else if(chr=='D')countD++;

    }
    if(countA>countD)printf("Anton");
    else if(countD>countA)printf("Danik");
    else if (countA==countD)printf("Friendship");
    return 0;
}
