#include <stdio.h>
#include <stdlib.h>

float menu();
float pizza();
float pizza_choose();
float appetizers();
float drinks();

int choose;

int main()
{
    float result;
result = menu();


    printf("You selected an option.\n", result);

    return 0;
}

float menu()
{
    printf("Option list\n");
    printf("1. Pizza\n");
    printf("2. Choose Pizza\n");
    printf("3. Appetizers\n");
    printf("4. Drinks\n");
    printf("Choose an option:");
    scanf("%d", &choose);

    if(choose == 1)return pizza();
    else if(choose == 2)return pizza_choose();
    else if(choose == 3)return appetizers();
    else if(choose == 4)return drinks();
    else printf("Invalid choice\n");

}

float pizza()
{
    printf("You chose pizza.\n");
}

float pizza_choose()
{
    printf("You chose to customize your pizza.\n");
}

float appetizers()
{
    printf("You chose appetizers.\n");
}

float drinks()
{
    printf("You chose drinks.\n");
}
