//Project in C language//
 //Maharashtra Banking System//
#include<stdio.h>
#include<conio.h>
int main()
{
//Inizialization //
float draw,dep,transfer;
char name[24];
float balance=1000000;
int account,account1,account2;
int type;
int transaction=1;
printf("\n\t\t\t BANKING SYSTEM\n\n");
printf("\t\t\2 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 ");
printf("\t\t\2\t\t\t\t\t\t\2\n");
printf("\t\t\2\t\t\t\t\t\t\2\n");
printf("\t\t\2 WELCOME TO MAHARASHTRA BANKING SYSTEM\n\n");
printf("\t\t\2\t\t\t\t\t\t\2\n");
printf("\t\t\2\t\t\t\t\t\t\2\n");
printf("\t\t\2 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 ");
printf("\n\n\t\t\2 Enter your name:");
scanf("%s",&name);
printf("\n\t\t\2 Please enter your account number:");
scanf("%d",&type);
while(transaction==1)
{
    int option;
printf("\n\t\t\Choose what you want to do\n");
printf("\t\t1-Balance Enquiry\n");
printf("\t\t2-Deposit\n");
printf("\t\t3-Withdraw\n");
printf("\t\t4-Transfer\n");
printf("\t\t5-Exit\n\t\t");
scanf("%d",&option);
printf("---------------------------------------------------------------------------------\n");
switch(option)//switching the above option//
{
case 1://to see balance enquiry//
printf("\t\t\t-BALANCE ENQUIRY-\n\n");
printf("\t\tYour account balance is %.2f",balance);
break;
case 2://to see deposit //
printf("\n\t\t\t-DEPOSIT AMMOUNT-\n\n");
 printf("\n\t\tHow much money do you want to deposit :");
 scanf("%f",&dep);
 if(dep>0 && dep<=1000000)
 {
 printf("\n\t\tYour %.2fRS is Deposited to ypur account\n\n",dep);
 balance+=dep;
}
else if(dep>1000000)
{
printf("\n\t\tYou can't deposit that much ammount in one time.\n\n");
}
else
{
    printf("\n\t\tInvalid deposit ammount\n");
}
break;
case 3://To withdraw ammount//
printf("\n\t\t\t-WITHDRAW AMMOUNT-\n\n");
printf("\n\t\tHow much money do you want to withdraw:");
scanf("%f",&draw);
if(draw<=balance && draw<=1000000)
{
printf("\n\t\tYou just withdraw %.2f RS \n\n",draw);
balance-=draw;
}
else if(draw>1000000)
{
 printf("\n\t\tYou can't withdraw that much ammount in one time.\n\n");
}
else
{
printf("\n\t\tYou don't have enough money\n\n");
}
break;
case 4://to transfer money//
printf("\n\t\t\t-TRANSFER MONEY-\n\n");
printf("\n\t\tAccount you want to transfer:");
scanf("%d",&account2);
printf("\n\t\tHow much ammount?:");
scanf("%f",&transfer);
if(balance>=transfer)
{
printf("\n\t\tYour %.2f RS successfulluy transfered\n\n",transfer);
balance-=transfer;
} 
else
{
printf("\n\t\tYou do not have sufficient balance\n\n");
}
break;
 case 5://to exit from transaction//
 printf("\n\t\t\t TRANSACTION COMPLETE\n\n");
 printf("\n\t\t\t THANK YOU\n");
default:
printf("\n\t\t Invalid transaction\n");
}
transaction=0;
while(transaction!=1 && transaction!=2)
{
printf("\n\t\tdo you want to do another transaction?\n");
printf("\t\t1.yes 2.No\n\t\t");
scanf("%d",&transaction);
 printf("\n---------------------------------------------------------------------------------\n");
if(transaction!=1 && transaction!=2)
{
printf("\t\tInvalid no.\nChoose between 1 and 2 only\n");
}
}
}
 printf("\n\t\t\t--------------------------");
 printf("\n\t\t\tMAHARASHTRA BANK LIMITED\n");
 printf("\n\t\t\t--------------------------");
 printf("\n\t\t\t\4Your Name:%s\n\n",name);
 printf("\n\t\t\t\4Your Account no.:%d\n\n",type);
 if(dep>=0 && dep<=1000000)
 {
 printf("\t\t\t\4 You have deposited:%.2fRS\n",dep);
}
else
{
printf("\t\t\t\4 You have deposited 0Rs\n");
}
if(draw>0 && draw<=1000000 && draw<=balance)
{
printf("\t\t\t\4 You have withdrawn %.2fRs\n",draw);
}
else
{
printf("\t\t\t\4 You have withdrawn 0Rs\n");
}
if(transfer>0 && transfer<=1000000 && transfer<=balance)
{
printf("\t\t\t\4 You have transfered %.2fRs\n",transfer);
}
else
{
printf("\t\t\t\4 You have transfered 0Rs\n");
}
printf("\t\t\t\4 Your available balance is %.2f",balance);
getch();
return(0); }