#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	float height, weight, aDose;
	int n, i, age, day, year;
	char gender;
	const char* ascii_art[10];
	int num_lines = 10;
	char month[20];

	 getAsciiArt(ascii_art,num_lines);
	 progOptions(&i);
	 system("CLS");
	 
	 if(i == 1)
	 {
	 	getAsciiArt(ascii_art,num_lines);
	 	calWhat(&n);
	 	while(n != 0)
	 	{
			switch(n)
			{
				case 1:
				 		getAsciiArt(ascii_art,num_lines);
				 		bmiOptions(&height,&weight);
				 		getAsciiArt(ascii_art,num_lines);
				 		setColor(13);
				 		calWhat(&n);
				 		system("CLS");
				 	break;
				case 2:
				 		getAsciiArt(ascii_art,num_lines);
				 		bmrOptions(&age,&height,&weight,&age,&gender);
				 		getAsciiArt(ascii_art,num_lines);
				 		setColor(13);
				 		calWhat(&n);
				 		system("CLS");
				 	break;
				case 3:
					getAsciiArt(ascii_art,num_lines);
					naegeleOpt(month,&day,&year);
					getAsciiArt(ascii_art,num_lines);
				 	setColor(13);
				 	calWhat(&n);
				 	system("CLS");
					break;
				case 4:
					getAsciiArt(ascii_art,num_lines);
					medDoseOpt(&age,&weight,&aDose);
					getAsciiArt(ascii_art,num_lines);
				 	setColor(13);
				 	calWhat(&n);
				 	system("CLS");
					break;
				case 5:
					getAsciiArt(ascii_art,num_lines);
					mostOpt(&height,&weight);
					getAsciiArt(ascii_art,num_lines);
				 	setColor(13);
				 	calWhat(&n);
				 	system("CLS");
					break;
				case 0:	
					break;
				default:
					getAsciiArt(ascii_art,num_lines);
					setColor(4);
					printf("\n\tInvalid Option! \n\tSelect Again.\n\n");
					setColor(13);
					calWhat(&n);
					system("CLS");
				
					break;
			}
	 		
		}
			 	
	 }
	 
	 
	getAsciiArt(ascii_art,num_lines);
	getchar();
	printf("\n\n[ENTER] Press Enter to Exit Application\n");
	getchar();
	return 0;
}
