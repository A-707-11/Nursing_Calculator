#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <math.h>

void setColor(int color) {
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, color);
}

void sysPause()
{
	setColor(14);
	printf("\n\n");
	system("pause");
	fflush(stdin);
	system("cls");
}

void calculateBMI(float h, float w)
{
	float bmi = w/(h * h);
	
	if(bmi < 18.5)
	{
		setColor(1);
		printf("\tResult: %.2f\n", bmi);
		printf("\tYou are Underweight\n");
	}
	else if(bmi >= 18.5 && bmi <= 24.9)
	{
		setColor(2);
		printf("\tResult: %.2f\n", bmi);
		printf("\tYour bmi is normal\n");
	}
	else if(bmi >= 25 && bmi <= 29.9)
	{
		setColor(1);
		printf("\tResult: %.2f\n", bmi);
		printf("\tYour are Overweight\n");
	}
	else if(bmi >= 30)
	{
		setColor(4);
		printf("\tResult: %.2f\n", bmi);
		printf("\tDamn You're Obese\n");
	}
	
	sysPause();
}

void printDes(const char* text[], int num_lines) 
{
    int i;
    int color = 12;
    
	for (i = 0; i < num_lines; i++) {
        
		setColor(color);           
        printf("%s\n", text[i]);   
        fflush(stdout);            
    }

}

void getAsciiArt(const char* ascii_art[], int n) 
{
	
    ascii_art[0] = ".--.   .--.  .-------.   .-./`)  ____..--'.-./`)    ____                _______      ____      .---.        _______    ";
    ascii_art[1] = "|  | _/  /   |  _ _   \\  \\ .-.')|        |\\ .-.') .'  __ `.            /   __  \\   .'  __ `.   | ,_|       /   __  \\   ";
    ascii_art[2] = "| (`' ) /    | ( ' )  |  / `-' \\|   .-'  '/ `-' \\/   '  \\  \\          | ,_/  \\__) /   '  \\  \\,-./  )      | ,_/  \\__)  ";
    ascii_art[3] = "|(_ ()_)     |(_ o _) /   `-'`\"`|.-'.'   / `-'`\"`|___|  /  |        ,-./  )       |___|  /  |\\  '_ '`)  ,-./  )        ";
    ascii_art[4] = "| (_,_)   __ | (_,_).' __ .---.    /   _/  .---.    _.-`   |        \\  '_ '`)        _.-`   | > (_)  )  \\  '_ '`)      ";
    ascii_art[5] = "|  |\\ \\  |  ||  |\\ \\  |  ||   |  .'._( )_  |   | .'   _    |         > (_)  )  __ .'   _    |(  .  .-'   > (_)  )  __  ";
    ascii_art[6] = "|  | \\ `'   /|  | \\ `'   /|   |.'  (_'o._) |   | |  _( )_  |        (  .  .-'_/  )|  _( )_  | `-'`-'|___(  .  .-'_/  ) ";
    ascii_art[7] = "|  |  \\    / |  |  \\    / |   ||    (_,_)| |   | \\ (_ o _) /         `-'`-'     / \\ (_ o _) /  |        \\`-'`-'     /  ";
    ascii_art[8] = "`--'   `'-'  ''-'   `'-'  '---'|_________| '---'  '.(_,_).'            `._____.'   '.(_,_).'   `--------`  `._____.'    ";
    ascii_art[9] = "==================================================================================================================\n\n";
    
 
    printDes(ascii_art, n);
}



void progOptions(int *n)
{
	setColor(13);
	printf("Do you want to Check your big ahh?\n");
	printf("[1]Yes	[0]No: ");
	scanf("%d", n);
}

void bmiOptions(float *h, float *w)
{
	setColor(14);
	printf("BMI CALCULATOR: \n");
	
	printf("\n");
	printf("    Enter your height in meters(m): ");
	scanf("%f", h);
	
	printf("Enter your weight in kilograms(kg): ");
	scanf("%f", w);
	printf("\n");
	
	
	calculateBMI(*h,*w);
}

float bmrCal(int age, float height, float weight, char gender)
{
	float bmr;
	
	if(gender == 'F')
	{
		bmr = 10*weight+6.25*height-5*age-161;
	}
	else if (gender == 'M')
	{
		bmr =10*weight+6.25*height-5*age+5;
	}
	
	return bmr;
}

