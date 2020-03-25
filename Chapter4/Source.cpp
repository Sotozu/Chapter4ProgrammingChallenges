#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
using namespace std;

int main() {
	//1.Minimum/Maximum
	/*
	float num1, num2, large, small;

	cout << "This program determines which numbers inputed by the user is larger or smaller.\n\n";
	cout << "Please enter the first number followed by the second number: ";
	cin >> num1 >> num2;

	if (num1 > num2) {
		large = num1;
		small = num2;
	}
	else {
		large = num2;
		small = num1;
	}

	cout << "\nThe larger number is " << large << ", and the smaller number is " << small << ".\n";
	*/

	//2.Roman Numeral Converter
	/*
	cout << "This program will convert a number inputed from the user that is between 1-10 into Roman numerals.\n\n";

	int input;

	cout << "Please enter a number that is from 1-10: ";
	cin >> input;
	while (input > 10 || input < 1) {
		cout << "No...\n";
		cout << "Please enter a valid number between 1-10: ";
		cin >> input;
	}
	cout << "\nThank you, please press \"Enter\" to continue: ";
	cin.ignore();
	cin.get();

	switch (input) {
	case (1):cout << "The number " << input << " in roman numeral form is I.\n";
		break;
	case (2): cout << "The number " << input << " in roman numeral form is II.\n";
		break;
	case (3): cout << "The number " << input << " in roman numeral form is III";
		break;
	case (4): cout << "The number " << input << " in roman numeral form is IV";
		break;
	case (5): cout << "The number " << input << " in roman numeral form is V";
		break;
	case (6): cout << "The number " << input << " in roman numeral form is VI";
		break;
	case (7): cout << "The number " << input << " in roman numeral form is VII";
		break;
	case (8): cout << "The number " << input << " in roman numeral form is VIII";
		break;
	case (9): cout << "The number " << input << " in roman numeral form is IX";
		break;
	case (10): cout << "The number " << input << " in roman numeral form is X";
		break;
	}
	*/

	//3.Magic Dates
	/*
	cout << "The program should then determine whether the month times the day is equal to the year.\n\n";

	int month, day, year, result1;

	cout << "Pleas enter the dates in numeric form when prompted xx/xx/xx (Please press \"Enter\" to continue):";
	cin.get();

	cout << "Please enter a month (1-12): ";
	cin >> month;

	cout << "Please enter a day (1-31): ";
	cin >> day;

	cout << "Please enter a year (ex. 96): ";
	cin >> year;

	result1 = month * day;

	if (result1 == year)
		cout << "\nThe date IS magic!\n";
	else
		cout << "\nThe date is NOT magic...\n";
	*/

	//4.Areas of Rectangles
	/*
	cout << "This program takes in the dimensions of two rectangles and then determines which has the larger surface area.\n\n";
	float length1, length2, width1, width2, area1, area2;
	int check = 0;

	cout << "Please enter the width followed by the length of the FIRST rectangle: ";
	cin >> length1 >> width1;

	cout << "\nPlease enter the width followed by the length of the SECOND rectangle: ";
	cin >> length2 >> width2;

	area1 = length1 * width1;
	area2 = length2 * width2;

	if (area1 > area2)
		check = 1;
	else if (area1 < area2)
		check = 2;

	switch (check) {
	case (1): cout << "\nThe FIRST rectangle is larger.\n";
		break;
	case (2): cout << "\nThe SECOND rectangle is larger.\n";
		break;
	default: cout << "\nBoth rectangles are the same.\n";
	}
	*/

	//5.Body Mass Index
	/*
	cout << "A program that calculates and displays a person’s body mass index (BMI).\n\n";
	float pounds, inches, bmi;
	cout << "Please enter your weight in pounds: ";
	cin >> pounds;
	cout << "Please enter your height in inches: ";
	cin >> inches;

	bmi = pounds * (703/(pow(inches, 2)));
	cout << fixed << showpoint << setprecision(2);

		if (bmi < 18.5) {
			cout << "\nYour BMI is: " << bmi << endl;
			cout << "Uh oh! Eat up you're underweight!\n";
		}
		else if (bmi > 25) {
			cout << "\nYour BMI is: " << bmi << endl;
			cout << "Uh oh! Stop eating you're overweight!\n";
		}
		else {
			cout << "\nYour BMI is: " << bmi << endl;
			cout << "You are within a healthy range!\n";
		}
		*/

		//6. Mass and Weight
		/*
		cout << "This program calculates the weight of an object given its mass.\n\n";
		float mass,weight;

		cout << "Please enter the mass of the object: ";
		cin >> mass;

		weight = mass * 9.8;

		cout << fixed << showpoint << setprecision(2);

		if (weight < 10)
			cout << "\nSince this object weighs " << weight << " pounds we will consider this light.\n";
		else if (weight > 1000)
			cout << "\nSince this object wieghs " << weight << " pounds we will consider this heavy.\n";
		else
			cout << "\nThe weight of the object is " << weight << " pounds.\n";
		*/

		//7.Time Calculator
		/*
		cout << "This program asks the user to enter a number of seconds and then gives interesting facts about it.\n";
		int seconds, minutes, hours, days;
		cout << "Please enter a number of seconds: ";
		cin >> seconds;

		if (seconds >= 60 && seconds < 3600) {
			minutes = seconds / 60;
			cout << "There is " << minutes << " total minutes given " << seconds << " seconds.\n\n";
		}
		else if (seconds >= 3600 && seconds < 86400) {
			hours = seconds / 3600;
			cout << "There is " << hours << " total hours given " << seconds << " seconds.\n\n";
		}
		else if (seconds >= 86400) {
			days = seconds / 86400;
			cout << "There is " << days << " total days given " << seconds << " seconds.\n\n";
		}
		else
			cout << "You typed less than a minutes worth of seconds.\nMaybe try something larger next time?\n";
		*/

		//8. Color Mixer
		/*
		cout << "This program will ask the user to mix two of three primary colors to determine the mixed color.\n\n";

		int codeColor = 0, width = 32;

		string color1, color2, combination;
		cout << "There are three primary colors:\n";
		cout << "red\n";
		cout << "blue\n";
		cout << "yellow\n";

		cout << "\nPlease type the first primary color: ";
		getline(cin, color1);

		cout << "\nPlease type the second primary color: ";
		getline(cin, color2);

		if (color1 == "red" && color2 == "blue") {
			codeColor = 1;
			combination = "purple";
		}
		else if(color1 == "red" && color2 == "yellow") {
			codeColor = 2;
			combination = "orange";
		}
		else if (color1 == "blue" && color2 == "yellow") {
			codeColor = 3;
			combination = "green";
		}

		switch (codeColor) {
		case (1):
			cout << "\nWhen you mix " << color1 << " and " << color2 << ", you get " << combination << ".\n";
			break;
		case (2):
			cout << "\nWhen you mix " << color1 << " and " << color2 << ", you get " << combination << ".\n";
			break;
		case (3):
			cout << "\nWhen you mix " << color1 << " and " << color2 << ", you get " << combination << ".\n";
			break;
		default:
			cout << "\nYou did not type the name of the primary colors correctly. Please try again.\n";

		}
		*/

		//9.Change for a Dollar Game
		/*
		cout << "This program asks the user to enter a number of coins given their worth. If it totals $1.00 they are congradulated!\n\n";

		int pennies, nickles, dimes, quarters;
		int pen = 1, nic = 5, dim = 10, qua = 25, sum;

		cout << "Please enter a number of pennies: ";
		cin >> pennies;
		cout << "\nPlease enter a number of nickles: ";
		cin >> nickles;
		cout << "\nPlease enter a number of dimes: ";
		cin >> dimes;
		cout << "\nPlease enter a number of quarters: ";
		cin >> quarters;

		sum = (pen * pennies) + (nic * nickles) + (dim * dimes) + (qua * quarters);

		if (sum == 100)

			cout << "\nCongradulations! The total is equal to $1.00!\n";
		else

			cout << "\nSorry the total is" << (sum > 100 ? " greater " : " less " )<< "than a dollar.\n";
		*/

		//10. Days in a Month
		/*
		cout << "This program outputs the number of days in a month given the month and year.\nIt even determines the days if it's a leap year!\n\n";
		int Month, Year, January = 31,
		February = 28,
		March = 31,
		April = 30,
		May = 31,
		June = 30,
		July = 31,
		August = 31,
		September = 30,
		October = 31,
		November = 30,
		December = 31;

		int leapCheck, leapCheck2, leapCheck3;

		cout << "Please enter the month: ";
		cin >> Month;
		cout << "Please enter the year: ";
		cin >> Year;

		leapCheck = Year % 100;
		leapCheck2 = Year % 4;

		if (leapCheck == 0) {
			leapCheck3 = Year % 400;
			if (leapCheck3 == 0) {
				February = 29;
			}

		}
		else if (leapCheck2 == 0) {
			February = 29;
		}

		switch (Month) {
		case (1): cout << January << " days";
			break;
		case (2):cout << February << " days";
			break;
		case (3):cout << March << " days";
			break;
		case (4):cout << April << " days";
			break;
		case (5):cout << May << " days";
			break;
		case (6):cout << June << " days";
			break;
		case (7):cout << July << " days";
			break;
		case (8):cout << August << " days";
			break;
		case (9):cout << September << " days";
			break;
		case (10):cout << October << " days";
			break;
		case (11):cout << November << " days";
			break;
		case (12):cout << December << " days";
			break;
		default: cout << "You didn't enter any valid data. Please try again.\n";
		}
		*/
		//11. Math Tutor.
		/*
		cout << "This program serves as simple math tutor.\n\n";
		int num1, num2, total, userInput;

		cout << "Please enter your calculated result.\n";
		srand(time(0));

		num1 = rand();
		num2 = rand();

		cout << right<< setw(8)<< num1 << endl;
		cout << "+" << setw(7) << num2 << endl;
		cout << "________" << endl;
		cin >> userInput;

		total = num1 + num2;
		if (total == userInput)
		cout << "\nCongradulations that is the correct answer!\n";
		else
		cout << "\nThe correct answe is " << total << ".\n";
		*/

		//12. Software Sales
		/*
		cout << "This program determines the total cost of sale given a discount based on number of units sold!\n\n";

		int numberUnits, unitCost = 99;
		float discount1 = .20, discount2 = .30, discount3 = .40, discount4 = .50, total;

		cout << "Please eneter the number of units being sold ($99 ea): ";
		cin >> numberUnits;

		total = numberUnits * unitCost;

		cout << showpoint << fixed << setprecision(2);

		if (numberUnits == 0) {
			cout << "\nPlease try again. The program only works when you input at least 1 unit.\n";
		}
		else if (numberUnits < 10) {
			cout << "\nThe total cost of the purchase is: $" << total<<endl;
		}
		else if (numberUnits >= 10 && numberUnits <= 19) {
			cout << "\nThe total cost of the purchase is: $" << total + (total * discount1)<<endl;
		}
		else if (numberUnits >= 20 && numberUnits <= 49) {
			cout << "\nThe total cost of the purchase is: $" << total + (total * discount2)<<endl;
		}
		else if (numberUnits >= 50 && numberUnits <= 99) {
			cout << "\nThe total cost of the purchase is: $" << total + (total * discount3)<<endl;
		}
		else if (numberUnits >= 100 ) {
			cout << "\nThe total cost of the purchase is: $" << total + (total * discount4)<<endl;
		}
		*/

		//13. Book Club Points
		/*
		cout << "This program awards points to book club members based on the number of books they have purchased."<<endl;
		int booknum;

		cout << "Please enter the number of books you have purchased this month: ";

		cin >> booknum;

		if (booknum >= 4) {
			cout << "You have earned 60 points!";
		}
		else if (booknum == 3) {
			cout << "You have earned 30 points!";
		}
		else if (booknum == 2) {
			cout << "You have earned 15 points!";
		}
		else if (booknum == 1) {
			cout << "You have earned 5 points!";
		}
		else if (booknum == 0) {
			cout << "You have earned 0 points!";
		}
		*/

		//14. Bank Charges
		/*
		cout << "This program take calculates abk fees based on the the number checks taken out and and the ammount in the account to begin with." << endl;

		double inibalance, numchecks, finbalance, calccheckfee;

		int standardfee = 10;

		int lowbalancefee = 0;

		cout << "Enter the beginning balance of the account: ";

		cin >> inibalance;

		if (inibalance < 400)
		{
			lowbalancefee = 15;
		}

		cout << "Enter the number of checks written this month: ";

		cin >> numchecks;

		if (numchecks < 20)
		{
			calccheckfee = numchecks * .10;
		}
		else if (numchecks >= 20 && numchecks < 40)
		{
			calccheckfee = numchecks * .08;
		}
		else if (numchecks >= 40 && numchecks < 60)
		{
			calccheckfee = numchecks * .06;
		}
		else if (numchecks >= 60)
		{
			calccheckfee = numchecks * .04;
		}

		finbalance = calccheckfee + standardfee + lowbalancefee;

		cout <<setprecision(434)<<showpoint<< " The banks service fees this month are: "<< finbalance;
		*/

		//15. Shipping Charges
		/*
		cout << "This program asks for the weight of the package and the distance it is to be shipped, and then displays the charges." << endl;

		float weight, distance, charge;

		do
		{
			cout <<"Please enter the weight of the package in kg: ";
			cin >> weight;
			if (weight <= 0 || weight > 20)
			{

				cout << "\n\nError: The weight must be greater than 0kg or less 20 kg.\n";
			}
		} while (weight <= 0 || weight > 20);

		do
		{
			cout << "Please enter the distance of the package in  miles: ";
			cin >> distance;
			if (distance < 10 || distance > 3000)
			{

				cout << "\n\nError: The distance must be greater than 10 miles or less 3000 miles.\n";
			}
		} while (distance <= 10 || distance > 3000);

		if (weight <= 2 && weight > 0 ){

			charge = 1.10 * (distance/500);

			}
		else if (weight <= 6  && weight > 2) {

			charge = 2.20 * (distance / 500);
		}
		else if (weight <= 10 && weight > 6) {

			charge = 3.70 * (distance / 500);
		}
		else if (weight <= 20 && weight > 10) {

			charge = 4.80 * (distance / 500);
		}

		cout << fixed << setprecision(2);

		cout << "The charge for the package given the distance and weight is $" << charge;

		return 0;
		*/

		//16. Running the Race
		/*
		cout << "This program asks for the names of three runners and the time it took each of them to finish race.\n" << "This program will display who came in first second and third.\n\n";

		string name1, name2, name3, winfirst, winsecond, winthird;
		float time1, time2, time3, first, second, third;


		cout << "Please enter the name of the first runner: ";
		getline (cin,name1);
		cout << "How long did it take this runner to finish the race: ";
		cin >> time1;
		while (time1 <= 0) {
			cout << "Please enter a valid positive number: ";
			cin >> time1;
		}
		cout << endl;
		cin.ignore(); //Review what this does

		cout << "Please enter the name of the second runner: ";
		getline(cin, name2);
		cout << "How long did it take this runner to finish the race: ";
		cin >> time2;
		while (time1 <= 0) {
			cout << "Please enter a valid positive number: ";
			cin >> time2;
		}
		cout << endl;
		cin.ignore();

		cout << "Please enter the name of the third runner: ";
		getline(cin, name3);
		cout << "How long did it take this runner to finish the race: ";
		cin >> time3;
		while (time1 <= 0) {
			cout << "Please enter a valid positive number: ";
			cin >> time3;
		}
		cout << endl;
		cin.ignore();

		if (time1 < time2) {
			if (time1 < time3) {
				first = time1;
				winfirst = name1;
				if (time2 < time3) {
					second = time2;
					third = time3;
					winsecond = name2;
					winthird = name3;
				}
				else {
					second = time3;
					third = time2;
					winsecond = name3;
					winthird = name2;
				}
			}
		}
		else if (time2 < time1) {
			if (time2 < time3) {
				first = time2;
				winfirst = name2;
				if (time1 < time3) {
					second = time1;
					third = time3;
					winsecond = name1;
					winthird = name3;
				}
				else {
					second = time3;
					third = time1;
					winsecond = name3;
					winthird = name1;
				}
			}
		}
		else if (time3 < time1) {
			if (time3 < time2) {
				first = time3;
				winfirst = name3;
				if (time1 < time2) {
					second = time1;
					third = time2;
					winsecond = name1;
					winthird = name2;
				}
				else {
					second = time2;
					third = time1;

					winsecond = name2;
					winthird = name1;
				}
			}
		}

		cout << fixed << setprecision(2);
		cout << "\nIn first place is: " << winfirst << endl;
		cout << "With a time of: " << first << endl;

		cout << "\nIn second place is: " << winsecond << endl;
		cout << "With a time of: " << second << endl;

		cout << "\nIn third place is: " << winthird << endl;
		cout << "With a time of: " << third << endl;
		return 0;*/

		//17. Personal Best
		/*cout << "This program requests the name of a pole vaulter, their recorded attempt and when it was done.\n";

		string name;
		bool check = true;

		struct heigth_date {
			double height;
			string date;
		} record1, record2, record3;

		cout << "\nPlease enter the name of the pole vaulter: ";
		getline(cin, name);
		//cin.ignore();

			do {
				cout << "\nEnter the first recroded jump in meters: ";
				cin >> record1.height;

				if (record1.height < 2 || record1.height > 5) {
					cout << "Please enter a realistic jump (between 2.0m - 5.0m)\n";
					check = false;
				}
				else {
					check = true;
				}
			} while (check == false);
			cin.ignore();
			cout << "Date the jump was recorded (mm/dd/yyyy): ";
			getline(cin, record1.date);

			do {
				cout << "\nEnter the second recroded jump in meters: ";
				cin >> record2.height;

				if (record2.height < 2 || record2.height > 5) {
					cout << "Please enter a realistic jump (between 2.0m - 5.0m)\n";
					check = false;
				}
				else {
					check = true;
				}
			} while (check == false);
			cin.ignore();
			cout << "Date the jump was recorded (mm/dd/yyyy): ";
			getline(cin, record2.date);

			do {
				cout << "\nEnter the third recroded jump in meters: ";
				cin >> record3.height;

				if (record3.height < 2 || record3.height > 5) {
					cout << "Please enter a realistic jump (between 2.0m - 5.0m)\n";
					check = false;
				}
				else {
					check = true;
				}
			} while (check == false);
			cin.ignore();
			cout << "Date the jump was recorded (mm/dd/yyyy): ";
			getline(cin, record3.date);

			if (record1.height > record2.height && record1.height > record3.height) {
				if (record2.height > record3.height) {
					cout << "\nthe following are the jumps from highest to lowest\n\n";
					cout << record1.height << "m " << "recorded on " << record1.date<<endl;
					cout << record2.height << "m " << "recorded on " << record2.date << endl;
					cout << record3.height << "m " << "recorded on " << record3.date << endl;

				}
				else {
					cout << "\nthe following are the jumps from highest to lowest\n\n";
					cout << record1.height << "m " << "recorded on " << record1.date << endl;
					cout << record3.height << "m " << "recorded on " << record3.date << endl;
					cout << record2.height << "m " << "recorded on " << record2.date << endl;

				}
			}
			else if (record2.height > record1.height && record2.height > record3.height){
				if (record1.height > record3.height) {
					cout << "\nthe following are the jumps from highest to lowest\n\n";
					cout << record2.height << "m " << "recorded on " << record2.date << endl;
					cout << record1.height << "m " << "recorded on " << record1.date << endl;
					cout << record3.height << "m " << "recorded on " << record3.date << endl;

				}
				else {
					cout << "\nthe following are the jumps from highest to lowest\n\n";
					cout << record2.height << "m " << "recorded on " << record2.date << endl;
					cout << record3.height << "m " << "recorded on " << record3.date << endl;
					cout << record1.height << "m " << "recorded on " << record1.date << endl;

				}
			}
			else {
				if (record1.height > record2.height) {
					cout << "\nthe following are the jumps from highest to lowest\n\n";
					cout << record3.height << "m " << "recorded on " << record3.date << endl;
					cout << record1.height << "m " << "recorded on " << record1.date << endl;
					cout << record2.height << "m " << "recorded on " << record2.date << endl;

				}
				else {
					cout << "\nthe following are the jumps from highest to lowest\n\n";
					cout << record3.height << "m " << "recorded on " << record3.date << endl;
					cout << record2.height << "m " << "recorded on " << record2.date << endl;
					cout << record1.height << "m " << "recorded on " << record1.date << endl;

				}

			}*/

			//18. Fat Gram Calcualtor
			/*double calories, fat_grams, percent_fat, fat_calories;
			bool check,check2;

			cout << "Write a program that asks for the number of caloriesand fat grams in a food.The program should display the percentage of calories that come from fat.\n" <<
				"If the calories from fat are less than 30% of the total calories of the food, it should also display a message indicating that the food is low in fat.\n" <<
				"One gram of fat has 9 calories, so\n" <<
				"Calories from fat  fat grams * 9\n"
				"The percentage of calories from fat can be calculated as 'Calories from fat' / 'total calories'\n\n" <<
				"Input Validation : Make sure the number of caloriesand fat grams are not less than 0.\n" <<
				"Also, the number of calories from fat cannot be greater than the total number of calories.\n" <<
				"If that happens, display an error message indicating that either the calories or fat grams were incorrectly entered.\n" << endl;

				do {
					check = true;
					check2 = true;
					cout << "Please enter the number of calories in the food: ";
					cin >> calories;

					cout << "\nPlease enter the number of grams of fat in the food: ";
					cin >> fat_grams;

					if (calories <= 0 || fat_grams <= 0) {
						cout << "\nPlease re-enter values greater than 0 for both calories and grams of fat.\n";
						check = false;
						check2 = false;
					}
					if (check2 == true) {
						if(fat_grams*9 > calories){
							cout << "\nPlease re-enter grams of fat or calories.\nThe grams of fat in calories was greater than the calories total.\n";
							check = false;
						}

					}
				} while (check == false);

				fat_calories = fat_grams * 9;
				percent_fat = fat_calories / calories;

				cout << fixed << setprecision(2);
				cout << "The percentage of calories coming from grams of fat in the food item is " << percent_fat * 100 << " %.";
				if (percent_fat < .30) {
					cout << "The food item is low fat because it's fat calorie count is 30% or less than the total calorie count.";
				}*/

				//19. Spectral Analysis
			/*	double wavelength;

				cout << "This program will classify an electromagnetic wave raidiation given it's wavelength in meeters.\n";
				cout << "Note that these waves are very small. Enter small numbers (i.e. '.0001').\n";

				for (int i = 0; i < 5; i++) {

					cout << "Please enter the wavelength in meters(m): ";
					cin >> wavelength;

					if (wavelength >= 1e-2) {
						cout << " The wavelength is a 'Radio Wave'.";
					}
					else if (wavelength < 1e-2 && wavelength >= 1e-3) {
						cout << " The wavelength is a 'Microwave'.";
					}
					else if (wavelength < 1e-3 && wavelength >= 7e-7) {
						cout << " The wavelength is a 'Infrared'.";
					}
					else if (wavelength < 7e-7 && wavelength >= 4e-7) {
						cout << " The wavelength is a 'Visible Light'.";
					}
					else if (wavelength < 4e-7 && wavelength >= 1e-8) {
						cout << " The wavelength is a 'Ultraviolet'.";
					}
					else if (wavelength < 1e-8 && wavelength >= 1e-11) {
						cout << " The wavelength is a 'X Rays'.";
					}
					else if (wavelength < 1e-11) {
						cout << " The wavelength is a 'Gamma Rays'.";
					}
					cout << endl;
				}*/

				//20.The Speed Of Sound
				/*double option, distance, time, speed, air = 1100, water = 4900, steel = 16400;
				bool check;
				string medium;


				cout << "This program will ask you to choose one of the following three items.\n" <<
					"It will then request a distance for sound to travel in that medium and\nit will give you the time it takes for sound to travel in that medium.\n";

				cout << setw(11) << left << "Option(1):" << setw(5) << left << "Air" << endl;
				cout << setw(11) << left << "Option(2):" << setw(5) << left << "Water" << endl;
				cout << setw(11) << left << "Option(3):" << setw(5) << left << "Steel" << endl;

				cout << "\nPlease enter an option number: ";
				cin >> option;

				while (!(option) || option < 1 || option > 3) { //Checks to see if inputed value is an integer. Also checks if the value entered is between 1 and 3.
					cin.clear(); //clears the error flag given that user has inputed a non integer value
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
					cout << "Invalid input. The options are '1', '2' or '3'. Try again.";
					cout << "\nPlease enter an option number: ";
					cin >> option;
				}

				if (option == 1) {
					medium = "air";
					speed = air;
				}
				else if (option == 2) {
					medium = "water";
					speed = water;
				}
				else {
					medium = "steel";
					speed = steel;
				}

				cout << "Please enter the distance the sound will travel in this medium in feet(ft): ";
				cin >> distance;
				while (!(distance) || distance <= 0) { //Checks to see if inputed value is an integer. Also checks if the value entered is less than 0.
					cin.clear(); //clears the error flag given that user has inputed a non integer value
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
					cout << "Invalid input. The distance must be greater than 0.  Try again.";
					cout << "\nPlease enter the distance the sound will travel in this medium in feet(ft): ";
					cin >> distance;
				}

				time = distance / speed;

				cout << fixed << setprecision(4);
				cout << "The sound will travel across " << medium << " in " << time << " second(s).";*/

				//20.The Speed Of Sound
				/*double option, distance, time, speed, air = 1100, water = 4900, steel = 16400;
				bool check;
				string medium;


				cout << "This program will ask you to choose one of the following three items.\n" <<
					"It will then request a distance for sound to travel in that medium and\nit will give you the time it takes for sound to travel in that medium.\n";

				cout << setw(11) << left << "Option(1):" << setw(5) << left << "Air" << endl;
				cout << setw(11) << left << "Option(2):" << setw(5) << left << "Water" << endl;
				cout << setw(11) << left << "Option(3):" << setw(5) << left << "Steel" << endl;

				cout << "\nPlease enter an option number: ";
				cin >> option;

				while (!(option) || option < 1 || option > 3) { //Checks to see if inputed value is an integer. Also checks if the value entered is between 1 and 3.
					cin.clear(); //clears the error flag given that user has inputed a non integer value
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
					cout << "Invalid input. The options are '1', '2' or '3'. Try again.";
					cout << "\nPlease enter an option number: ";
					cin >> option;
				}

				if (option == 1) {
					medium = "air";
					speed = air;
				}
				else if (option == 2) {
					medium = "water";
					speed = water;
				}
				else {
					medium = "steel";
					speed = steel;
				}

				cout << "Please enter the distance the sound will travel in this medium in feet(ft): ";
				cin >> distance;
				while (!(distance) || distance <= 0) { //Checks to see if inputed value is an integer. Also checks if the value entered is less than 0.
					cin.clear(); //clears the error flag given that user has inputed a non integer value
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
					cout << "Invalid input. The distance must be greater than 0.  Try again.";
					cout << "\nPlease enter the distance the sound will travel in this medium in feet(ft): ";
					cin >> distance;
				}

				time = distance / speed;

				cout << fixed << setprecision(4);
				cout << "The sound will travel across " << medium << " in " << time << " second(s).";*/

				//21. The Speed of Sound in Gases
				/*double option, distance, time, density, carbon_dioxide = 258.0, air = 331.5, helium = 972.0, hydrogen = 1270.0;
				bool check;
				string medium;


				cout << "This program will ask you to choose one of the following four items.\n" <<
				"It will then request the amount of time for sound to travel in that medium and\nit will give you the distance from where the sound origniated.\n";

				cout << setw(11) << left << "Option(1):" << setw(5) << left << "Carobon Dioxide" << endl;
				cout << setw(11) << left << "Option(2):" << setw(5) << left << "Air" << endl;
				cout << setw(11) << left << "Option(3):" << setw(5) << left << "Helium" << endl;
				cout << setw(11) << left << "Option(4):" << setw(5) << left << "Hydrogen" << endl;

				cout << "\nPlease enter an option number: ";
				cin >> option;

				while (!(option) || option < 1 || option > 4) { //Checks to see if inputed value is an integer. Also checks if the value entered is between 1 and 3.
					cin.clear(); //clears the error flag given that user has inputed a non integer value
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
					cout << "Invalid input. The options are '1', '2', '3' or '4'. Try again.";
					cout << "\nPlease enter an option number: ";
					cin >> option;
				}

				if (option == 1) {
					medium = "carbon dioxide";
					density = carbon_dioxide;
				}
				else if (option == 2) {
					medium = "air";
					density = air;
				}
				else if (option == 3) {
					medium = "helium";
					density = helium;
				}
				else {
					medium = "hydrogen";
					density = hydrogen;
				}

				cout << "Please enter the amount of time it took the sound to reach in seconds(s): ";
				cin >> time;
				while (!(time) || time <= 0 || time > 30) { //Checks to see if inputed value is an integer. Also checks if the value entered is less than 0.
					cin.clear(); //clears the error flag given that user has inputed a non integer value
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
					cout << "Invalid input. The time must be greater than 0 and less than 30.  Try again.\n";
					cout << "Please enter the amount of time it took the sound to reach in seconds(s): ";
					cin >> time;
				}

				distance = time*density;

				cout << fixed << setprecision(4);
				cout << "The sound traveled " << distance << "(m) in " << time << " second(s).";*/


				//22. Freezing and Boiling Points
			/*cout << "A program that asks the user to enter a temperature and then shows all the substances that will freeze at that temperature and all that will boil at that temperature.\n" <<
			"For example, if the user enters -20 the program should report that water will freezeand oxygen will boil at that temperature.\n\n";

			int temp;
			string freeze_eth = "ethyl alchohol", freeze_mer = "mercury", freeze_oxy = "oxygen", freeze_wat = "water";
			string boil_eth ="ethyl alchohol", boil_mer = "mercury", boil_oxy = "oxygen", boil_wat = "water";

			cout << "Please enter a temperature in Farenheit(F): ";
			cin >> temp;

			while (!(temp)) { //Checks to see if inputed value is an integer.
				cin.clear(); //clears the error flag given that user has inputed a non integer value
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user input untill it reaches the end of the input or encounters a '\n'(new line) value.
				cout << "Invalid input.  Try again.\n";
				cout << "Please enter the temperature ";
				cin >> temp;
			}
			if (temp >= 676) { //if this is true then all substances will boil
				cout << "The following the substance(s) boil at " << temp << "(F): " << boil_eth << ", " << boil_mer << ", " << boil_oxy << ", " << boil_wat << endl;
			}
			else if (temp < 676 && temp >= 212) {
				cout << "The following the substance(s) boil at " << temp << "(F): " << boil_eth << ", " << boil_oxy << ", " << boil_wat << endl;
			}
			else if (temp < 212 && temp >= 172) {
				cout << "The following the substance(s) boil at " << temp << "(F): " << boil_oxy << ", " << boil_wat << endl;
			}
			else if (temp < 172 && temp >= -306) {
				cout << "The following the substance(s) boil at " << temp << "(F): " << boil_oxy << endl;
			}

			if (temp <= -362) { //if this is true then all substances will freeze
				cout << "\nThe following the substance(s) freeze at " << temp << "(F): " << freeze_eth << ", " << boil_mer << ", " << freeze_oxy << ", " << freeze_wat<< endl;
			}
			else if (temp > -362 && temp <= -173) {
				cout << "\nThe following the substance(s) freeze at " << temp << "(F): " << freeze_eth << ", " << freeze_mer << ", " << freeze_wat << endl;
			}
			else if (temp > -173 && temp <= -38) {
				cout << "\nThe following the substance(s) freeze at " << temp << "(F): " << freeze_mer << ", " << freeze_wat << endl;
			}
			else if (temp > -38 && temp <  = 32) {
				cout << "\nThe following the substance(s) freeze at " << temp << "(F): " << freeze_wat << endl;
			}*/

			//23.Geomtry Calculator

			/*int choice, radius, length, width, height;

			float pi = 3.14159;


			cout << "Geometry Calculator\n";
			cout << "1. Calculate the area of a circle\n";
			cout << "2. Calculate the area of a rectangle\n";
			cout << "3. Calculate the area of a triangle\n\n";

			cout << "Please enter a choice: ";

			while (!(cin >> choice) || choice < 1 || choice > 3) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "You have entered wrong input\n" << endl;
				cout << "Please enter a choice: ";
			}


			switch (choice) {
			case (1):
				cout << "Please enter the radius of the cirlce in inches(in): ";
				cin >> radius;
				cout << "The area of the circle is: " << pi * (radius * 2) << " inches." << endl;
					break;
			case (2):
				cout << "Please enter the length of the rectangle in inches(in): ";
				cin >> length;
				cout << "Please enter the width of the rectangle in inches(in): ";
				cin >> width;
				cout << "The area of the rectangle is: " << width * length << " inches." << endl;
				break;
			case (3):
				cout << "Please enter the length of the triangle in inches(in): ";
				cin >> length;
				cout << "Please enter the height in inches(in): ";
				cin >> height;
				cout << "The area of the triangle is: " << (width * length)/2 << " inches." << endl;
				break;
			default:
				cout << "This should never output";
			}*/

			//24. Long-Distance Calls

	/*float calltime;
	float starttime;
	float chargerate;
	float check;
	bool stop;
	float totalcharge;
	float total_call_time_in_minutes, total_start_time_in_minutes;

	
		do {
			stop = 0;
			cout << "Please enter the start time of the call: ";
			cin >> starttime;
			cout << "Please enter the number of hours and minutes spent on a call in this format 'HH.MM'(ex. 2.20): ";
			cin >> calltime;
			check = calltime - static_cast<int>(calltime);
			if (0.59 < check && 23.59 < calltime) {
				cout << "Please enter realistc hours and minutes. (anything bellow 23.59)\n\n";
				stop = 1;
			}
			if (stop == 0 && 0.59 < check) {
				cout << "Please enter minutes between 0 and 59.\n\n";
			}

		} while (0.59 < check || 23.59 < calltime);

		total_start_time_in_minutes = ((starttime - static_cast<int>(starttime)) * 100) + ((static_cast<int>(starttime) * 60));

		total_call_time_in_minutes = ((calltime - static_cast<int>(calltime)) * 100) + ((static_cast<int>(calltime) * 60));

		//cout << total_start_time_in_minutes << endl;
		//cout << total_call_time_in_minutes << endl;

		//calltime - (calltime - static_cast<int>(calltime));

		//419 minutes is 6:59 (six hours and fifty nine minutes from the morning 0:00 AM)
		//1141 minutes is 19:01 (ninteen hours and one minute from the morning 0:00 AM)
		//1439 minutes is 23:59 (twenty three hours and 59 minutes from the morning 0:00 AM)

		if (total_start_time_in_minutes >= 0 && total_start_time_in_minutes <= 419) {// This is the time of 0:00 AM - 6:59 AM in minutes
			chargerate = 0.05; // charge rate for the time period of 0:00 AM - 6:59 AM;
			if (total_call_time_in_minutes + total_start_time_in_minutes > 419) { // Checking to see if the call continues past 6:59;
				if (total_call_time_in_minutes + total_start_time_in_minutes > 1141) { // Checking to see if the call continues past 19.01
					if (total_call_time_in_minutes + total_start_time_in_minutes > 1439) { // Checking to see if the call continues past 23.59
						int charge1 = (419 - total_start_time_in_minutes) * chargerate; //This is the amount charged for the call during the time period 0:00 and 6.59
						chargerate = 0.45;
						int charge2 = (1141 - 419) * chargerate;
						chargerate = 0.20;
						int charge3 = (1439 - 1141) * chargerate;
						chargerate = 0.05;
						int charge4 = ((total_start_time_in_minutes + 1439) - total_call_time_in_minutes) * chargerate; //This is the amount charged for the call during the time period 7:00 and 19.00

						totalcharge = charge1 + charge2 + charge3 + charge4;
						cout << "The total charged for call is: $" << totalcharge << endl;
					}
					else { //this outputs the charge for a call that begins from the hours of 0:00 - 6.59 and 19:01 23.59
						int charge1 = (419 - total_start_time_in_minutes) * chargerate;
						chargerate = 0.45;
						int charge2 = (1141 - 419) * chargerate;
						chargerate = 0.20;
						int charge3 = (total_call_time_in_minutes - ((1141 - 419) + (419 - total_start_time_in_minutes))) * chargerate;

						totalcharge = charge1 + charge2 + charge3;
						cout << "The total charged for call is: $" << totalcharge << endl;
						return 0;

					}
				}
				else { //This else statement is for a call that is during the periods of 0:00 - 6.59 AND 7.00 - 19.00
					int charge1 = (419 - total_start_time_in_minutes) * chargerate; //This is the amount charged for the call during the time period 0:00 and 6.59
					chargerate = 0.45; //changing the charge rate for the time period of 7:00 - 19:00
					int charge2 = (total_call_time_in_minutes - (419 - total_start_time_in_minutes)) * chargerate; //This is the amount charged for the call during the time period 7:00 and 19.00

					totalcharge = charge1 + charge2; //this adds the minutes charged from the time between 0:00 - 6.59 AND 7.00 - 19.00

					cout << "The total charged for call is: $" << totalcharge << endl;
				}

			}
			else { //This else statement is for a call that is during the periods of 0:00 - 6:59
				int charge1 = total_call_time_in_minutes * chargerate; //This is the amount charged for the call during the time period 0:00 and 6.59
				cout << "The charges for this call are: $" << charge1 << endl;
			}
	}
	//420 minutes is 7.00 hours
	//1140 minutes is 19.00 hours
	else if (starttime >= 420 && starttime <= 1140) {
			chargerate = 0.45;
		if ((total_call_time_in_minutes + total_start_time_in_minutes) > 1140) {
			if ((total_call_time_in_minutes + total_start_time_in_minutes) > 1439) {
				if ((total_call_time_in_minutes+total_start_time_in_minutes) >= 1860) {

				}
			}
			
		}


	}
	else if (starttime >= 19.01 && starttime <= 23.59) {
		chargerate = 0.20;
	}*/

	//25. Mobile Service Provider
	
	/*char package;
	double base_charge;
	int check1 = 0;
	int minutes;
	double additional_rate;

	cout << "Please enter the subscription package you have with us." << endl;
	cout << "The packages are either 'A', 'B', or 'C'." << endl;
	cout << "Package: ";

	do {
		if (check1 > 0) {
			cout << "Please enter a correct subscription package type." << endl;
			cout << "Package: ";
		}
		cin >> package;
		check1++;
	} while (package != 'A' && package != 'B' && package != 'C');
	cout << "How many minutes has the customer used this month?" << endl;
	cout << "Minutes: ";
	cin >> minutes;
	switch (package) {
	case 'A':

		base_charge = 39.99;

		if (minutes > 450) {
			additional_rate = (minutes - 450)*0.45;
		}
		cout << fixed << setprecision(2) << showpoint;
		cout << "The bill for this customer is: $" << additional_rate + base_charge << endl;

		break;
	case 'B':

		base_charge = 59.99;

		if (minutes > 900) {
			additional_rate = (minutes - 450) * 0.40;
		}
		cout << fixed << setprecision(2) << showpoint;
		cout << "The bill for this customer is: $" << additional_rate + base_charge << endl;

		break;
	case 'C':
		cout << fixed << setprecision(2) << showpoint;

		base_charge = 69.99;
		cout << "The bill for this customer is: $" << base_charge << endl;
		break;
		}*/

	//26. Mobile Service Provider, Part 2
	/*char package;
	double base_charge;
	int check1 = 0;
	int minutes;
	double additional_rate;
	double total1, total2, total3;

	cout << "Please enter the subscription package you have with us." << endl;
	cout << "The packages are either 'A', 'B', or 'C'." << endl;
	cout << "Package: ";

	do {
		if (check1 > 0) {
			cout << "Please enter a correct subscription package type." << endl;
			cout << "Package: ";
		}
		cin >> package;
		check1++;
	} while (package != 'A' && package != 'B' && package != 'C');
	cout << "How many minutes has the customer used this month?" << endl;
	cout << "Minutes: ";
	cin >> minutes;
	switch (package) {
	case 'A':

		base_charge = 39.99;
		if (minutes > 450) {
			additional_rate = (minutes - 450) * 0.45;
		}
		cout << fixed << setprecision(2) << showpoint;
		total1 = additional_rate + base_charge;

		base_charge = 59.99;
		if (minutes > 900) {
			additional_rate = (minutes - 900) * 0.40;
		}
		total2 = additional_rate + base_charge;

		total3 = 69.99;

		cout << "Package Type: " << package << endl;
		cout << "Total Minutes: " << minutes << endl;
		cout << "The bill for this customer is: $" << total1 << endl << endl;

		if (total1 > total2) {

			cout << "If the customer had instead chosen package 'B' then they would have saved: $" << total1 - total2 << endl;
		}

		if (total1 > total3) {
			cout << "If the customer had instead choosen package 'C' then they would have saved: $" << total1 - total3 << endl;
		}

		break;
	case 'B':


		base_charge = 59.99;
		if (minutes > 900) {
			additional_rate = (minutes - 900) * 0.40;
		}
		total2 = additional_rate + base_charge;

		total3 = 69.99;

		cout << "Package Type: " << package << endl;
		cout << "Total Minutes: " << minutes << endl;
		cout << "The bill for this customer is: $" << total2 << endl << endl;

		if (total2 > total3) {

			cout << "If the customer had instead chosen package 'C' then they would have saved: $" << total2 - total3 << endl;
		}

		break;
	case 'C':
		cout << fixed << setprecision(2) << showpoint;

		base_charge = 69.99;
		cout << "The bill for this customer is: $" << base_charge << endl;
		break;*/
	
	//27. Mobile Service Provider, part 3

/*
	string month;
	int minute_limit;
	bool check1 = false;

	cout << "What month are the minutes being charged to?" << endl;
	cout << "Please enter the name of the month: ";
	
	do {
		cin >> month;

		if (month == "January") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "February") {
			minute_limit = 40320;
			check1 = false;
		}
		else if (month == "March") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "April") {
			minute_limit = 43200;
			check1 = false;
		}
		else if (month == "May") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "June") {
			minute_limit = 43200;
			check1 = false;
		}
		else if (month == "July") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "August") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "September") {
			minute_limit = 43200;
			check1 = false;
		}
		else if (month == "October") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "November") {
			minute_limit = 43200;
			check1 = false;
		}
		else if (month == "December") {
			minute_limit = 44640;
			check1 = false;
		}
		else {
			check1 = true;
			cout << "\nPlease enter a month: ";
		}
	} while (check1 == true);


	char package;
	double base_charge;
	int minutes;
	int check2 = 0;
	int check3 = 0;
	double additional_rate;

	cout << "\nPlease enter the subscription package you have with us." << endl;
	cout << "The packages are either 'A', 'B', or 'C'." << endl;
	cout << "Package: ";

	do {
		if (check2 > 0) {
			cout << "Please enter a correct subscription package type." << endl;
			cout << "Package: ";
		}
		cin >> package;
		check2++;
	} while (package != 'A' && package != 'B' && package != 'C');
	cout << "How many minutes has the customer used this month?" << endl;
	cout << "Minutes: ";

	do {
		check3 = 0;
		cin >> minutes;
		if (minutes > minute_limit) {
			check3 = 1;
			cout << "The amount of minutes is greater than the minutes in month. Please re-enter minutes within the range of the month." << endl;
			cout << "Minutes: ";
		}
	} while (check3 == 1);

	switch (package) {
	case 'A':

		base_charge = 39.99;

		if (minutes > 450) {
			additional_rate = (minutes - 450)*0.45;
		}
		cout << fixed << setprecision(2) << showpoint;
		cout << "The bill for this customer is: $" << additional_rate + base_charge << endl;

		break;
	case 'B':

		base_charge = 59.99;

		if (minutes > 900) {
			additional_rate = (minutes - 450) * 0.40;
		}
		cout << fixed << setprecision(2) << showpoint;
		cout << "The bill for this customer is: $" << additional_rate + base_charge << endl;

		break;
	case 'C':
		cout << fixed << setprecision(2) << showpoint;

		base_charge = 69.99;
		cout << "The bill for this customer is: $" << base_charge << endl;
		break;
		}
		*/

	return 0;
}


