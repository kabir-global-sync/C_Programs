#include <stdio.h>
int main(){
    int num1=12,num2=13,sum,carry;

    while(num2!=0){
        sum = num1^num2;
        carry = (num1 & num2)<<1;
        num1 = sum;
        num2=carry;
    }
    printf("%d",sum);
    return 0;
}