void bmrOptions(int *age, float *h, float *w, char *gender)
{
	setColor(14);
	printf("BMR CALCULATOR: \n");
	
	printf("\n");
	printf("\tEnter your height in centimeters(cm): ");
	scanf("%f", h);
	
	printf("\t  Enter your weight in kilograms(kg): ");
	scanf("%f", w);
	
	printf("\t                      Enter your age: ");
	scanf("%d", age);
	fflush(stdin);
	
	printf("\t Enter your gender [F]Female [M]Male: ");
	scanf("%c", gender);
	printf("\n");
	
	setColor(2);
	printf("\t\t\tBMR: %.2f\n", bmrCal(*age,*h,*w,*gender));
	setColor(14);
	sysPause();
}

int getMonthNum(char monthInput[])
{
	int i;
	char *monthHere[] = {
        "january",   
        "february",  
        "march",     
        "april",     
        "may",       
        "june",      
        "july",      
        "august",    
        "september", 
        "october",   
        "november",  
        "december"   
    };
	
	for(i = 0; i < 12; i++)
	{
		if(strcmp(monthInput,monthHere[i]) == 0)
		{
			return i + 1;
		}
		
	}
	
	return -1;
}

char* getMonthStr(int n)
{
	int i;
	char *monthHere[] = {
        "January",   
        "February",  
        "March",     
        "April",     
        "May",       
        "June",      
        "July",      
        "August",    
        "September", 
        "October",   
        "November",  
        "December"     
    };
    
    return monthHere[n-1];
}

int naegeleRule(char month[], int *day, int *year)
{
	int myMonth = getMonthNum(month);
	
	if(myMonth >= 1 && myMonth <= 3)
	{
		myMonth += 9;
		*day += 7;
	}
	else if(myMonth >= 4 && myMonth <= 12)
	{
		myMonth -= 3;
		*day += 7;
		*year += 1;
	}
	
	return myMonth;
}

void naegeleOpt(char month[], int *day, int *year)
{
	int i;
	int len = strlen(month);
	char *lowStr = malloc(sizeof(char) * (len+1));
	
	setColor(14);
	printf("Naegele's Rule: \n\n");
	printf("\t Enter month: ");
	scanf("%s", month);
	
	len = strlen(month);
	printf("\t   Enter day: ");
	scanf("%d", day);
	
	printf("\t  Enter year: ");
	scanf("%d", year);
	
	for(i = 0; i < len; i++)
	{
		lowStr[i] = tolower(month[i]);
	}
	lowStr[len] = '\0';
	
	int res = naegeleRule(lowStr,day,year);
	char* theMonth = getMonthStr(res);
	
	setColor(2);
	printf("\n\n\tEstimated Due Date(EDD): %s %d, %d", theMonth, *day, *year);
	
	sysPause();
	free(lowStr);
}

int yrTomonth(int age)
{
	return age*12;
}

float youngCal(int age, float aDose)
{
	float cDose = ((float)age/((float)age+12))*aDose;
	
	return cDose;
}

float clarkCal(float lbs, float aDose)
{
	float cDose = lbs/150*aDose;
	
	return cDose;
}

float friedCal(int age, float aDose)
{
	float iDose = (float)yrTomonth(age)/150*aDose ; 
	
	return iDose;
}

void medDoseOpt(int *age, float *lbs, float *aDose)
{
	
	setColor(14);
	printf("Medication Dose: \n\n");
	
	printf("\t      Enter weight in pounds(lbs): ");
	scanf("%f", lbs);
	
	printf("\tEnter adult dose in milligram(mg): ");
	scanf("%f", aDose);
	
	printf("\t                        Enter Age: ");
	scanf("%d", age);
	
	setColor(2);
	printf("\n\n\tYoung's Rule: %.2f(mg)",  youngCal(*age,*aDose));
	printf("\n\n\tClark's Rule: %.2f(mg)", clarkCal(*lbs,*aDose));
	printf("\n\n\tFried's Rule: %.2f(mg)", friedCal(*age,*aDose));
	sysPause();
}

float mostCal(float height, float weight)
{
	float bsa = sqrt(height*weight/3131);
	return bsa;
}

void mostOpt(float *height, float *weight)
{
	float bsa;
	
	setColor(14);
	printf("Body Surface Area: \n\n");
	
	printf("\tEnter weight in pounds(lbs): ");
	scanf("%f", weight);
	
	printf("\t Enter height in inches(in): ");
	scanf("%f", height);
	
	bsa = mostCal(*height,*weight);
	setColor(2);
	printf("\n\n\tBody Surface Area(BSA): %.2fm^2", bsa);
	sysPause();
}

void calWhat(int *n)
{
	setColor(13);
	printf("What do you want to calculate? \n\n");
	printf("[1]BMI \t\t           [2]BMR\n");
	printf("[3]Naegele's Rule          [4]Medication Dose\n");
	printf("[5]Body Surface Area(BSA)  [0]Exit\n");
	printf("\n\nSelect Number: ");
	scanf("%d", n);
	printf("\n");
	system("cls");
}




