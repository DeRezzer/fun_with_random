// fun_with_random.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>



int main()
{
	srand(time(0));
	int x = 0;
	int rand_num = 1 + (rand() % 10);
	std::cout << "Guess the correct number between 1 and 10!" << std::endl;
	std::cin >> x;

    do {
		std::cout << "Oops! Try again!" << std::endl;
		std::cin >> x;
	} while (x != rand_num);

	if (x == rand_num) {
		std::cout << "Congrats! You geussed the correct number!" << std::endl;
	}
	
    return 0;
}

