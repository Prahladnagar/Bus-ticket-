#include<stdio.h>
void main()
{
	float dis,total;
	int a,c,b,pas,d;
		back:
	printf("--------------------------------------------Welcome to counter window---------------------------------------------------\n");
	printf("Choose catagery :\n");
	printf("For Student       Press 1\n");
	printf("For Ladies        Press 2\n");
	printf("For Elderly       Press 3\n");
	printf("For under 5 age   Press 4\n");
	printf("For under 13 age  Press 5\n");
	printf("For Monthly pass  Press 6\n");
	printf("None of them      Press 7\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			dis=0.50;
			break;
		case 2:
			dis=0.25;
			break;
		case 3:
			dis=0.50;
			break;
		case 4:
			dis=1;
			break;
		case 5:
			dis=0.50;
			break;
		case 6:
			dis=1;
			break;
		case 7:
			dis=0;
			break;	
		default:
			printf("Wrong input Please try again\n");
			goto back;
	}
	printf("Enter passenger number\n");
	scanf("%d",&pas);
	printf("Choose journey mode:\n");
	printf("In kilometer          Press 1\n");
	printf("In station to station Press 2\n");
	printf("For back              Press 3\n");
	scanf("%d",&b);
	if(b==3)
	{
		goto back;
	}
	if(b==1)
	{
		printf("Enter Kilometer");
		scanf("%d",&c);
		total=c*3*pas;
		total-=total*dis;
	}
	else if(b==2)
	{
		printf("Choose starting location :\n");
		printf("For Nagaur     Press 1\n");
		printf("For Mundwa     Press 2\n");
		printf("For Kuchera    Press 3\n");
		printf("For Butati     Press 4\n");
		printf("For Ren        Press 5\n");
		printf("For Merta      Press 6\n");
		printf("For Padukallan Press 7\n");
		printf("For Thanwala   Press 8\n");
		printf("For Pushkar    Press 9\n");
		printf("For Ajmer      Press 10\n");
		printf("For Back       Press 11\n");
		scanf("%d",&c);
		if(c==11)
		{
			goto back;
		}
		printf("Choose destination location :\n");
		printf("For Nagaur     Press 1\n");
		printf("For Mundwa     Press 2\n");
		printf("For Kuchera    Press 3\n");
		printf("For Butati     Press 4\n");
		printf("For Ren        Press 5\n");
		printf("For Merta      Press 6\n");
		printf("For Padukallan Press 7\n");
		printf("For Thanwala   Press 8\n");
		printf("For Pushkar    Press 9\n");
		printf("For Ajmer      Press 10\n");
		printf("For Back       Press 11\n");
		scanf("%d",&d);
		if(d==11)
		{
			goto back;
		}
		total=(d-c)*10*pas;
		total-=total*dis;
		if(total<0)
		{
			total=(-total);
		}
	}
	else if(b==3)
	{
		goto back;
	}
	else
	{
		printf("Wrong input Please try again!");
		goto back;
	}
	printf("Your total amount is %.2f",total);
	
}

