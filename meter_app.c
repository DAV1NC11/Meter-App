#include <stdio.h>
#include <string.h>
void main()
{
   int custid, conu ,prevunits, currunits;
   float chg, surchg=0, gramt,netamt;
   char connm[25];


   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",&connm);


   printf("Input the previous meter readings : ");
   scanf("%d",&prevunits);

   printf("Input the current meter readings : ");
   scanf("%d",&currunits);
   conu = currunits - prevunits;


   if (conu <200 )
	chg = 1.20;
   else	if (conu>=200 && conu<400)
		chg = 1.50;
	else if (conu>=400 && conu<600)
			chg = 1.80;
		else
			chg = 2.00;

   gramt = conu*chg;
   if (gramt>300)
	surchg = gramt*16/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;



   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",custid);
   printf("Customer Name                       :%s\n",connm);
   printf("unit Consumed                       :%d\n",conu);
   printf("Amount Charges @K sh. %4.2f  per unit :%8.2f\n",chg,gramt);
   printf("Surcharge Amount                     :%8.2f\n",surchg);
   printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);
}
