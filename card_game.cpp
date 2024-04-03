#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int card_number, character, flag = 0, i;
	char answer, symbol, figure;
	
	system("CHCP 1253 > NUL");
	
	srand(time(0));	
	
	do
	{
		system("CLS");
		
		card_number = 1 + rand()%13;
		character = rand()%4;
		
		if(character == 2 || character == 3)
			system("COLOR fc"); //White background with red text
		else
			system("COLOR f0"); //Returns color to white background with black text
			
		if(character == 0)
			symbol='\6'; //SPADES
		else if(character == 1)
			symbol='\5'; //CLUBS
		else if(character == 2)
			symbol='\3'; //HEARTS
		else
			symbol='\4'; //DIAMONDS
		
		if(card_number == 1 || (card_number>=11 && card_number<=13))
		{
			if(card_number == 1)	
				figure = 'A';
			else if(card_number == 11)
				figure = 'J';
			else if(card_number == 12)
				figure = 'Q';
			else
				figure = 'K';
		
			printf("\
				 ___________________\n\
				|                   |\n\
				|   %c               |\n\
				|   %c               |\n\
				|                   |\n\
				|                   |\n\
				|                   |\n\
				|         %c         |\n\
				|                   |\n\
				|                   |\n\
				|                   |\n\
				|               %c   |\n\
				|               %c   |\n\
				|___________________|\n\n\n", figure, symbol, figure, symbol, figure);
		}
		else
		{
			if(card_number == 10)
				printf("\
				 ___________________\n\
				|                   |\n\
				|  %d               |\n\
				|   %c               |\n\
				|                   |\n\
				|                   |\n\
				|                   |\n\
				|         %d        |\n\
				|                   |\n\
				|                   |\n\
				|                   |\n\
				|               %c   |\n\
				|               %d  |\n\
				|___________________|\n\n\n", card_number, symbol, card_number, symbol, card_number);
			else
				printf("\
				 ___________________\n\
				|                   |\n\
				|   %d               |\n\
				|   %c               |\n\
				|                   |\n\
				|                   |\n\
				|                   |\n\
				|         %d         |\n\
				|                   |\n\
				|                   |\n\
				|                   |\n\
				|               %c   |\n\
				|               %d   |\n\
				|___________________|\n\n\n", card_number, symbol, card_number, symbol, card_number);
		}
		printf("Συνεχίζετε; Πατήστε '1' για νέο τραπουλόχαρτο, ή '0' για τερματισμό: ");
		
		scanf("%c", &answer);
		getchar();  // για να αδειάζει το buffer
	}while(answer == '1');
		
	system("PAUSE");
	return 0;
}
