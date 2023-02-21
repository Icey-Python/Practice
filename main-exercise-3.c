#include <stdio.h>

int main()
{
    int n;
    //formula n*(n+1)/2

    printf("Triangular Numbers Table\n");
    printf("n\tTriangular Number\n");

    for(n=5; n<=50; n+=5){
        printf("%d\t%d\n", n, n*(n+1)/2);
    }

    return 0;
}