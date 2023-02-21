#include<stdio.h>

//Function to calculate GCD
int gcd(int u,int v)
{
    if (v == 0)
        return u;
    else
        return gcd(v, u % v);
}
 
//Function to calculate LCM
int lcm(int u,int v)
{
    return (u*v)/gcd(u, v);
}

//Main function
int main()
{
    int u, v;
 
    //Input two numbers
    printf("Enter first number: ");
    scanf("%d",&u);
    printf("Enter second number: ");
    scanf("%d",&v);
 
    //Calculate LCM
    printf("The LCM of %d and %d is %d.\n", u, v, lcm(u, v));
    return 0;
}