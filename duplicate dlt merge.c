#include <stdio.h>
int main()
{
    int m,k,n,n3;           
    int num1[50], num2[50], c[100];
    printf("Enter the size of first array: ");
    scanf("%d",&m);
    printf("Enter the array elements: ");
    for(int i = 0; i < m; i++)      
       scanf("%d", &num1[i]);
    printf("Enter the size of second array: ");
        scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)      
       scanf("%d", &num2[i]);
    n3 = m + n;
    for(int i = 0; i < m; i++)
       c[i] = num1[i];
    for(int i = 0; i < n; i++)     
        c[i + m] = num2[i];
        
    printf("merged array: ");
    for(int i = 0; i < n3; i++)
        printf("%d ", c[i]);
        for(int i=0;i<n3;i++){
            for(int j=i+1;j<n3;j++){
                if(c[i]==c[j]){
                    for(k=j;k<n3-1;k++){
                     c[k]=c[k+1];   
                    }
                    n3--;
                    j--;
                }
            }
        }
    printf("array after delete of duplicate");
     for(int i = 0; i < n3; i++)
        printf("%d ", c[i]);
    return 0;   
}