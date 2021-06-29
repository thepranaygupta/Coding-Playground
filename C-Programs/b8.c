//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int idno;
    char name[100];
    double unit, charge=0.0, amt=0.0, samt=0.0, netamt=0.0;
    printf("Enter the Consumer ID no, Consumer name and Unit consumed: ");
    // scanf("%d %[^\n]%*c %lf", &idno, &name, &unit);
    scanf("%d", &idno);
    fflush(stdin);
    gets(name);
    scanf("%lf", &unit);
    if(unit<=199)
      charge=1.2;
    else if(unit>=200 && unit<400)
      charge=1.5;
    else if(unit>=400 && unit<600)
      charge=1.8;
    else
      charge=2.0;
    
    amt=unit*charge;
    if(amt>400.0)
      samt=0.15*amt;
    netamt=amt+samt;
    
    printf("Customer IDNO : %d", idno);
    printf("\nCustomer Name : %s", name);
    printf("\nUnit Consumed : %.0lf", unit);
    if(netamt>=100) {
      printf("\nAmount Charges @Rs.%.2lf per unit : %.2lf", charge, amt);
      printf("\nSurchage Amount : %.2lf", samt);
      printf("\nNetAmount Paid By the Customer : %.2lf", netamt);
    }
    else
      printf("\nThe minimum bill is not of Rs. 100/-");
      
    return 0;
}