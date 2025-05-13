#include <iostream>

void cm_to_cm()
{
	std::cout << "Enter a number (in cm): " << '\n'; // Prompts user to enter number.

	double num_cm{};
	std::cin >> num_cm;

	std::cout << num_cm << " centimeters is: " << num_cm << " centimeters" << '\n';
}

void inches_to_cm()
{
	std::cout << "Enter a number (in inches): " << '\n'; // Prompts user to enter number.

	double num_inches{}; // Initializes num as 0, we use double for precision.
	std::cin >> num_inches; // We store the user's number for later.

	// Since 1 inch is 2.54 cm, we convert using num * 2.54 and return to user.
	std::cout << num_inches << " inches is: " << num_inches * 2.54 << " centimeters" << '\n';
}

void feet_to_cm()
{
	std::cout << "Enter a number (in feet): " << '\n';

	double num_feet{}; // direct list initialization
	std::cin >> num_feet;

	std::cout << num_feet << " feet is: " << num_feet * 30.48 << " centimeters" << '\n';
}

void yards_to_cm()
{
	std::cout << "Enter a number (in yards): " << '\n';

	double num_yards{};
	std::cin >> num_yards;

	std::cout << num_yards << " yards is: " << num_yards * 91.4 << " centimeters" << '\n';
}

void miles_to_cm()
{
	std::cout << "Enter a number (in miles): " << '\n';

	double num_miles{};
	std::cin >> num_miles;

	std::cout << num_miles << " miles is: " << num_miles * 160934.4 << " centimeters" << '\n';
}

void cm_to_inches()
{
	std::cout << "Enter a number (in cm): " << '\n'; // Prompts user to enter number.

	double num_cm{};
	std::cin >> num_cm;

	std::cout << num_cm << " centimeters is: " << num_cm * 0.39370079 << " inches" << '\n';
}

void inches_to_inches()
{
	std::cout << "Enter a number (in inches): " << '\n'; // Prompts user to enter number.

	double num_inches{};
	std::cin >> num_inches;

	std::cout << num_inches << " inches is: " << num_inches << " inches" << '\n';
}

void feet_to_inches()
{
	std::cout << "Enter a number (in feet): " << '\n'; // Prompts user to enter number.

	double num_feet{};
	std::cin >> num_feet;

	std::cout << num_feet << " feet is: " << num_feet * 12 << " inches" << '\n';
}

void yards_to_inches()
{
	std::cout << "Enter a number (in yards): " << '\n'; // Prompts user to enter number.

	double num_yards{};
	std::cin >> num_yards;

	std::cout << num_yards << " yards is: " << num_yards * 36 << " inches" << '\n';
}

void miles_to_inches()
{
	std::cout << "Enter a number (in miles): " << '\n'; // Prompts user to enter number.

	double num_miles{};
	std::cin >> num_miles;

	std::cout << num_miles << " miles is: " << num_miles * 63360 << " inches" << '\n';
}

void cm_to_feet()
{
	std::cout << "Enter a number (in cm): " << '\n'; // Prompts user to enter number.

	double num_cm{};
	std::cin >> num_cm;

	std::cout << num_cm << " centimeters is: " << num_cm * 0.0328084 << " feet" << '\n';
}

void inches_to_feet()
{
	std::cout << "Enter a number (in inches): " << '\n'; // Prompts user to enter number.

	double num_inches{};
	std::cin >> num_inches;

	std::cout << num_inches << " inches is: " << num_inches * 0.08333333 << " feet" << '\n';
}

void feet_to_feet()
{
	std::cout << "Enter a number (in feet): " << '\n'; // Prompts user to enter number.

	double num_feet{};
	std::cin >> num_feet;

	std::cout << num_feet << " feet is: " << num_feet << " feet" << '\n';
}

void yards_to_feet()
{
	std::cout << "Enter a number (in yards): " << '\n'; // Prompts user to enter number.

	double num_yards{};
	std::cin >> num_yards;

	std::cout << num_yards << " yards is: " << num_yards * 3 << " feet" << '\n';
}

void miles_to_feet()
{
	std::cout << "Enter a number (in miles): " << '\n'; // Prompts user to enter number.

	double num_miles{};
	std::cin >> num_miles;

	std::cout << num_miles << " miles is: " << num_miles * 5280 << " feet" << '\n';
}

void cm_to_yards()
{
	std::cout << "Enter a number (in cm): " << '\n'; // Prompts user to enter number.

	double num_cm{};
	std::cin >> num_cm;

	std::cout << num_cm << " centimeters is: " << num_cm * 0.01093613 << " yards" << '\n';
}

void inches_to_yards()
{
	std::cout << "Enter a number (in inches): " << '\n'; // Prompts user to enter number.

	double num_inches{};
	std::cin >> num_inches;

	std::cout << num_inches << " inches is: " << num_inches * 0.02777778 << " yards" << '\n';
}

void feet_to_yards()
{
	std::cout << "Enter a number (in feet): " << '\n'; // Prompts user to enter number.

	double num_feet{};
	std::cin >> num_feet;

	std::cout << num_feet << " feet is: " << num_feet * 0.33333333 << " yards" << '\n';
}

void yards_to_yards()
{
	std::cout << "Enter a number (in yards): " << '\n'; // Prompts user to enter number.

	double num_yards{};
	std::cin >> num_yards;

	std::cout << num_yards << " yards is: " << num_yards << " yards" << '\n';
}

void miles_to_yards()
{
	std::cout << "Enter a number (in miles): " << '\n'; // Prompts user to enter number.

	double num_miles{};
	std::cin >> num_miles;

	std::cout << num_miles << " miles is: " << num_miles * 1760 << " yards" << '\n';
}

int main()
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
	if (selection1 == 1 and selection2 == 2) // If user chooses cm to inches
	{
		cm_to_inches();
	}
	if (selection1 == 2 and selection2 == 2) // If user chooses inches to inches
	{
		inches_to_inches();
	}
	if (selection1 == 3 and selection2 == 2) // If user chooses feet to inches
	{
		feet_to_inches();
	}
	if (selection1 == 4 and selection2 == 2) // If user chooses yards to inches
	{
		yards_to_inches();
	}
	if (selection1 == 5 and selection2 == 2) // If user chooses miles to inches
	{
		miles_to_inches();
	}
	if (selection1 == 1 and selection2 == 3) // If user chooses cm to feet
	{
		cm_to_feet();
	}
	if (selection1 == 2 and selection2 == 3) // If user chooses inches to feet
	{
		inches_to_feet();
	}
	if (selection1 == 3 and selection2 == 3) // If user chooses feet to feet
	{
		feet_to_feet();
	}
	if (selection1 == 4 and selection2 == 3) // If user chooses yards to feet
	{
		yards_to_feet();
	}
	if (selection1 == 5 and selection2 == 3) // If user chooses miles to feet
	{
		miles_to_feet();
	}
	if (selection1 == 1 and selection2 == 4) // If user chooses cm to yards
	{
		cm_to_yards();
	}
	if (selection1 == 2 and selection2 == 4) // If user chooses inches to yards
	{
		inches_to_yards();
	}
	if (selection1 == 3 and selection2 == 4) // If user chooses feet to yards
	{
		feet_to_yards();
	}
	if (selection1 == 4 and selection2 == 4) // If user chooses yards to yards
	{
		yards_to_yards();
	}
	if (selection1 == 5 and selection2 == 4) // If user chooses miles to yards
	{
		miles_to_yards();
	}

	return 0;
}