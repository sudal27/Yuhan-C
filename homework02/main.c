#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char map[465]; 

int writeStringToBuffer(const char* string, int x, int y);

int title_screen()
{
	int i = 0;

		while(i < 465)
		{
			int x = i % 31;
			int y = i / 31;
	
			if(i == 0 || i == 29 || i == 434 || i == 463)
			{
				map[i] = '|';
			}
			else if(x == 30)
			{
				map[i] = '\n';
			}
			else if(x == 0 || x == 29)
			{
				map[i] = '|';
			}
			else if(y == 0 || y == 14)
			{
				map[i] = '_';
			}
			else
			{
				map[i] = ' ';
			}
			i++;		
		}

		writeStringToBuffer("^ Cat Rush! ^", 9 , 5);
		writeStringToBuffer("1. Start", 11 , 7);
		writeStringToBuffer("2. Help",11 , 8);
		writeStringToBuffer("3. Exit", 11 , 9);

		map[464]='\0';	
		printf("%s", map);
}

int print_help()
{
	int i = 0;

		while(i < 465)
		{
			int x = i % 31;
			int y = i / 31;
	
			if(i == 0 || i == 29 || i == 434 || i == 463)
			{
				map[i] = '|';
			}
			else if(x == 30)
			{
				map[i] = '\n';
			}
			else if(x == 0 || x == 29)
			{
				map[i] = '|';
			}
			else if(y == 0 || y == 14)
			{
				map[i] = '_';
			}
			else
			{
				map[i] = ' ';
			}
			i++;
		}

		writeStringToBuffer("* Help *", 11 , 3);
		writeStringToBuffer("Move the cat", 9 , 5);
		writeStringToBuffer("with the space bar!", 6 , 7);
		writeStringToBuffer("go to title screen <1>", 4 , 9);

		map[464]='\0';	
		printf("%s", map);
}

int exit_screen()
{ 
	int i = 0;

		while(i < 465)
		{
			int x = i % 31;
			int y = i / 31;
	
			if(i == 0 || i == 29 || i == 434 || i == 463)
			{
				map[i] = '|';
			}
			else if(x == 30)
			{
				map[i] = '\n';
			}
			else if(x == 0 || x == 29)
			{
				map[i] = '|';
			}
			else if(y == 0 || y == 14)
			{
				map[i] = '_';
			}
			else
			{
				map[i] = ' ';
			}
			i++;
		}
		writeStringToBuffer("* Exit *", 11 , 3);
		writeStringToBuffer("exit the game...?", 6 , 5);
		writeStringToBuffer("please press <0>", 7 , 7);
		
		map[464]='\0';
		printf("%s", map);
}

int main()
{
	int game_states = 4;
	while(game_states)
	{		
		if(game_states == 4)
		{
			system("cls");
			title_screen();
			scanf("%d", &game_states);
		}
		else if(game_states == 2)
		{
			system("cls");
			print_help();
			scanf("%d", &game_states);
		}
		else if(game_states == 3)
		{
			system("cls");
			exit_screen();
			scanf("%d", &game_states);
		}
		else if(game_states == 0)
		{
			exit(0);
			system("cls");
		}
		else
		{
			game_states = 1;
		}
	}
	return 0;
}

int writeStringToBuffer(const char* string, int x, int y)
{
	int i = 0;
	while(i < strlen(string))
	{
		map[i + x + 31 * y] = string[i];
		i++;
	}
}
