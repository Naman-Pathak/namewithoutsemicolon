#include<stdio.h>
int main (){
    int a,b;
    float c,d;
    printf("Enter your salary per month in inr:");
    scanf("%d",&a);
    b=12*a;
    if(b<=400000){
        
        printf("The income tax deducted is 0 rs.\n So net income per anum will be:%d",b);
    }
    else if(b>400000 && b<=800000){
        c=5*b/100;
        d=b-c;
        printf("The income tax deducted per year is:%.2f\nSo net income per anum will be:%.2f",c,d);
    }
    else if(b>800000 && b<=1200000){
        c=10*b/100;
        d=b-c;
        printf("The income tax deducted per year is:%.2f\nSo net income per anum will be:%.2f",c,d);
    }
    else if(b>1200000 && b<=1600000){
        c=15*b/100;
        d=b-c;
        printf("The income tax deducted per year is:%.2f\nSo net income per anum will be:%.2f",c,d);
    }
    else if(b>1600000 && b<=2000000){
        c=20*b/100;
        d=b-c;
        printf("The income tax deducted per year is:%.2f\nSo net income per anum will be:%.2f",c,d);
    }
    elseif(b>2000000 && b<=2400000){
        c=25*b/100;
        d=b-c;
        printf("The income tax deducted per year is:%.2f\nSo net income per anum will be:%.2f",c,d);
    }
    else{
        c=30*b/100;
        d=b-c;
        printf("The income tax deducted per year is:%.2f\nSo net income per anum will be:%.2f",c,d);
    }
    return 0;
}