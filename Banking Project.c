#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
void main()
{
int pass = 123,nb, z,m,k=1000, a, acc,o,d ,w;
char name;
clrscr();
textcolor(WHITE);
textbackground(BLACK);
gotoxy(30,10);
printf("Welcome to SBI Banking\n");
gotoxy(25,15);
for(int i=1; i<=10;i++){
delay(500);
printf(" * ");
}
clrscr();
textcolor(WHITE);
textbackground(BLACK);
gotoxy(20,10);
printf("Enter your Password: ");
scanf("%d", &a);
textcolor(WHITE);
textbackground(BLACK);
gotoxy(25,15);
if(a == pass)
{ gotoxy (28,18);
printf("Correct Password");
clrscr();
gotoxy(20,10);
printf("Enter your name: ");
gotoxy(23,13);
scanf("%s", &name);
gotoxy(20,15);
printf("Enter your Account Number: ");
gotoxy(25,18);
scanf("%d", &acc);
clrscr();
gotoxy(25,10);
printf("SBI Banking System Menu\n");
gotoxy(25,15);
printf("1. Deposit\n");
gotoxy(25,16);
printf("2. Withdraw\n");
gotoxy(25,17);
printf("3. Bal Enquiry\n");
gotoxy(25,18);
printf("4. Exit\n");
gotoxy(25,19);
printf("Enter your operation to continue: ");
gotoxy(25,22);
scanf("%d", &o);
clrscr();
switch(o)
{
case 1:
{
gotoxy(20,10);
printf("Enter amount to deposit: \n");
scanf("%d",&m);
z = k+m;
gotoxy(25,15);
printf("Current balance: ");
printf("%d",z);
break;
}
case 2: {
gotoxy(20,10);
printf("Enter amount to withdraw: \n");
scanf("%d", &w);
gotoxy(25,15);
if(k ==0 || k<w)
{ printf("Low Balance\n");
}
else{
nb = k-w;
gotoxy(25,15);
printf("Current Balance: ");
printf("%d",nb);
}
break;
}
case 3: {
gotoxy(25,15);
printf("Current Balance: ");
printf("%d", k);
break;
}
case 4:
{ exit(0);
break;
}
default:
{
gotoxy(25,15);
printf("Wrong Choice, try again!");
}

}
}
else{
printf("Wrong Password, Try Again");
}
getch();

}
