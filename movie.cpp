#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    printf("\n_____________BOOKMYSHOW____________ ");
    
    while(1)
    {   int choice;
        printf("\n\n\nPRESS 1 TO GET THE AVAILABILITY OF TICKETS");
        printf("\nPRESS 2 TO BOOK YOUR TICKETS");
        printf("\nPRESS 3 TO CANCEL YOUR BOOKINGS AND GET REFUND");
        printf("\nPRESS 4 TO ADVERTISE YOUR FILM HERE");
        printf("\nEnter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
{ case 1 : {
      int n=20;
      if(n!=0)
 {printf("%d tickets are available",n); 
}else
 {printf("Tickets are not available");}

     break; }
 case 2 : {
 	FILE* mt;
 	int x,pay;
 	char name[20];
	char phone[14];
	char moviename[30];
 printf("\nEnter your name : ");
 scanf("%s",name);
 printf("\nEnter your phone number : ");
 scanf("%s",phone);
 printf("\nEnter the name of movie you want to watch: ");
 scanf("%s",moviename);
 printf("\nHow many tickets do you want to book?");
 scanf("%d",&x);
 pay=100*x;
 printf("Total amount : Rs%d",pay);
 mt = fopen("tickets.txt","w");
 fprintf(mt,"%s %s %s %d %d",name,phone,moviename,x,pay);
 fprintf(mt,"\n");
 printf("\nSuccesfully requested booking");
 printf("\nYour password is 5431");
 fclose(mt);
 
 break;}


  
 case 3 : {


  break; }

 case 4 : {


  break; }
}
}
getch();
return 0;
}




         

  
