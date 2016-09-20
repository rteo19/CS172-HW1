//Ryan Teo
//CS172
//EX01_01

#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
using namespace std;

void ex01();
void ex02();
void ex03();
void doubles(int x);
void add(int x, int y);
void addOne(int &x);
void ex04();
void arrayValues(const int array[], int size);
void value(const int array[], int size);

int main()
{
	
	ex01();
	ex02();
	ex03();
	ex04();

}

void ex01()
{
	//Part A
	bool hasPassedTest = true;

	//Part B
	srand(time(NULL));
	int x = rand() % 10;
	int y = rand() % 10;

	if (x >= y)
	{
		cout << x << " is greater than or equal to " << y << endl;
	}
	else
	{
		cout << x << " is not greater than or equal to " << y << endl;
	}
	
	//Part C
	int numberOfShares;
	cout << "Enter a value: ";
	cin >> numberOfShares;
	if (numberOfShares < 100)
	{
		cout << numberOfShares << " is less than 100" << endl;
	}
	else
	{
		cout << numberOfShares << " is not less than 100" << endl;
	}

	//Part D
	int boxWidth;
	int bookWidth;
	cout << "Enter a box width and a book width: ";
	cin >> boxWidth >> bookWidth;
	if (boxWidth % bookWidth == 0)
	{
		cout << "The box width is evenly divisible by the book width." << endl;
	}
	else
	{
		cout << "The box width is not evenly divisible by the book width." << endl;
	}

	//Part E
	int shelfLife;
	int temp;
	cout << "Enter the shelf life of a box of chocolate and the temperature outside: ";
	cin >> shelfLife >> temp;

	if (temp > 90)
	{
		shelfLife = shelfLife - 4;
	}
	cout << "The shelf life is " << shelfLife << endl;

}

void ex02()
{
	//Part A
	int area;
	float side;
	float diagonal;

	cout << "Please enter the area of a square: ";
	cin >> area;
	side = sqrt(area);
	diagonal = side * sqrt(2);
	cout << "The length of the diagonal is " << diagonal << endl;

	//Part B
	char answer;
	cout << "Enter y or n: ";
	cin >> answer;
	if (answer == 'y')
	{
		cout << "yes" << endl;
	}
	else if (answer == 'n')
	{
		cout << "no" << endl;
	}

	//Part C
	char tab = '\t';

	//Part D
	string mailingAddress;
	cout << "Enter your mailing address: " << endl;
	
	//Part E
	string str = "";

}

void ex03()
{
	//Part A
	int ans;
	do
	{
		cout << "Enter a number between 1 and 10: ";
		cin >> ans;

		while (ans < 1 || ans > 10)
		{
			cout << "Invalid input, please try again: ";
			cin >> ans;
		}
	} while (ans < 1 || ans > 10);

	int e = ans;
	//Part B
	int cube;
	int sum = 0;
	for (int first = 1; first <= ans; first++)
	{
		cube = first * first * first;
		sum += cube;
	}
	cout << "The sum of the cubes from 1 to " << ans << " is " << sum << endl;

	//Part C
	do
	{
		cout << "*";
		ans--;
	} while (ans > 0);
	cout << endl;

	//Part D
	for (int even = 0; even < 41; even++)
	{
		if (even % 2 == 0)
		{
			cout << even << " ";
		}
	}
	cout << endl;

	//Part E
	doubles(e);

	//Part F
	srand(time(NULL));
	int x = rand() % 10;
	int y = rand() % 10;
	add(x, y);

}

void doubles(int x)
{
	x = x * 2;
	cout << x << endl;
}

void add(int x, int y)
{
	int sum = x + y;
	cout << sum << endl;
}

//Part G
void addOne(int &x)
{
	x = x + 1;
}

void ex04()
{
	//Part A
	int integers[5];
	cout << "Enter 5 integers: ";
	for (int i = 0; i < 5; i++) 
	{
		cin >> integers[i]; 
	}

	//Part B
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += integers[i];
	}

	cout << "The sum is " << sum << endl;

	int product = 1;
	for (int i = 0; i < 5; i++)
	{
		product = product * integers[i];
	}

	cout << "The product is " << product << endl;

	//Part C
	arrayValues(integers, 5);

	//Part D
	value(integers, 5);
}

void arrayValues(const int array[], int size) 
{

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void value(const int array[], int size)
{
	int userValue;
	int x = 999999999999;
	cout << "Enter a value: ";
	cin >> userValue;
	for (int i = 0; i < size; i++)
	{
		if (userValue == array[i])
		{
			cout << "The array contains " << userValue << endl;
			x = userValue;
		}
		
	}
	if (x != userValue)
	{
		cout << "The array does not contain " << userValue << endl;
	}


}
