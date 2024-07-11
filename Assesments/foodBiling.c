// Food billing system 
#include<stdio.h>
#include<string.h>
main(){
	int choice,que,amount;
	char again='y';
	
	
	//disply the prize and menu list
	printf("1.Pizz\t");
	printf("Price:180rs/Pcs\n");
	printf("2.Burger\t");
	printf("Price:100rs/Pcs\n");
	printf("3.Dosa\t");
	printf("Price:120rs/Pcs\n");
	printf("4.Idli\t");
	printf("Price:50rs/Pcs\n");
	
	
	
	do{
		
		
		printf("\n");
		printf("Enter the choice:");
		scanf("%d",&choice);//enter the choice 
		printf("\n");
		printf("\n");
	if(choice==1){
		printf("You have select Pizz\n");
	}
	else if(choice==2){
		printf("You have select Burger\n");
	}
	else if(choice==3){
		printf("You have select Dosa\n");
	}
	else if(choice==4){
		printf("You have select Idli\n");
	}
	
	
	// enter the Quantity 
	printf("Enter the Quantity:");
	scanf("%d",&que);




	//this if else disply the prize of your order
	
	if(choice==1){
		amount=que*180;
		printf("Total amount:%d\n",amount);
	}
	else if(choice==2){
			amount=que*100;
	printf("Total amount:%d\n",amount);
	}
	else if(choice==3){
		amount=que*120;
	printf("Total amount:%d\n",amount);
	}
	else if(choice==4){
		amount=que*50;
		printf("Total amount:%d\n",amount);
	}
	getchar();
	
	
	
	//you want more order or  not 
	printf("Do you want place more Orders ? y & n: ");
	scanf("%c",&again);
	}while(again!='n');
	printf("\n");
	printf("\n");
	
	
	//end the program
	printf("Thank you Have a nice day :)");
	
}
