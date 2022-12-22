#include <stdio.h>
#include <ctype.h>
 int main(){
 	char unit;
 	float temp;
 	float contemp;//convert temperature
 	
 	printf("is the temperature in (F) or (C)?");
 	scanf("%c",&unit);//user input unit fahrenheit or Celsius
 	
	 unit = toupper(unit);//convert unit to uppercase
 	
 	if(unit=='C'){
 		printf("Enter the temperature in Celsius: ");
 		scanf("%f",&temp);//input temperature in Celsius
 		contemp = (temp * 9/5) + 32; //c to f convert calculation
 		printf("fahrenheit: %.2f",contemp);
	 
	 } else if(unit =='F'){
	 	printf("Enter the temperature in fahrenheit: ");
	 	scanf("%f",&temp); //input temperature in fahrenheit
	 	contemp = (temp-32)*5/9;//f to c convert calculation
	 	printf("Celsius: %.2f",contemp);
	 	
	 }
 	
 	return 0;
 }
