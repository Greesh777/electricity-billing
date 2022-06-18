#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
static int i=0;
struct customer{
    int meterno;
    char name[50];
    char surname[50];
    char phno[15];
    char password[30];
    int amount;
    int amount_check;
}c[50];

void greesh()
{
    printf("\n\t\t============================================");
    printf("\n\t\t=====       ELECTRIC BILL SYSTEM       =====");
    printf("\n\t\t=====         C MINI PROJECT           =====");
    printf("\n\t\t============================================");
    printf("\n\n");
    getc;

}
void greesh_2()
{
    printf("\n\t\t===========================================");
    printf("\n\t\t=====           WELCOME               =====");
    printf("\n\t\t=====              TO                 =====");
    printf("\n\t\t=====     ELECTRIC BILL SYSTEM        =====");
    printf("\n\t\t===========================================");
    printf("\n\n");
    getc;

}
void check_required()
{
  int noo=0;
  for(noo=0;noo<50;noo++)
  {
    c[noo].amount_check=0;
  }
  getc;
}
void check_details()
{
  system ("clrscr");
  greesh();
  greesh_2();
  int choice;
  int var;
  int hi=0,ji=0;
  int hii=0;
  char passwerd[30];
  printf("\n\t\t Enter your meter number : ");
  scanf("%d",&var);
  for(hi=0,ji=0;hi<i || ji<=i;hi++,ji++)
  {
      if(var==c[hi].meterno)
      {
          do
          {
              printf("\n\t\t Enter your password: ");
              scanf("%s",passwerd);
              if(strcmp(c[hi].password,passwerd)==0)
              {
                  if(c[hi].amount_check==0)
                  {
                      printf("\n\t\tYour amount is still not uploaded");
                  }
                  else
                  {
                      printf("\n\t\tYour amount is %d",c[hi].amount);
                  }
                  hii=0;
              }
              else
              {
                  printf("\n\t\tYou have enterd the password incorrectly!!!");
                  printf("\n\t\t Please reenter the password correctly.....");
                  hii++;
              }
          }
          while(hii!=0 && hii<=3);
          break;

      }
      if(ji==i)
      {
         printf("\n\t\t Sorry the meter number doesnot exist!!!");
         break;
      }

  }
  printf("\n\t\tThank you ");
  fflush(stdin);
  getchar();



}



void unit()
{
    system("clrscr");
    greesh();
    greesh_2();
    int i ;
    printf("\t       ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n");


    printf("\n\tUpto 20 Units .............................. =Rs.3/Unit      \n\n");

    printf("\t21 To 30 Units .............................. =Rs.7/Unit     \n\n");

    printf("\t31 To 50 Units .............................. =Rs.8.5/Unit   \n\n");

    printf("\t51 To 150 Units ..............................=Rs.10/Unit    \n\n");

    printf("\t151 To 250 Units .............................. =Rs.11/Unit  \n\n");

    printf("\t251 To 400 Units .............................. =Rs.12/Unit  \n\n");

    printf("\t400+ Units ................................. =Rs.13/Unit     \n\n");

fflush(stdin);
getchar();
}

void bill()
{
    system("clrscr");
    greesh();
    greesh_2();
    int units ;
    float total_bill;
     printf("\nPlease Enter the Total Units Consumed : \n\n");

    //here we are using scanf(""); function to get input from end user
    scanf("%d", & units);
    //after getting input from user, we will check the conditions to calculate actual bill charges
    if (units <= 20)

    total_bill = units * 3;

    else if (units <= 30)

    total_bill = units * 7;

    else if (units <= 50)

    total_bill = units * 8.5;

    else if (units <= 150)

    total_bill = units * 10;

    else if (units <= 250)

    total_bill = units * 11;

    else if (units <= 400)

    total_bill = units * 12;

    else total_bill = units * 13;

    //and finally, we will show result with bill charges
    printf("\n\nYour Total Bill Is Rs.%f", total_bill);
fflush(stdin);
getchar();
}
void upload()
{
  system("clrscr");
  greesh();
  greesh_2();
  int choice;
  int var;
  int hi=0,ji=0;
  char passwerd[30];
  printf("\n\t\t Enter the meter number: ");
  scanf("%d",&var);
  for(hi=0,ji=0;hi<i || ji<=i;hi++,ji++)
  {
      if(var==c[hi].meterno)
      {
          bill();
          printf("\nEnter the amount : ");
          scanf("%d",&c[hi].amount);
           c[hi].amount_check++;
           break;
      }
      if(ji==i)
      {
         printf("\n\t\t Sorry the meter number does not exist!!!");
         break;
      }

  }
  printf("\n\t\tThank you");
  fflush(stdin);
  getchar();
}

