// Food billing system 
#include<stdio.h>
#include<string.h>
main(){
	int choice,que,amount;
	char again='y';
	printf("1.Pizz\t");
	printf("Price:180rs/Pcs\n");
	printf("2.Burger\t");
	printf("Price:100rs/Pcs\n");
	printf("3.Dosa\t");
	printf("Price:120rs/Pcs\n");
	printf("4.Idli\t");
	printf("Price:50rs/Pcs\n");
	do{
		
		
		
		printf("Enter the choice:");
		scanf("%d",&choice);
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
	printf("Enter the Quantity:");
	scanf("%d",&que);
	
	
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
	printf("Do you want place more Orders ? y & n: ");
	scanf("%c",&again);
	}while(again!='n');
	printf("\n");
	printf("\n");
	printf("Thank you Have a nice day :)");
	
}
