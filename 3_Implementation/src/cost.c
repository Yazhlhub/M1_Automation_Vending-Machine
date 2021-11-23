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
float cost(int selection)
 {
  float price = 0;


  switch(selection)
  {
     case 1:
       price = 1.00;
       break;
     case 2:
       price = 1.30;
       break;
     case 3:
       price = 1.20;
       break;
    case 4:
       price = 1.50;
       break;
   }
   return price;
 }
