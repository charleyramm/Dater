/* 
 * Dater: a program to calculate the number of days between two dates. 
 *
 * Author: Charley RAmm
 * Date: 15/01/2011
 *
 *
 *
 */

#include <stdio.h>
#include <time.h>

char line[80]; 			/* user input */
int day1, month1, year1; 	/* first date to compare */
int day2, month2, year2;  	/* second date to compare */
int difference = 0;		/* number of days between the two dates */



int main ()
{
	printf("Enter two dates in the format dd/mm/yyyy dd/mm/yyyy: \n");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d/%d/%d %d/%d/%d", &day1, &month1, &year1, &day2, &month2, &year2);
	printf("%d/%d/%d %d/%d/%d\n", day1, month1, year1, day2,  month2, year2);

	/* Calculate the difference in days between the two dates */
	
	/* Count the years until year1 matches year2 */
	while (year1 < year2){
		/* if it is a leap year increment 366, else 365 */
		if (( year1 % 4 == 0 && year1 % 100 != 0 ) || year1 % 400 == 0 ){
			difference += 366;
			printf("%d/%d/%d %d/%d/%d\n", day1, month1, year1, day2,  month2, year2);
			printf("difference: %d\n\n", difference);
		}else{
			difference += 365;
			printf("%d/%d/%d %d/%d/%d\n", day1, month1, year1, day2,  month2, year2);
			printf("difference: %d\n\n", difference);
		}
	 	/* increment year1 until it matches year2 */
		year1++;
	}

	/* After $we are done counting the years, count the months */
	while ( month1 < month2 ){
		/* add 31 if it is january, march, may, july, august, october or december */
		if ( month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12 )
			difference += 31;
			printf("%d/%d/%d %d/%d/%d\n", day1, month1, year1, day2,  month2, year2);
			printf("difference: %d\n\n", difference);
		/* add 30 if it is april, june, september or november */
		if ( month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11)
			difference += 30;
			printf("%d/%d/%d %d/%d/%d\n", day1, month1, year1, day2,  month2, year2);
			printf("difference: %d\n\n", difference);
		/* if it is february */
		if ( month1 == 2){
			/* add 29 if it is a leap year */
			if ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0 ){
				difference += 29;
			printf("%d/%d/%d %d/%d/%d\n", day1, month1, year1, day2,  month2, year2);
			printf("difference: %d\n\n", difference);
			} else {
			/* or if not add 28 */
				difference += 28;
			printf("%d/%d/%d %d/%d/%d\n", day1, month1, year1, day2,  month2, year2);
			printf("difference: %d\n\n", difference);
			}
		}
	
	}

	/* Count the days */
	while (day1 < day2){
	 	difference += 1;
			printf("%d/%d/%d %d/%d/%d\n", day1, month1, year1, day2,  month2, year2);
			printf("difference: %d\n\n", difference);
	 	day1++;
	}

	

	printf("Days difference: %d\n", difference);
	return 0;
}

