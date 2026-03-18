#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void showUserRights(float x)
{
	if (x == 1)
	printf("Τα δικαιώματα του χρήστη είναι : read - - \n");
else if (x == 2)
	printf("Τα δικαιώματα του χρήστη είναι : - write -\n");
else if (x == 3)
	printf("Τα δικαιώματα του χρήστη είναι : read write - \n");
else if (x == 4)
	printf("Τα δικαιώματα του χρήστη είναι : - - execute \n");	
else if (x == 5)
	printf("Τα δικαιώματα του χρήστη είναι : read - execute \n");
else if (x == 6)
	printf("Τα δικαιώματα του χρήστη είναι : - write execute \n");
else if (x == 7)
	printf("Τα δικαιώματα του χρήστη είναι : read write execute \n");
else
	printf("Τα δικαιώματα του χρήστη είναι : - - -\n");

return;
}

int main()
{
system("CHCP 1253 > nul");

int user_rights = 1, counter;
float command, exit;




do{

do{
	showUserRights(user_rights);
	printf("\nΘες να άλλάξεις τα δικαιώματα του χρήστη;(Πληκτρολόγησε τον αριθμό 1 ή 2 για την εντολή που θες)\n1.Ναι\n2.Όχι\n");
	scanf("%f", &exit);
	if(exit < 1 || exit > 2 || exit != (int)exit)
	{
		if(exit != (int)exit)
		{
			printf("\aΜόνο ακέραιοι αριθμοί, πληκτρολόγησε ξανά... 4");
			sleep(1);
			printf("\b \b");
			printf("3");
			sleep(1);
			printf("\b \b");
			printf("2");
			sleep(1);
			printf("\b \b");
			printf("1");
			sleep(1);
			system("CLS");
		}
		else
		{
			printf("\aΛάθος αριθμός, πληκτρολόγησε ξανά... 4");
			sleep(1);
			printf("\b \b");
			printf("3");
			sleep(1);
			printf("\b \b");
			printf("2");
			sleep(1);
			printf("\b \b");
			printf("1");
			sleep(1);
			system("CLS");
		}
	}
}while(exit < 1 || exit > 2 || exit != (int)exit);

if(exit == 1)
{
	counter = 1;
	
	do{
		do{
			system("CLS");
			showUserRights(user_rights);
			printf("\nΤι αλλαγές θέλεις να κάνεις στα δικαιώματα του χρήστη;\n");
			printf("(Πληκτρολόγησε έναν αριθμό από 0 έως 6 για την εντολή που θες)\n");
			printf("\n1.Πρόσθεση δικαιώματος Read\n2.Πρόσθεση δικαιώματος Write\n3.Πρόσθεση δικαιωμάτος Execute\n4.Αφαίρεση δικαιώματος Read");
			printf("\n5.Αφαίρεση δικαιώματος Write\n6.Αφαίρεση δικαιώματος Execute\n0.Έξοδος\n");
			scanf("%f", &command);
			if(command < 0 || command > 6 || command != (int)command)
			{
					if (command != (int)command)
					{
						printf("\a\nΜόνο ακέραιοι αριθμοί, πληκτρολόγησε ξανά... 4");
						sleep(1);
						printf("\b \b");
						printf("3");
						sleep(1);
						printf("\b \b");
						printf("2");
						sleep(1);
						printf("\b \b");
						printf("1");
						sleep(1);
					}
					else 
					{
						printf("\a\nΛάθος αριθμός, πληκτρολόγησε ξανά... 4");
						sleep(1);
						printf("\b \b");
						printf("3");
						sleep(1);
						printf("\b \b");
						printf("2");
						sleep(1);
						printf("\b \b");
						printf("1");
						sleep(1);
					}
			}
		}while( command < 0 || command > 6 || command != (int)command);
		
		if (command == 1)
			user_rights = user_rights | 1;
		else if (command == 2)
			user_rights = user_rights | 2;
		else if (command == 3)
			user_rights = user_rights | 4;
		else if (command == 4)
			user_rights = user_rights & 6;	
		else if (command == 5)
			user_rights = user_rights & 5; 
		else if (command == 6)
			user_rights = user_rights & 3;
		else
		{
			system("CLS");
			if (counter == 1)
				printf("Καμία αλλαγή\n");
			else
				printf("Οι αλλαγές αποθηκεύτηκαν\n");
		}
		printf("\n");
		counter++;
	}while(command != 0);
}

}while(exit == 1);

system("PAUSE");
return 0;
}
