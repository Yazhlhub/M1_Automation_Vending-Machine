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
int penceentered()
   {
        int pence;
        printf("Enter your money: \n");
        printf("(5p 10p 20p 50p 100p)\n");
        scanf("%d",&pence);


       return pence;
   }
