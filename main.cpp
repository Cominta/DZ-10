#include <iostream>
#include <time.h>

void taskFirst()
{
	int i = 0;

	while (i <= 100) // учитывая 100
	{
		if (i % 2 == 0)
		{
			std::cout << i << "\n";
		}

		i++;
	}
}

void taskSecond()
{
	int start;
	int end;
	int sum;

	std::cout << "Enter start: ";
	std::cin >> start;

	std::cout << "Enter end: ";
	std::cin >> end;

	while (start <= end)
	{
		sum += start;
		start++;
	}

	std::cout << "Sum: " << sum;
}

void taskThird()
{
	int startC;
	int endC;

	std::cout << "Enter start C: ";
	std::cin >> startC;

	std::cout << "Enter end C: ";
	std::cin >> endC;

	float F = startC + 32.0f;

	while (startC <= endC)
	{
		std::cout << "C: " << startC << " F: " << F << "\n";
		startC++;
		F += 1.8f;
	}
}

void taskFourth()
{
	int num;
	int i = 1;
	int result = 1;

	std::cout << "Enter num: ";
	std::cin >> num;

	while (i <= num)
	{
		result *= i;
		i++;
	}

	std::cout << "Result: " << result;
}

void taskFiveth()
{
	int num;
	int sum = 0;
	int i = 0;

	std::cout << "Enter num: ";
	std::cin >> num;

	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
		i++;
	}

	std::cout << "Count of numbers: " << i << "\n";
	std::cout << "Sum of numbers: " << sum;
}

int main()
{
	// taskFirst();
	// taskSecond();
	// taskThird();
	// taskFourth();
	taskFiveth();
}