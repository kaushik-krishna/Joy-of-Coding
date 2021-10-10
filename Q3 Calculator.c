#include<stdio.h>
void main(){
    int a,b,res;
    char op;
    printf("Enter the operator: ");
    scanf("%c",&op);
    printf("Enter the operands: ");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case '+': res=a+b;
        printf("%d %c %d = %d",a,op,b,res);
        break;
        case '-': res=a-b;
        printf("%d %c %d = %d",a,op,b,res);
        break;
        case '*': res=a*b;
        printf("%d %c %d = %d",a,op,b,res);
        break;
        case '/': 
        if(b!=0)
        {
            res=a/b;
            printf("%d %c %d = %d",a,op,b,res);
            break;
        }
        else{
            printf("division by zero not possible");
            break;
        }
        case '%':
        if(b!=0)
        {
            res=a%b;
            printf("%d %c %d = %d",a,op,b,res);
            break;
        }
        else{
            printf("division by zero not possible");
            break;
        }
        default:printf("Invalid operator");
    }
    
}