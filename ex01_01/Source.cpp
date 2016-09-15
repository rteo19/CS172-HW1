//Ryan Teo
//CS172
// EX01_01

#include <iostream>
using namespace std;

void ex02();

int main()
{
	
	ex02();

}

void ex02()
{
	int x;
	int y;
	
	
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


	int shelfLife;
	int temp;
	cout << "Enter the shelf life of a box of chocolate and the temperature outside: ";
	cin >> shelfLife >> temp;

	if (temp > 90)
	{
		shelfLife = shelfLife - 4;
	}
	cout << "The shelf life is " << shelfLife << endl;

	//9 % 3 = 0
}