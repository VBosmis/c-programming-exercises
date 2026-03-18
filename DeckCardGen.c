#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	system("CHCP 1253 > nul");
	int die1,die2,loop;
	char symbol[]="\3\4\5\6";
	char number[][3]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	
	srand(time(NULL));
	
	do{
		system("cls");
		die1 = rand()%4;
		die2 = rand()%13;
		if (die1==0 || die1==1 )
				system("color fc");
		else
			system("color f0");
	
		printf("\t\t _______________________ \n");
		printf("\t\t|                       |\n");
		printf("\t\t|                       |\n");
		printf("\t\t|    %-2s                 |\n", number[die2]);
		printf("\t\t|    %c                  |\n", symbol[die1]);
		printf("\t\t|                       |\n");
		printf("\t\t|                       |\n");
		printf("\t\t|                       |\n");
		printf("\t\t|                       |\n");
		printf("\t\t|           %-2s          |\n", number[die2]);
		printf("\t\t|                       |\n");
		printf("\t\t|                       |\n");
		printf("\t\t|                       |\n");
		printf("\t\t|                       |\n");
		printf("\t\t|                  %c    |\n", symbol[die1]);
		printf("\t\t|                  %-2s   |\n", number[die2]);
		printf("\t\t|                       |\n");
		printf("\t\t|_______________________|\n");
		
		do{	
			printf("\n\nΓια να τραβήξεις νέα κάρτα πάτησε το '1'\nΓια να κλείσεις το πρόγραμμα πάτησε το '0'\n");
			scanf("%d", &loop);
			if (loop !=1 && loop !=0){
				printf("\a");
				system("cls");
				printf("\t\t _______________________ \n");
				printf("\t\t|                       |\n");
				printf("\t\t|                       |\n");
				printf("\t\t|    %-2s                 |\n", number[die2]);
				printf("\t\t|    %c                  |\n", symbol[die1]);
				printf("\t\t|                       |\n");
				printf("\t\t|                       |\n");
				printf("\t\t|                       |\n");
				printf("\t\t|                       |\n");
				printf("\t\t|           %-2s          |\n", number[die2]);
				printf("\t\t|                       |\n");
				printf("\t\t|                       |\n");
				printf("\t\t|                       |\n");
				printf("\t\t|                       |\n");
				printf("\t\t|                  %c    |\n", symbol[die1]);
				printf("\t\t|                  %-2s   |\n", number[die2]);
				printf("\t\t|                       |\n");
				printf("\t\t|_______________________|\n");
			}
		}
		while(loop != 1 && loop !=0);
	}
	while (loop == 1);
	return 0;
}
