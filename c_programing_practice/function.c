#include <stdio.h>
 float rect(float l, float b){
    float A;
    A= l*b;
    return A;
 }
 int main(){
    float l,b,res;
    printf("Enter the length and breadth of rectangle:\n");
    scanf("%f%f",&l,&b);
    res= rect(l,b);
    printf("The area of rectangle is %f",res);
 }