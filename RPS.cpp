#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int score1=0,score2=0,points;
int main()
{
	int i;
	char player1[100],player2[100],move1[100],move2[100];
	system("color b");
	printf("Rock Paper Scissor\n\n:");
	printf("Enter Name:\nPlayer 1: ");
	scanf("%s",&player1);
	printf("Player 2: ");
	scanf("%s",&player2);
	system("cls");
	printf("Enter Points:");
	scanf("%d",&points);
	for(i=0;i<100;i++)
	{
		printf("Rock, Paper, Scissor Game\n\n");
		printf("R-Rock\n");
		printf("P-Paper\n");
		printf("S-Scissor\n");
		
		printf("Enter your move %s: ",player1);
		scanf("%s",&move1);
		system("cls");
		printf("Enter your move %s: ",player2);
		scanf("%s",&move2);
		{
			if((strcmp(move1,"R")==0 || strcmp(move1,"r")==0) && (strcmp(move2,"S")==0 || strcmp(move2,"s")==0))
			{
				system("cls");
				score1++;
				printf("%s YOU WON\n",player1);
			}
			else if((strcmp(move1,"S")==0 || strcmp(move1,"s")==0) && (strcmp(move2,"R")==0 || strcmp(move2,"r")==0))
			{
				system("cls");
				score2++;
				printf("%s YOU WON\n",player2);
			}
			else if((strcmp(move1,"S")==0 || strcmp(move1,"s")==0) && (strcmp(move2,"P")==0 || strcmp(move2,"p")==0))
			{
				system("cls");
				score1++;
				printf("%s YOU WON\n",player1);
			}
			else if((strcmp(move1,"P")==0 || strcmp(move1,"p")==0) && (strcmp(move2,"S")==0 || strcmp(move2,"s")==0))
			{
				system("cls");
				score2++;
				printf("%s YOU WON\n",player2);
			}
			else if((strcmp(move1,"P")==0 || strcmp(move1,"p")==0) && (strcmp(move2,"R")==0 || strcmp(move2,"r")==0))
			{
				system("cls");
				score1++;
				printf("%s YOU WON\n",player1);
			}
			else if((strcmp(move1,"R")==0 || strcmp(move1,"r")==0) && (strcmp(move2,"P")==0 || strcmp(move2,"p")==0))
			{
				system("cls");
				score2++;
				printf("%s YOU WON\n",player2);
			}
			else if((strcmp(move1,"S")==0 || strcmp(move1,"s")==0) && (strcmp(move2,"S")==0 || strcmp(move2,"s")==0)||(strcmp(move1,"R")==0 || strcmp(move1,"r")==0) && (strcmp(move2,"R")==0 || strcmp(move2,"r")==0)||(strcmp(move1,"P")==0 || strcmp(move1,"p")==0) && (strcmp(move2,"P")==0 || strcmp(move2,"p")==0))
			{
				system("cls");
				printf("Draw\n");
			}
			printf("\nScore Board:\n%s=%d\t%s=%d\n\n",player1,score1,player2,score2);
			{
				if(score1==points)
				{
					printf("Player1(%s) win the challenge ",player1);
					i=101;
				}
				else if(score2==points)
				{
					printf("Player2(%s) win the challenge ",player2);
					i=101;
				}
			}
		}
	}	
}

