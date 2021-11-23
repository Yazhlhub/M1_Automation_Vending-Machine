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
int menu()
    {
  int selection;


    printf("---------------------- \n");


    printf("MENU: ");
    printf("\n\n");
    printf("1. Coca-Cola");            printf("\t\t\t£1.00\n");
    printf("2. Sprite");               printf("\t\t\t£1.30\n");
    printf("3. Fanta");                printf("\t\t\t£1.20\n");
    printf("4. Dr. Pepper");           printf("\t\t\t£1.50\n");
    printf("5. Quit");
    printf("\n\n");


    printf("Please enter your selection: ");
    scanf("%d",&selection);


    return selection;


    }
