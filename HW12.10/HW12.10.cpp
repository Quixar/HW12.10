#include <iostream>
using namespace std;

/// <summary>
/// prints numbers from 1 to n
/// </summary>
void task1()
{
	static int k = 0;
	k++;
	cout << k << "\n";
	if (k < 5)
	{
		task1();
	}
}

/// <summary>
/// prints numbers from A to B
/// </summary>
void task2()
{
	static int a = 1;
	static int b = 5;
	cout << a << "\n";
	if (a > b)
	{
		a--;
		task2();
	}
	else if (a < b)
	{
		a++;
		task2();
	}
}

/// <summary>
/// exact power of two
/// </summary>
/// <param name="number">enter the number</param>
/// <returns>is the number an exact power of 2</returns>
bool task3(int number)
{
	if (number == 1)
	{
		return true;
	}
	else if (number % 2 || number == 0)
	{
		return false;
	}
	task3(number / 2);
}

/// <summary>
/// sum of digits of a number
/// </summary>
/// <param name="number">enter the number</param>
/// <returns>sum of digit</returns>
int task4(int number)
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		number = number % 10 + task4(number / 10);
		return number;
	}
}

/// <summary>
/// output numbers from right to left
/// </summary>
/// <param name="number">enter the number</param>
/// <returns>numbers from right to left</returns>
int task5(int number)
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		int x = number % 10;
		cout << x << " ";
		number /= 10;
		task5(number);
		return number;
	}
}

/// <summary>
/// output numbers from left to right
/// </summary>
/// <param name="number">enter the number</param>
/// <returns>numbers from left to right</returns>
int task6(int number)
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		int x = number % 10;
		number /= 10;
		task6(number);
		cout << x << " ";
		return number;
	}
}

/// <summary>
/// output numbers from left to right
/// </summary>
/// <param name="number">enter the number</param>
/// <returns>numbers from left to right</returns>
int task7(int number)
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		int x = number % 10;
		cout << x << " ";
		number /= 10;
		task7(number);
		return number;
	}
}

/// <summary>
/// calculates the power of a number
/// </summary>
/// <param name="number">enter the number</param>
/// <param name="degree">enter the degree</param>
/// <returns>number to the entered power</returns>
int task8(int number, int degree)
{
	if (degree == 0)
	{
		return 1;
	}
	else
	{
		return number * task8(number, degree - 1);
	}
}

/// <summary>
/// calculates the sum of numbers in a certain range
/// </summary>
/// <param name="start">start of range</param>
/// <param name="end">end of range</param>
/// <returns>sum if numbers in range</returns>
int task9(int start, int end)
{
	if (end >= start)
	{
		static int  sum = 0;
		sum += end;
		task9(start, end - 1);
		return sum;
	}
	else
	{
		return 0;
	}
}

int main()
{
	task1();
	task2();
	int number;
	cout << "Enter number: ";
	cin >> number;
	cout << "\n";
	task3(number);
	if (number <= 0)
	{
		cout << "no";
	}
	else if (task3(number))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
	int result = task4(number);
	cout << result;
	task5(number);
	task6(number);
	int number1;
	int degree;
	int start;
	int end;
	cin >> number1;
	cin >> degree;
	task7(number1);
	cout << task8(number1, degree);
	cin >> start;
	cin >> end;
	cout << task9(start, end);
}
