#include <stdio.h>
//include
char contine [50];
int  numcmd = 0;
char stringcmd[50];
void handle_command(int cmd);

void app_calculator();
void module_home();
void app_news();



int main(int argc, char *argv[])

{
	while(1) {

		module_home();
		scanf( " %d",  &numcmd);
		handle_command(numcmd);
		numcmd = 0;


		
	
		
	} // main loop & core

	return 0;
	
	
}

void handle_command(int numcmd) {

	switch (numcmd) {
		case 2: app_calculator(); break;
		case 3: app_news(); break;
	}


}

void module_home() {
	printf("----------------------------------------\n");
	printf("| 2: calculator                          |\n");
	printf("| 3: news                                |\n");
	printf("----------------------------------------\n\n");
	printf("D.eShell > ");
	//homesreen		
}



void app_calculator() {
	int cmdcalculator = 0;
	double num1 = 0;
	double num2 = 0;
	while(1) {

		printf("-----------------------------------------------\n");
		printf("|Choose an operator with one of these numbers!|\n");
		printf("| 1: +                                        |\n");
		printf("| 2: -                                        |\n");
		printf("| 3: *                                        |\n");
		printf("| 4: /                                        |\n");
		printf("| 5: close                                    |\n");
		printf("-----------------------------------------------\n\n");
		scanf("%d", &cmdcalculator);
		printf("D.eShell > \n");
		// calculator main menu

		if (cmdcalculator == 5) {
			return;
			break;

			
		} else if (cmdcalculator == 1) {
			printf("---------------------------------------\n");
			printf("|      Type  your first number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num1);

			printf("---------------------------------------\n");
			printf("|     Type  your second number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num2);
			double sum = num1 + num2;
			printf("-----------------------------------------\n");
			printf("| sum:                                \n");
			printf("| %lf                                 \n", sum);
			printf("-----------------------------------------\n");

		} else if (cmdcalculator == 2) {
			printf("---------------------------------------\n");
			printf("|      Type  your first number!!      |\n");
			printf("---------------------------------------\n");
			scanf("%lf", &num1);

			printf("---------------------------------------\n");
			printf("|     Type  your second number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num2);
			double sum = num1 - num2;
			printf("-----------------------------------------\n");
			printf("| sum:                                \n");
			printf("| %lf                                 \n", sum);
			printf("-----------------------------------------\n");
			

		} else if (cmdcalculator == 3) {
			printf("---------------------------------------\n");
			printf("|      Type  your first number!!      |\n");
			printf("---------------------------------------\n");
			scanf("%lf", &num1);

			printf("---------------------------------------\n");
			printf("|     Type  your second number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num2);

			double sum = num1 * num2;
			printf("-----------------------------------------\n");
			printf("| sum:                                \n");
			printf("| %lf                                 \n", sum);
			printf("-----------------------------------------\n");

		} else if (cmdcalculator == 4) {

			printf("---------------------------------------\n");
			printf("|      Type  your first number!!      |\n");
			printf("---------------------------------------\n");
			scanf("%lf", &num1);

			printf("---------------------------------------\n");
			printf("|     Type  your second number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num2);

			double sum = num1 / num2;
			printf("-----------------------------------------\n");
			printf("| sum:                                \n");
			printf("| %lf                                 \n", sum);
			printf("-----------------------------------------\n");
		}

		 printf("-----------------------------------------\n");
		 printf("|       Type anything to continue        |\n");
		 printf("-----------------------------------------\n");
		 scanf("%49s", contine);

                

	} // calculator
}




void app_news() {
	int cmdnews = 0;

	while(1) {


		printf("--------------------------------------\n");
     	printf("|               D.News               |\n");
    	printf("| 1: news                            |\n");
    	printf("| 2: home                            |\n");
    	printf("--------------------------------------\n");
		scanf("%d", &cmdnews);

		
	
 		if (cmdnews == 1) {

			printf("--------------------------------------\n");
        	printf("|               D.News               |\n");
        	printf("| D.eSystem 4 came out and it is     |\n");
        	printf("| the first D.eSystem which uses C.  |\n");
        	printf("|                                    |\n");
        	printf("| There is a big leak that           |\n");
        	printf("| D.eSystem 4 was the last Python    |\n");
        	printf("| based D.eSystem.                   |\n");
        	printf("--------------------------------------\n");

		} 	else if (cmdnews == 2) {
			return;
			break;

		}
	}



}