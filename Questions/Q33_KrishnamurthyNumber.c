//Write a program that will take input from user and tell whether it is a Krishnamurthy number or not
#include <stdio.h>
#include <stdlib.h>
int fact(int n){
    if (n<2)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int KrishnaMurthy(int num){
    if(num==0){
        return 0;
    }
    int rem=num%10;
    return fact(rem)+KrishnaMurthy(num/10);
}
int main(){
    int num;
    printf("Input the number = ");
    scanf(" %d",&num);
    if(num==KrishnaMurthy(num)&&num!=0){
        printf("Yes, It's a Krishnamurthy number\n");
    }
    else{
        printf("No, It's not a Krishnamurthy number\n");
    }
    return 0;
}