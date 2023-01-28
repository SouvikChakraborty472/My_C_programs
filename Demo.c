#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter the integer:");
    scanf("%d,%d,%d", &num1,&num2,&num3);
    if(num1<num2){
        if(num2<num3)
        {
            printf("%d", num3);
        }
        else(num2>num3);{
            printf("%d", num2);
        }
    }
    else(num1>num3);{
        printf("%d", num1);
    } 
return(0);
}
