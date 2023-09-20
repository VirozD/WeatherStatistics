// Lab 2 - Weather Data
//

#include <iostream>
#include <string>
using namespace std;

//I used a number to represent a month instead of the name of the month

struct Weather {

    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;

};

int main()
{
    const int months = 12;
    Weather monthsOfYear[months];

    for (int month = 0; month < months; month++) {

        cout << "Enter the high temperature for month " << month << " (Fahrenheit): ";
        cin >> monthsOfYear[month].highTemperature;

        //Validating input from user 
        while (monthsOfYear[month].highTemperature < -100 || monthsOfYear[month].highTemperature > 400) {

            cout << "Please enter the high temperature for month " << month << " (Fahrenheit > -100 & < 400): ";
            cin >> monthsOfYear[month].highTemperature;

        }

        cout << "Enter the low temperature for month " << month << " (Fahrenheit): ";
        cin >> monthsOfYear[month].lowTemperature;

        //Validating input from user 
        while (monthsOfYear[month].lowTemperature < -100 || monthsOfYear[month].lowTemperature > 400) {

            cout << "Please enter the low temperature for month " << month << " (Fahrenheit > -100 & < 400): ";
            cin >> monthsOfYear[month].lowTemperature;

        }

        cout << "Enter the total Rainfall for month " << month << " (Fahrenheit): ";
        cin >> monthsOfYear[month].totalRainfall;

        monthsOfYear[month].averageTemperature = (monthsOfYear[month].highTemperature + monthsOfYear[month].lowTemperature) / 2;

    }

    double maxTemp = -100, minTemp = 400, averageOfAllMonths = 0, totalRainfallOfYear = 0;
    int maxMonth = 50, minMonth = 50;

    for (int month = 0; month < months; month++) {

        if (monthsOfYear[month].highTemperature > maxTemp) {
            maxTemp = monthsOfYear[month].highTemperature;
            maxMonth = month;
        }

        if (monthsOfYear[month].lowTemperature < minTemp) {
            maxTemp = monthsOfYear[month].highTemperature;
            minMonth = month;
        }

        averageOfAllMonths += monthsOfYear[month].averageTemperature;
        totalRainfallOfYear += monthsOfYear[month].totalRainfall;
    }

    averageOfAllMonths = averageOfAllMonths / 12;

    //Displaying values
    for (int month = 0; month < months; month++) {
        cout << "The average monthly temperature for month " << month<< "is: " << monthsOfYear[month].averageTemperature << endl;
    }

    cout << "The total rainfall for the year is " << totalRainfallOfYear << endl;
    cout << "The highest temperature of the year is " << maxTemp << ", which occurs in month" << maxMonth << endl;
    cout << "The lowest temperature of the year is " << minTemp << ", which occurs in month" << minMonth << endl;
    cout << "The average of all the monthly temperatures is " << averageOfAllMonths;

    system("pause>0");
}
