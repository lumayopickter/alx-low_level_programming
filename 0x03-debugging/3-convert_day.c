#include "main.h"

/**
 * convert_day - Converts the day of the month to the day of the year,
 *               without accounting for leap year.
 * @month: Month in number format.
 * @day: Day of the month.
 *
 * Return: The day of the year.
 */
int convert_day(int month, int day)
{
	int dayOfYear = 0;

	switch (month)
	{
		case 2:
			dayOfYear = 31 + day;
			break;
		case 3:
			dayOfYear = 59 + day;
			break;
		case 4:
			dayOfYear = 90 + day;
			break;
		case 5:
			dayOfYear = 120 + day;
			break;
		case 6:
			dayOfYear = 151 + day;
			break;
		case 7:
			dayOfYear = 181 + day;
			break;
		case 8:
			dayOfYear = 212 + day;
			break;
		case 9:
			dayOfYear = 243 + day;
			break;
		case 10:
			dayOfYear = 273 + day;
			break;
		case 11:
			dayOfYear = 304 + day;
			break;
		case 12:
			dayOfYear = 334 + day;
			break;
		default:
			break;
	}

	return (dayOfYear);
}

