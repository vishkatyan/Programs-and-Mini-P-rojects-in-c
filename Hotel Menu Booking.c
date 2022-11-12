#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int a, order,q,x,y,z, lunch,dinner;
char fed;
textcolor(WHITE);
textbackground(BROWN);
gotoxy(15,10);
printf("Welcome to Taj Hotel\n");
delay(2000);
clrscr();
gotoxy(35,10);
textcolor(WHITE);
textbackground(BROWN);
printf("Taj Hotel Menu\n");
gotoxy(25,15);
printf("1. Breakfast\n");
gotoxy(25,16);
printf("2. Lunch\n");
gotoxy(25,17);
printf("3. Dinner\n");
gotoxy(25,20);
printf("Enter your operation: ");
scanf("%d",&a);
clrscr();
switch(a)
{
    case 1:{
       gotoxy(25,10);
       printf("Taj Hotel Breakfast Menu\n");
       gotoxy(25,15);
       printf("1. Tea: 100 \n");
       gotoxy(25,16);
       printf("2. Coffee: 150 \n");
       gotoxy(25,17);
       printf("3. Green Tea: 170 \n");
       gotoxy(25,20);
       printf("Enter your order: ");
       scanf("%d", &order);
	 clrscr();
  switch(order)
   {
       case 1: {
	   gotoxy(20,10);
	   printf("Enter your quantity: \n");
	   scanf("%d",&q);
	   gotoxy(25,15);
	   printf("Your total amount is: \n");
	   gotoxy(28,18);
	   x= q*100;
	   printf("%d",x);
	   delay(1000);
	   break;
	   }
       case 2:{
	   gotoxy(20,10);
	   printf("Enter your quantity: \n");
	   scanf("%d",&q);
	   gotoxy(25,15);
	   printf("Your total amount is: \n");
	   gotoxy(28,18);
	   y = q*150;
	   printf("%d",y);
	   delay(1000);
	   break;
	   }

       case 3:{
	   gotoxy(25,10);
	   printf("Enter your quantity: \n");
	   scanf("%d",&q);
	   gotoxy(30,15);
	   printf("Your total amount is: \n");
	   gotoxy(28,18);
	   z= q*170;
	   delay(1000);
	   printf("%d",z);
	   break;
	     }
       default: {
	   gotoxy(30,15);
	   printf("Wrong Choice\n");
	   delay(1000);

	      }
      }
   }

    case 2:{
       gotoxy(25,10);
       printf("Taj Hotel Lunch Menu\n");
       gotoxy(25,15);
       printf("1. North Indian Thali: 200 \n");
       gotoxy(25,16);
       printf("2. South Indian Thali: 250 \n");
       gotoxy(25,20);
       printf("Enter your order: ");
       scanf("%d", &lunch);
	 clrscr();
  switch(lunch)
   {
       case 1: {
	   gotoxy(20,10);
	   printf("Enter your quantity: \n");
	   scanf("%d",&q);
	   gotoxy(25,15);
	   printf("Your total amount is: \n");
	   gotoxy(28,18);
	   x= q*200;
	   printf("%d",x);
	   delay(1000);
	   break;
	   }
       case 2:{
	   gotoxy(20,10);
	   printf("Enter your quantity: \n");
	   scanf("%d",&q);
	   gotoxy(25,15);
	   printf("Your total amount is: \n");
	   gotoxy(28,18);
	   y = q*250;
	   printf("%d",y);
	   delay(1000);
	   break;
       }
       default: {
	   gotoxy(30,15);
	   printf("Wrong Choice\n");
	   delay(1000);
	      }
      }
   }
   //case 3 starts
   case 3:{

       gotoxy(25,10);
       printf("Taj Hotel Dinner Menu\n");
       gotoxy(25,15);
       printf("1. Rajma Chawal: 100 \n");
       gotoxy(25,16);
       printf("2. Paneer: 150 \n");
       gotoxy(25,20);
       printf("Enter your order: ");
       scanf("%d", &dinner);
	 clrscr();
  switch(dinner)
   {
       case 1: {
	   gotoxy(20,10);
	   printf("Enter your quantity: \n");
	   scanf("%d",&q);
	   gotoxy(25,15);
	   printf("Your total amount is: \n");
	   gotoxy(28,18);
	   x= q*100;
	   printf("%d",x);
	   delay(1000);
	   break;
	   }
       case 2:{
	   gotoxy(20,10);
	   printf("Enter your quantity: \n");
	   scanf("%d",&q);
	   gotoxy(25,15);
	   printf("Your total amount is: \n");
	   gotoxy(28,18);
	   y = q*150;
	   printf("%d",y);
	   delay(1000);
	   break;
	   }
       default: {
	   gotoxy(30,15);
	   printf("Wrong Choice\n");
	   delay(1000);
	      }
      }
   }


   }

clrscr();
gotoxy(35,20);
printf("Thankyou to choose Taj Hotel");
gotoxy(30,23);
printf("Any Feedback for us?");
scanf("%c", &fed);


getch();

}
