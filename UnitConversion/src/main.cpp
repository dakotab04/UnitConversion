#include <iostream>

void cm_to_cm()
{
	std::cout << "Enter a number (in cm): " << '\n'; // Prompts user to enter number.

	double num_cm{};
	std::cin >> num_cm;

	std::cout << num_cm << " centimeters to centimeters is: " << num_cm << '\n';
}

void inches_to_cm()
{
	std::cout << "Enter a number (in inches): " << '\n'; // Prompts user to enter number.

	double num_inches{}; // Initializes num as 0, we use double for precision.
	std::cin >> num_inches; // We store the user's number for later.

	// Since 1 inch is 2.54 cm, we convert using num * 2.54 and return to user.
	std::cout << num_inches << " inches to centimeters is: " << num_inches * 2.54 << " cm" << '\n';
}

void feet_to_cm()
{
	std::cout << "Enter a number (in feet): " << '\n';

	double num_feet{}; // direct list initialization
	std::cin >> num_feet;

	std::cout << num_feet << " feet to centimeters is: " << num_feet * 30.48 << " cm" << '\n';
}

void yards_to_cm()
{
	std::cout << "Enter a number (in yards): " << '\n';

	double num_yards{};
	std::cin >> num_yards;

	std::cout << num_yards << " yards to centimeters is: " << num_yards * 91.4 << " cm" << '\n';
}

void miles_to_cm()
{
	std::cout << "Enter a number (in miles): " << '\n';

	double num_miles{};
	std::cin >> num_miles;

	std::cout << num_miles << " miles to centimeters is: " << num_miles * 160934.4 << " cm" << '\n';
}

void main()
{
	std::cout << "What unit of measurement would you like to convert? Select a number." << '\n';
	std::cout << "	1) centimeters" << '\n';
	std::cout << "	2) inches" << '\n';
	std::cout << "	3) feet" << '\n';
	std::cout << "	4) yards" << '\n';
	std::cout << "	5) miles" << '\n';

	int selection1{}; // Main unit of measurement
	std::cin >> selection1;

	std::cout << "What unit of measurement would you like your number to be converted to? Select a number." << '\n';
	std::cout << "	1) centimeters" << '\n';
	std::cout << "	2) inches" << '\n';
	std::cout << "	3) feet" << '\n';
	std::cout << "	4) yards" << '\n';
	std::cout << "	5) miles" << '\n';

	int selection2{}; // What unit is being converted into
	std::cin >> selection2;
	
	if (selection1 == 1 and selection2 == 1)
	{
		cm_to_cm(); // If user chooses cm to cm
	}
	if (selection1 == 2 and selection2 == 1) // If user chooses inches to cm
	{
		inches_to_cm();
	}
	if (selection1 == 3 and selection2 == 1) // If user chooses feet to cm
	{
		feet_to_cm();
	}
	if (selection1 == 4 and selection2 == 1) // If user chooses yards to cm
	{
		yards_to_cm();
	}
	if (selection1 == 5 and selection2 == 1) // If user chooses miles to cm
	{
		miles_to_cm();
	}
}