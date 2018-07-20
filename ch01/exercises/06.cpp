#include <iostream>

int main()
{

    int sum = 0, val = 50;

    while(val <= 100) {
        sum += val;
        val++;
    }

    std::cout << "The sum of numbers 50 to 100 is ";
    std::cout << sum << std::endl;

    return 0;
}