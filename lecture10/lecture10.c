#include <stdio.h>

void title_screen();

int main()
{
	title_screen();

	return 0;
}

void title_screen()
{
	char map[9][30] =
	{
		"%#######################%",
		"#                       #",
		"#       cat rush!       #",
		"#                       #",
		"#     1. START          #",
		"#     2. OPTIONS        #",
		"#     3. EXIT           #",
		"#                       #",
		"%#######################%",
	};

	int cat;

	while (1) {
		for (int i = 0; i < 9; i++) {
			printf("%s\n", map[i]);
		}

		scanf("%d", &cat);

		if (cat == 1) {
			char map_move_cat[8][30] =
			{
				"#########################",
				"#                       #",
				"#     Move the cat      #",
				"#   with the space bar! #",
				"#                       #",
				"#      <1. Exit>        #",
				"#                       #",
				"#########################",
			};

			for (int i = 0; i < 8; i++) {
				printf("%s\n", map_move_cat[i]);
			}
		}
		else if (cat == 2) {
			char map_avoid_enemy[9][30] =
			{
				"#########################",
				"#                       #",
				"#     To Avoid Enemy    #",
				"#         Press         #",
				"#   Space Bar To Jump   #",
				"#                       #",
				"#      <1. Exit>        #",
				"#                       #",
				"#########################",
			};

			for (int i = 0; i < 9; i++) {
				printf("%s\n", map_avoid_enemy[i]);
			}
		}
		else if (cat == 3) {
			char map_exit_game[7][30] =
			{
				"#########################",
				"#                       #",
				"#    exit the game...   #",
				"#                       #",
				"#     <1. restart >     #",
				"#                       #",
				"#########################",
			};

			for (int i = 0; i < 7; i++) {
				printf("%s\n", map_exit_game[i]);
			}

			break;
		}
		else {
			printf("Invalid cat. Try again.\n");
		}

		getchar();
		getchar();
	}
}
