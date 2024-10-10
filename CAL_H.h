#ifndef MY_CALCULATOR
#define MY_CALCULATOR

void setColor(int color);
void sysPause();
void calculateBMI(float h, float w);
void printDes(const char* text[], int num_lines);
void getAsciiArt(const char* ascii_art[], int n);
void progOptions(int *n);
void bmiOptions(float *h, float *w);
void bmrOptions(float *h, float *w);
void bmrCal(int age, float height, float weight, char gender);
void calWhat(int *n);
int getMonthNum(char monthInput[]);
char* getMonthStr(int n);
int naegeleRule(char month[], int *day, int *year);
void naegeleOpt(char month[], int *day, int *year);
float youngCal(int age, float aDose);
float clarkCal(float lbs, float aDose);
float friedCal(int age, float aDose);
void medDoseOpt(int age, float *lbs, float *aDose);
float mostCal(float height, float weight);
void mostOpt(float *height, float *weight);

#endif
