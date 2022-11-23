#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int shop,pieces,total;
	char user[100], pass[100],address[100],fullname[100];
	printf("Register:\n");
	printf("Enter Fullname: ");
	gets(fullname);
	printf("Enter Username: ");
	scanf("%s",&user);
	printf("Enter Password: ");
	scanf("%s",&pass);
	printf("Enter Address: ");
	scanf("%s",&address);
	system("cls");
	char user1[100],pass1[100];
	log:
	printf("Login:\n");
	printf("Enter Username: ");
	scanf("%s",&user1);
	printf("Enter Password: ");
	scanf("%s",&pass1);
	system("cls");

	if(strcmp(user1,user)==0 && strcmp(pass1,pass)==0)
	{//cant read characters on this part
		for(int i=0;i<100;i++)
		{
			shop:
			printf("Welcome to Shopee:\n");
			printf("\nYour Total Amount is (%d)\n",total);
			printf("1.Slippers=100\n2.Bag=150\n3.Jacket=200\n4.Exit\n");
			printf("Choose: ");
			scanf("%d",&shop);
			
			switch(shop)
			{
			case 1:
				{
				printf("\n1.Slippers=100\nEnter Pieces: ");
				scanf("%d",&pieces);
				total+=pieces*100;	
				system("cls");			
			break;
				}
			case 2:
				{
				printf("\n2.Bag=150\nEnter Pieces: ");
				scanf("%d",&pieces);
				total+=pieces*150;	
				system("cls");			
			break;
				}
			case 3:
				{
				printf("\n3.Jacket=200\nEnter Pieces: ");
				scanf("%d",&pieces);
				total+=pieces*200;	
				system("cls");			
			break;
				}
			case 4:
				{
				ynn:
				char yn[1];
				printf("Are you done shopping? Y/N: ");
				scanf("%s",&yn);
				if(strcmp(yn,"y")==0 || strcmp(yn,"Y")==0)
					{
						printf("The total is %d and will sent to your address (%s)",total,address);
						i=111;
					}
				else if(strcmp(yn,"n")==0 || strcmp(yn,"N")==0)
					{
						system("cls");
						goto shop;
						printf("\n");
					}
				else
					{
						system("cls");
						goto ynn;	
						printf("Wrong input:\n");
						
					}
				
			break;
				}
			default:
				{
					system("cls");
					printf("Not in the choices: \n\n");
					break;
				}	
			}				
		}	
	}
	else
	{
		printf("Wrong username or password\n");
		goto log;
	}
}
