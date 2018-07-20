#include <iostream>

int main()
{

    std::cout << "Please enter two integers!" << std::endl;

    int min = 0, max = 0;

    std::cin >> min >> max;

    int val = min;

    std::cout << "Here are the integers that are in between ";
    std::cout << min << " and " << max << " (inclusive) " << std::endl;

    while(val <= max) {
        std::cout << val << std::endl;
        val++;
    }


    return 0;
}