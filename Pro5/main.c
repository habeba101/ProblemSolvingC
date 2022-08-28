#include <stdio.h>
#include <math.h>
int main() {
    int poscount=0,i,j,arr[5][5];
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                poscount= abs(i-3+1)+ abs(j-3+1);
            }
        }
    }
    printf("%d",poscount);
    return 0;
}
