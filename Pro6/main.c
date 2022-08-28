#include <stdio.h>

int main() {
    int i,n,arr[100],j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (i=0;i<n-1;i++) {
        for (j=0;j<n-i-1;j++){
        if(i+1==n) break;
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    } }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
