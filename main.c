#include<stdio.h>

int a=10;
int b=5;

int add(){
    int c = a + b;
    printf("The sum of no: %d\n", c);
    return c; 
}

int sub(){
    int c = a - b;
    printf("The sub of no: %d\n", c);
    return c; 
}

int mul(){
    int c = a * b;
    printf("The mul of no: %d\n", c);
    return c; 
    }
void main(){
    add();
    sub();
    mul();
}
