#include <stdio.h>
int main()
{
    char name[30], sec;
    int roll;
    float GPA;
    printf("enter your name:");
    gets(name);
    printf("enter your roll no :");
    scanf("%d", &roll);
    scanf("%d", &sec);
    printf("enter your section:");
    sec = getchar();
    printf("enter your GPA:");
    scanf("%f", &GPA);
    printf("Name:");
    puts(name);
    printf("Roll no: %d\n", roll);
    printf("section:");
    putchar(sec);
    printf("\nGPA:%.2f", GPA);
    return 0;
}