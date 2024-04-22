#define p printf
#define s scanf
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<iostream>
int main(){
    system("cls");
int choice;
do
{
    system("cls");
p("\n\n\n\n\tMAIN MENU");
p("\n\t[1] RADIUS");
p("\n\t[2] EMPLOYEE SALARY");
p("\n\t[3] LEAP YEAR");
p("\n\t[4] GENERAL AVERAGE");
p("\n\t[5] GAME");
p("\n\t[6] ABOUT PROGRAMMERS");
p("\n\tNOTE:ENTERING ANY NUMBER\n\tBESIDE 1-6 WILL CAUSE THE PROGRAM TO EXIT");
p("\n\tENTER A NUMBER FROM 1-6: ");
s("%d",&choice);
switch(choice)
{
case 1:
    system("cls");
int radius;
float area;
p("\nYou chose [1] RADIUS");

p("\nThis program gets the area of a given radius");
p("\nEnter the given radius: ");
s("%d",&radius);
area=radius*radius*3.14;
p("\n\nThe Area is :%f",area);
Sleep(2000);
p("\nPress 1 to return to main menu: ");
s("%d",&choice);
break;
case 2:system("cls");
p("\nYou chose [2] EMPLOYEE SALARY");
char fname[25],sname[25],date[15],pos[20];
float rph,nohw,gpay;
p("\nEnter the employee name: ");
s("%s%s",&fname,&sname);
p("\nPosition: ");
s("%s",&pos);
p("\nNumber of Hours Worked: ");
s("%f",&nohw);
p("\nRate per Hour: ");
s("%f",&rph);
gpay=nohw*rph;
p("\n The Grosspay is: %.2f",gpay);
Sleep(2000);
p("\nPress 1 to return to main menu: ");
s("%d",&choice);
break;
case 3:system("cls");
p("\nYou chose [3] LEAP YEAR");
int year;
p("\n Enter a year: ");
s("%d",&year);
if(year%4==0)
{
	p("\nThe year you inputted is a Leap Year");
}
else
{
	p("\nThe year you inputted is not a Leap Year");
}
        Sleep(2000);
p("\nPress 1 to return to main menu: ");
s("%d",&choice);
break;
case 4:system("cls");
p("\nYou chose [4] GENERAL AVERAGE");
int pre,mid,fin;
float gen_ave;
p("\nEnter the desired Prelim grade: ");
s("%d",&pre);
p("\nEnter the desired Midterm grade: ");
s("%d",&mid);
p("\nEnter the desired Final grade: ");
s("%d",&fin);
gen_ave=(pre*.3+mid*.3+fin*.4);
p("\nThe general average is: %.2f",gen_ave);
        Sleep(2000);
p("\nPress 1 to return to main menu: ");
s("%d",&choice);
break;
case 5:system("cls");
p("\nYou chose [5] GAME");
        Sleep(2000);
p("\nPress any number to return to main menu: ");

s("%d",&choice);

break;
case 6:system("cls");
        Sleep(2000);
p("\nPress 1 to return to main menu: ");
s("%d",&choice);

break;

default:
    system("cls");
p("\nINVALID CHOICE. PROGRAM WILL NOW EXIT");

}
}while(choice==1);


return 0;
}

