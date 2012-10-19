#include <stdio.h>
int main(void)
{
    int choice, i;
    double price;

    for(i = 1; i <= 5; i++){
        printf("[1] apples\n");
        printf("[2] pears\n");
        printf("[3] oranges\n");
        printf("[4] grapes\n");
        printf("[0] Exit\n");
        scanf("%d", &choice);
        if(choice == 0)
            break;
        else{
            /*---------*/
            switch (choice)
            {
            case 1:
                price = 3;
                break;
            case 2:
                price = 2.5;
                break;
            case 3:
                price = 4.1;
                break;
            case 4:
                price = 10.2;
                break;
            }
      	    printf("price = %0.1f\n", price);
        }
    }
}