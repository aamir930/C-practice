#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=4;j++){
            if(i==1||i==3||j==1||j==4)
            printf("*");
            else
            printf(" ");
        }
         printf("\n");
    }
        printf("\n\n");
        for(int i=1;i<=5;i++){
        for(int j=1;j<=4;j++){
            if(i==1||i==3||j==1||j==4)
            printf("*");
            else
            printf(" ");
        }
         printf("\n\n");

    }
            for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1||i==5||j==1||j==5||i==2&&j==2||i==2&&j==4||i==3&&j==3)
            printf("*");
            else
            printf(" ");
        }
         printf("\n");
        return 0;
            }
}