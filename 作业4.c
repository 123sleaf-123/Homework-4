#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float sale;
	float income;
}Perinf,*PI;

void IncoCal (int n,PI ExpPer);


void IncoCal (int n,PI ExpPer){
	switch(n){
		case 5:
			ExpPer->income = 575.00 + 0.16 * ExpPer->sale;
			break; 
		case 4:
			ExpPer->income = 550.00 + 0.14 * ExpPer->sale;
			break;
		case 3:
			ExpPer->income = 525.00 + 0.12 * ExpPer->sale;
			break;
		case 2:
			ExpPer->income = 500.00 + 0.09 * ExpPer->sale;
			break;
		case 1:
			ExpPer->income = 450.00 + 0.05 * ExpPer->sale;
			break;
		case 0:
			ExpPer->income = 400.00 + 0.03 * ExpPer->sale;
			break;
		default:
			if(n>5) ExpPer->income = 575.00 + 0.16 * ExpPer->sale; 
			break;
	}
}

int main (void)
{
	int n;
	char c;
	PI ExpPer=(PI)malloc(sizeof(Perinf));
	printf("This a a programme to calculate your income according to your sale...\n");
	printf("Enter your monthly sales:");
	printf("%c",7);
	while(/*scanf("%f",&ExpPer->sale) == 1 ||*/ scanf("%f",&ExpPer->sale) == EOF || ExpPer->sale > 100000 || ExpPer->sale < 0){
		while(getchar() != 10) while (getchar() == 10);
		printf("\n========================\n     INVALID DATA \n========================\n");
		printf("\nReenter valid data...\n");
		printf("\nEnter your monthly sales:");
		printf("%c",7);
	}
	n=(int) (ExpPer->sale / 10000);
	printf("\n=======Enter finished=======\n"); 
	printf("%c",7);
	IncoCal(n,ExpPer);
	printf("\nYour income is %.2f",ExpPer->income);
	return 0;
}
