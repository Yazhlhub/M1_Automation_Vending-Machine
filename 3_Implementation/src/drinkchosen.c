/**
 * @file main.c
 * @author yazhini
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void drinkchosen(int selection)
{
switch(selection)
{
    case 1:
printf("You have selected Coca-Cola.");            printf("\t\t\t£1.00\n");
      break;
   case 2:
printf("You have selected Sprite.");               printf("\t\t\t£1.30\n");
      break;
   case 3:
printf("You have selected Fanta.");                printf("\t\t\t£1.20\n");
      break;
   case 4:
printf("You have selected Dr. Pepper.");           printf("\t\t\t£1.50\n");
      break;
   case 5:
      break;
   default:
      printf("Invalid input!\n");
      break;
}
return;
}
