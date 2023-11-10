#include <iostream>

int main()
{
    
    double cents;
    int dollars {0};
    double quarters {0.00};
    double dimes {0.00};
    double nickels {0.00};
    double pennies {0};
    std::cout << "Enter an amount in cents: ";
    std::cin >> cents;
    std::cout << cents << std::endl;
    while (cents/1 > 1) {
        cents -= 1;
        dollars += 1;
    }
    while (cents/0.25 >= 1.0) {
        cents -= 0.25;
        quarters += 1.0;
    }
    while (cents/0.10 >= 1.0) {
        cents -= 0.10;
        dimes += 1;
    }
    while (cents/0.05 >= 1) {
        cents -= 0.05;
        nickels += 1;
    }
    pennies = cents;
    std::cout << "You can provide change as follows:" << std::endl;
    std::cout << "dollars: " << dollars << std::endl;
    std::cout << "quarters: " << quarters << std::endl;
    std::cout << "dimes: " << dimes << std::endl;
    std::cout << "nickels: " << nickels << std::endl;
    std::cout << "pennies: " << pennies << std::endl;
}