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
void drinktotal(int selection,int amount)
    {
      switch(selection)
      {
      case 1:
         printf("\n\n\t\t\tYou have selected %d Coca-Cola\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 2:
         printf("\n\n\t\t\tYou have chosen %d Sprite\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 3:
         printf("\n\n\t\t\tYou have chosen %d Fanta\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 4:
         printf("\n\n\t\t\tYou have chosen %d DR Pepper\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      default:
         printf("Invalid input!\n");
         break;
      }
