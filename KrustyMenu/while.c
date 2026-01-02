#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){

    char krabby[] = "Krabby Patty";
    char kelp[] = "Kelp Shake";
    char bigkrab[] = "Big Patty";
    bool isHungry = true;
    int hungryInput;
    int choice;
    int total = 0;
    int exitOut;
    float qty;

    printf("Squidward: \n");
    printf("Welcome to the Krusty Krab\n");
    printf("Do you want anything? (0 = no, 1 = yes) ");
    scanf(" %d", &hungryInput);

    isHungry = hungryInput == 1;

    if(isHungry){
        printf("Here's the menu then\n");
        while(isHungry){
            printf("Menu:\n");
            printf("1. %s $5\n", krabby);
            printf("2. %s $2\n", kelp);
            printf("3. %s $8\n", bigkrab);
            scanf("%d", &choice);

            switch(choice){
                case 1:
                    printf("How many would you like? \n");
                    scanf("%f", &qty);
                    if(qty < 1){
                        printf("Now! How will I do that!?\n");
                        continue;
                    }
                    printf("Here's your food\n");
                    total += 5 * qty;
                    break;
                
                case 2:
                    printf("How many would you like? \n");
                    scanf("%f", &qty);
                    if(qty < 1){
                        printf("That Is just plain impossible!\n");
                        continue;
                    }
                    printf("Here it is\n");
                    total += 2 * qty;
                    break;
                
                case 3:
                    printf("How many would you like? \n");
                    scanf("%f", &qty);
                    if(qty < 1){
                        printf("HOW!?!?!\n");
                        continue;
                    }
                    printf("Here it comes\n");
                    total += 8 * qty;
                    break;

                default:
                    printf("That is not in the menu, LOOK AGAIN!\n");
                    continue;
            }
            printf("Anything else? (0 = no, 1 = yes) ");
            scanf(" %d", &hungryInput);
            isHungry = hungryInput == 1;
        }     
    }
    else{
        printf("Go away then!\n");
        printf("Enter 0 to exit: ");
        scanf("%d", &exitOut);
        return 0;
    }

    printf("That'll be $%d!", total);
    printf("\nHave an okay day!\n");

    printf("Enter 0 to exit: ");
    scanf("%d", &exitOut);
    return 0;
}