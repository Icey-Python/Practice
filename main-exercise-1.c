#include <stdio.h>

int main()
{
    char day[10];
    char weather[10];
    
    printf("Enter the day: ");
    scanf("%s", day);
    
    printf("Enter the weather: ");
    scanf("%s", weather);
    
    if (strcmp(day, "sunday") == 0 && strcmp(weather, "sunny") == 0)
    {
        printf("Game On!\n");
    }
    else
    {
        printf("Game Off\n");
    }
    printf("%s",day);
    return 0;
}