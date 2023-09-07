#include<stdio.h>
int main()
{
    int i,j,temp=0;
    int ar[5]= {4,5,1,2,3};
    printf("before sort");
    for(i=0;i<=4;i++){
    printf("%d",ar[i]);    
    }
    for(i=0;i<=4;i++){
        for(j=i+1;j<=4;j++){
            if(ar[i]>ar[j]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    printf("after sort");
    for(i=0;i<=4;i++){
        printf("%d",ar[i]);
    }
    return 0;
}