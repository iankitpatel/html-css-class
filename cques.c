// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int tk,opt,tt,pt,amt=0,rem=0,remn=0;
    float bill;
    char ch;
    
    a:
    printf("1. Standard Ticket - ₹150\n");
    printf("2. Premium Ticket - ₹250\n");
    printf("3. VIP Ticket - ₹500\n");
    printf("4. Exit\n");
    
    printf("Enter your cholice: ");
    scanf("%d",&opt);
    
    if(opt==1){
        printf("how many tickets you want? ");
        scanf("%d",&tt);
        pt= tt*150;
        printf("bill= %d\n",pt); 
        
    }
     else if(opt==2){
        printf("how many premium tickets you want?");
        scanf("%d",&tt);
        pt= tt*250;
        printf("bill= %d\n",pt); 
    }
    else if(opt==3){
         // total tickets
        printf("how many VIP tickets you want? ");
        scanf("%d",&tt);
        pt= tt*500;
        printf("bill= %d\n",pt); 
    }
    else if(opt==4){
         // total tickets
        printf("Thank you for using Movie Ticket Booking System!");
        return 0;
    }
    else ("please enter the valid number..");
    
    printf("Enter the amount: ");
    scanf("%d",&amt);
    
    if (amt==bill){
        printf("Your Bill is Cleared..\n");
    }
    else if (amt>bill){
       
        rem =amt-bill;
     
        printf("Your Bill is %d here is your change rs. %d /-",bill,rem);
    }
    else if (amt<bill){
        remn= bill-amt;
        printf("Your Bill is %f please pay the remaining amount [rs. %d /- ]",bill,rem);
    }
    
    printf("Do you want to book more tickets? ");
    scanf(" %c",&ch);
    
    if(ch=='y' || ch=='Y'){
        printf("Okay here you go..");
        goto a;
    }
    else if(ch=='n' || ch=='N'){
        printf("Thank you for using Movie Ticket Booking System!");
    }
    else printf("please enter the valid input\n ");

    return 0;
}