**Report**

**INTRODUCTION**

   A vending machine is an automated machine that provides items such as snacks, beverages to consumers
   after cash, a credit card, or other form of payment is inserted into the machine.
   
**SWOT ANALYSIS**

 **Strength:**
 
 Vending machines require no staff, which means no extra wages to pay.
 
 Vending machines are easy to manage. Once installed, a vending machine needs little to no maintenance.
 
 Vending machines can make money.
 
**Weakness:**

complex security system

Maintenance

Unreliable service

**Threat:**

Electricity Dependancy

Destructive behaviour

**Oppurtunity:**

Instant lifestyle

Changing customer taste


**4'W & 1'S**

Who: This technology is useful for people who opt for new technologies

What: Used for common people and to avoid time lapse at stores

When: This is for a life style change

How: This can be accesed and can be seen in open space too or at place of need

**HIGH LEVEL REQUIREMENTS:**

1.Id: HLR_01
  Description: Visual code platform
  category: Software

2.Id: HLR_02
  Description: Window or Linux OS
  Platform: software

Vending Machine must keep track of the inventory
A person should be able to insert cash into the machine & choose an item
The Machine should confirm the inserted cash with the price of the selected item
The machine must display an error in case of insufficient cash or unavailable item
Finally, if all the above steps succeed then the user gets the selected item

  
  **LOW LEVEL REQUIREMENTS:**
  
  1.Id: LLR_01
  Description: correct cash


int main()
{
     welcome_screen();
     getch();
    int q;
    int entered;
    int amount;
    int cancel;
    int select;
    int selection;
    int pence;
    int billreq;
    int change;
    float drinkmax;
    float billmoney;
    float itemprice;
    float coinselected;
    float total;


    selection = menu();
    drinkchosen(selection);




    if(selection >0 && selection <5)
     {
         printf("\n\nPress 1 to continue or 2 to cancel the order\n");
         scanf("%d",&cancel);




         if(cancel==1)


        {
          printf("How  much?(Max 5)\n");
          scanf("%d",&amount);
          if(amount<=5)
          {  itemprice = cost(selection);
             drinkmax=amount*itemprice;
             bill(billmoney);
             x:pence=penceentered();


                      if(pence==5 || pence==10 || pence==20 || pence==50 || pence==100)
                        {
                            while(total<=drinkmax)
                           {
                            total=total+pence;
                            billreq = drinkmax-total;


                            if(total<drinkmax )
                            {
                             printf("\n\nYour outstanding money is %d p", billreq);
                             printf("\n\n");
                             goto x;
                            }


                             else if(total>drinkmax)
                            {
                             change=total-drinkmax;
                             drinktotal(selection,amount);


                                for(q=1;q<=amount;q++)
                                {
                                 printf("\t\t\tDrink #%d is being dispensed\n",q);
                                 wait(5);
                                }
                             printf("\n\t\t\tYour change is %d p\n\n",change);
                             printf("\n\t\t    ***Thank you and have a nice day!!***");
                             break;
                            }
                            else
                            {
                            drinktotal(selection,amount);
                             for(q=1;q<=amount;q++)
                                {
                                 printf("\t\t\tDrink #%d is being dispensed\n",q);
                                 wait(5);
                                }
                            printf("\n\t\t    ***Thank you and have a nice day!!***");
                             break;
                            }
                           }
                        }
                        else
                        {
                            printf("\nMoney not acceptable!Please Try again!\n\n");
                            goto x;
                        }
                        getch();






          }


        else{
                printf("Maximum quantity is 5. Please try again\n");
                main();
            }
      }
      else


        {
            printf("Your order has been cancelled\n\n");
            main();
        }
     }
   else
   {
       printf("Your order has been cancelled\n\n");
       main();
   }


}