void admin_login()
{
    system("clrscr");
    greesh();
    int choice_admin=0;
    char admin_password[]="grp14";
    char enter_password[30];
    printf("\n\t\tEnter the password: ");
    scanf("%s",enter_password);
      if(strcmp(admin_password,enter_password)==0)
      {

      do{
          greesh();
          greesh_2();
        printf("\n\t\t 1. Check the prices");
        printf("\n\t\t 2. calculate the bill");
        printf("\n\t\t 3. Upload the price for the  customer ");
        printf("\n\t\t 0. Exit");

        printf("\n\t\t Please enter your choice : ");
        scanf("%d", &choice_admin);

        switch(choice_admin)
        {
        case 1: unit();break;
        case 2: bill();break;
        case 3: upload();break;
        default: printf("\n Please wait,you are being directed to home page");
        sleep(5);
        }
      }while(choice_admin!=0);
      }
      else
      {
          printf("\n\t\t Please renter the password correctly");
      }
fflush(stdin);
getchar();


}

void customer_end()
{
    system("clrscr");
    greesh();
    greesh_2();
    static int mtr_no=95028;
    static int x=0;
    printf("\n\t\tYour meter number is %d",mtr_no);
    printf("\n\n");
    printf("\n\t\t Enter the meter number alloted to you: ");
    scanf("%d",&c[x].meterno);
    printf("\n\t\tEnter your name: ");
    scanf("%s",c[x].name);
    printf("\n\t\tEnter your surname: ");
    scanf("%s",c[x].surname);
    printf("\n\t\tEnter your phone number: ");
    scanf("%s",c[x].phno);
    printf("\n\t\tEnter your password: ");
    scanf("%s",c[x].password);
    i++;
    x++;
    mtr_no++;
    fflush(stdin);
    getchar();

}

void customer_login()
{
    system("clrscr");
    greesh();
    greesh_2();
    int choice_customer;
    do
    {
        system("clrscr");
        greesh();
        greesh_2();
        printf("\n\t\t 1.Register ");
        printf("\n\t\t 2.Check your bills");
        printf("\n\t\t 3.current unit price");
        printf("\n\t\t 0.Exit");
        printf("\n\t\t Please enter your choice:");
        scanf("%d",&choice_customer);

        switch(choice_customer)
        {
            case 1: customer_end();break;
            case 2: check_details();break;
            case 3: unit();break;
            default: printf("\n Please wait you are being directed to home page");
        }
        sleep(5);
    }
    while(choice_customer!=0);
    fflush(stdin);
    getchar();
}



int main()
{
    system("clrscr");
    greesh();
    greesh_2();
int i;
int choice;

do
{


    system("clrscr");
    greesh();
    greesh_2();
        printf("\n-------------[welcome to main menu]-------------");
        printf("\n  1.Customer login                              ");
        printf("\n  2.Admin login                                 ");
        printf("\n------------------------------------------------\n");


printf("\n\t\t Please enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1: customer_login();break;
case 2: admin_login();break;
default: printf("\n Thank you ");
sleep(5);
}
}while(choice!=0);

fflush(stdin);
getchar();
}