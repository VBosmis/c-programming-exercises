#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	system("CHCP 1253 > nul");
	float year, a, b, c, d, f, P, date = 3;
	unsigned i;
	
	do{
	
	printf("Πληκτρολόγησε ένα έτος μεταξύ 1900 και 2099 για να υπολογίσουμε πότε\nπέφτει το Πάσχα στο συγκεκριμένο έτος:");
	scanf("%f", &year);
	
	for(i = 0; i < 3; i++)
	{
		printf(". ");
		usleep(850000);
	}

	if( year < 1900 || year > 2099 || year != (int)year)
	{
		if(year != (int)year)
		{
			system("CLS");
			printf("\aΜόνο ακέραιες τιμές, πληκτρολόγησε ξανά...");
			sleep(3);
			usleep(500000);
			system("CLS");
		}
		else
		{
			system("CLS");
			printf("\aΛάθος χρονολογία, πληκτρολόγησε ξανά...");
			sleep(3);
			usleep(500000);
			system("CLS");
		}
	}
	
	}while(year < 1900 || year > 2099 || year != (int)year);
	
	a = (int)year % 19;
	b = (int)year % 4;
	c = (int)year % 7;
	d = ((19 * (int)a) + 16) % 30;
	f = ((2 * (int)b) + (4 * (int)c) + (6 * (int)d)) % 7;
	P = d + f;
	
	date += P;
	system("CLS");
	
	if ( date > 30)
	 {
		date -= 30;
		printf("\nΤο Πάσχα για το έτος %.0f είναι %.0f Μαίου\n", year, date);				
	 }	
	else
		printf("\nΤο Πάσχα για το έτος %.0f είναι %.0f Απριλίου\n", year, date); 
		
	
	system("PAUSE");
	return 0;
}
