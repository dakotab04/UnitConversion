#include <iostream>

void cm_to_cm(double num_cm)
{
	std::cout << num_cm << " centimeters is: " << num_cm << " centimeters" << '\n';
}

void inches_to_cm(double num_inches)
{
	std::cout << num_inches << " inches is: " << num_inches * 2.54 << " centimeters" << '\n';
}

void feet_to_cm(double num_feet)
{
	std::cout << num_feet << " feet is: " << num_feet * 30.48 << " centimeters" << '\n';
}

void yards_to_cm(double num_yards)
{
	std::cout << num_yards << " yards is: " << num_yards * 91.4 << " centimeters" << '\n';
}

void miles_to_cm(double num_miles)
{
	std::cout << num_miles << " miles is: " << num_miles * 160934.4 << " centimeters" << '\n';
}

void cm_to_inches(double num_cm)
{
	std::cout << num_cm << " centimeters is: " << num_cm * 0.39370079 << " inches" << '\n';
}

void inches_to_inches(double num_inches)
{
	std::cout << num_inches << " inches is: " << num_inches << " inches" << '\n';
}

void feet_to_inches(double num_feet)
{
	std::cout << num_feet << " feet is: " << num_feet * 12 << " inches" << '\n';
}

void yards_to_inches(double num_yards)
{
	std::cout << num_yards << " yards is: " << num_yards * 36 << " inches" << '\n';
}

void miles_to_inches(double num_miles)
{
	std::cout << num_miles << " miles is: " << num_miles * 63360 << " inches" << '\n';
}

void cm_to_feet(double num_cm)
{
	std::cout << num_cm << " centimeters is: " << num_cm * 0.0328084 << " feet" << '\n';
}

void inches_to_feet(double num_inches)
{
	std::cout << num_inches << " inches is: " << num_inches * 0.08333333 << " feet" << '\n';
}

void feet_to_feet(double num_feet)
{
	std::cout << num_feet << " feet is: " << num_feet << " feet" << '\n';
}

void yards_to_feet(double num_yards)
{
	std::cout << num_yards << " yards is: " << num_yards * 3 << " feet" << '\n';
}

void miles_to_feet(double num_miles)
{
	std::cout << num_miles << " miles is: " << num_miles * 5280 << " feet" << '\n';
}

void cm_to_yards(double num_cm)
{
	std::cout << num_cm << " centimeters is: " << num_cm * 0.01093613 << " yards" << '\n';
}

void inches_to_yards(double num_inches)
{
	std::cout << num_inches << " inches is: " << num_inches * 0.02777778 << " yards" << '\n';
}

void feet_to_yards(double num_feet)
{
	std::cout << num_feet << " feet is: " << num_feet * 0.33333333 << " yards" << '\n';
}

void yards_to_yards(double num_yards)
{
	std::cout << num_yards << " yards is: " << num_yards << " yards" << '\n';
}

void miles_to_yards(double num_miles)
{
	std::cout << num_miles << " miles is: " << num_miles * 1760 << " yards" << '\n';
}

void cm_to_miles(double num_cm)
{
	std::cout << num_cm << " centimeters is: " << num_cm * 0.00000621 << " miles" << '\n';
}

void inches_to_miles(double num_inches)
{
	std::cout << num_inches << " inches is: " << num_inches * 0.00001578 << " miles" << '\n';
}

void feet_to_miles(double num_feet)
{
	std::cout << num_feet << " feet is: " << num_feet * 0.00018939 << " miles" << '\n';
}

void yards_to_miles(double num_yards)
{
	std::cout << num_yards << " yards is: " << num_yards * 0.00056818 << " miles" << '\n';
}

void miles_to_miles(double num_miles)
{
	std::cout << num_miles << " miles is: " << num_miles << " miles" << '\n';
}

void prompt(int selection1, int selection2)
{
	std::cout << "Enter a number of your specified unit.\n"; // Prompts user to enter number.

	double num_unit{}; // Initializes number of unit(s).
	std::cin >> num_unit;

	if (selection1 == 1 and selection2 == 1)
	{
		cm_to_cm(num_unit); // If user chooses cm to cm
	}
	if (selection1 == 2 and selection2 == 1) // If user chooses inches to cm
	{
		inches_to_cm(num_unit);
	}
	if (selection1 == 3 and selection2 == 1) // If user chooses feet to cm
	{
		feet_to_cm(num_unit);
	}
	if (selection1 == 4 and selection2 == 1) // If user chooses yards to cm
	{
		yards_to_cm(num_unit);
	}
	if (selection1 == 5 and selection2 == 1) // If user chooses miles to cm
	{
		miles_to_cm(num_unit);
	}
	if (selection1 == 1 and selection2 == 2) // If user chooses cm to inches
	{
		cm_to_inches(num_unit);
	}
	if (selection1 == 2 and selection2 == 2) // If user chooses inches to inches
	{
		inches_to_inches(num_unit);
	}
	if (selection1 == 3 and selection2 == 2) // If user chooses feet to inches
	{
		feet_to_inches(num_unit);
	}
	if (selection1 == 4 and selection2 == 2) // If user chooses yards to inches
	{
		yards_to_inches(num_unit);
	}
	if (selection1 == 5 and selection2 == 2) // If user chooses miles to inches
	{
		miles_to_inches(num_unit);
	}
	if (selection1 == 1 and selection2 == 3) // If user chooses cm to feet
	{
		cm_to_feet(num_unit);
	}
	if (selection1 == 2 and selection2 == 3) // If user chooses inches to feet
	{
		inches_to_feet(num_unit);
	}
	if (selection1 == 3 and selection2 == 3) // If user chooses feet to feet
	{
		feet_to_feet(num_unit);
	}
	if (selection1 == 4 and selection2 == 3) // If user chooses yards to feet
	{
		yards_to_feet(num_unit);
	}
	if (selection1 == 5 and selection2 == 3) // If user chooses miles to feet
	{
		miles_to_feet(num_unit);
	}
	if (selection1 == 1 and selection2 == 4) // If user chooses cm to yards
	{
		cm_to_yards(num_unit);
	}
	if (selection1 == 2 and selection2 == 4) // If user chooses inches to yards
	{
		inches_to_yards(num_unit);
	}
	if (selection1 == 3 and selection2 == 4) // If user chooses feet to yards
	{
		feet_to_yards(num_unit);
	}
	if (selection1 == 4 and selection2 == 4) // If user chooses yards to yards
	{
		yards_to_yards(num_unit);
	}
	if (selection1 == 5 and selection2 == 4) // If user chooses miles to yards
	{
		miles_to_yards(num_unit);
	}
	if (selection1 == 1 and selection2 == 5) // If user chooses cm to miles
	{
		cm_to_miles(num_unit);
	}
	if (selection1 == 2 and selection2 == 5) // If user chooses inches to miles
	{
		inches_to_miles(num_unit);
	}
	if (selection1 == 3 and selection2 == 5) // If user chooses feet to miles
	{
		feet_to_miles(num_unit);
	}
	if (selection1 == 4 and selection2 == 5) // If user chooses yards to miles
	{
		yards_to_miles(num_unit);
	}
	if (selection1 == 5 and selection2 == 5) // If user chooses miles to miles
	{
		miles_to_miles(num_unit);
	}
}

void selection()
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

	prompt(selection1, selection2); // Calls upon prompt function to decide what units to convert.
}

int main()
{
	selection();

	return 0;
}