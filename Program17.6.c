#include <stdio.h>
 
 
 int main()
 {
     
     int i,j;
     printf("Enter the no. of rowss and cols:");
     scanf("%d%d", &i,&j);
     
     
     for(int x=i;x>=1;x--){
         for(int y=1;y<=j;y++){
             printf("%d ",x);
         }
         printf("\n");
     }
     return 0;
 }