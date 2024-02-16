/**This is an Employee Management System in C,
It has the following functionalities:
1.) Add record (upto 100)
2.) Find Record 
3.) Display all records 
4.) Edit record 
5.) Delete record
6.) Employee Statisticd 
It is a menu driven application **/


#include<stdio.h>
#include<conio.h>
#include<array.h>

struct employees{
    char no[18];
    char name[50];
    char dept[10];
    float sal;
}emp[100];

void main(){

    int choice;
    do
    {
        for(int i=0; i++; i<10)
        {
            emp[i].no={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        }
    
        printf("Welcome to the employee management system.\n");
        printf("Please enter the no next to the \ntask to be performed\n\n");
        printf("1.) Add Record\n");
        printf("2.) Find Record\n");
        printf("3.) Display all Record\n");
        printf("4.) Edit Record\n");
        printf("5.) Delete Record\n");
        printf("6.) Employee Statistics\n");
        printf("0.) exit\n");
        printf("task : ");
    }while(choice!=0);
}
