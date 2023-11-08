#include <iostream>
#include <ostream>

const int rows {5};
const int cols {5};

void simpleArray() 
{
    std::string sample_array[] = {"Sword", "Bow", "Shuriken"};
    int i;
    std::cout << "Choose a weapon: " << "[1 = Sword, 2 = Bow, 3 = Shuriken]" << std::endl;
    std::cin >> i;
    std::cout << "The weapon you picked was: " << sample_array[i-1] << std::endl;
}

void vendingMachineBuilder()
{
 std::string vendingMachine[rows][cols]
    {
        {"chips", "rice", "bahn mi", "cotton candy", "gummy worms"},
        {"salad", "chips", "rice", "bahn mi", "cotton candy"},
        {"corn", "salad", "chips", "rice", "bahn mi"},
        {"beans", "corn", "salad", "chips", "rice"},
        {"pears", "beans", "corn", "salad", "chips"}
    };

    char vending_row;
    int vending_col;
    std::cout << "|===================================================|" << std::endl;
    std::cout << "|=============SQUIDONOMICS VENDING MACHINE==========|" << std::endl;
    std::cout << "|===================================================|" << std::endl;
    std::cout << "| a: chips, rice, bahn mi, cotton candy, gummy worms|" << std::endl;
    std::cout << "|   b: salad, chips, rice, bahn mi, cotton candy    |" << std::endl;
    std::cout << "|       c: corn, salad, chips, rice, bahn mi        |" << std::endl;
    std::cout << "|        d: beans, corn, salad, chips, rice         |" << std::endl;
    std::cout << "|        e: pears, beans, corn, salad, chips        |" << std::endl;
    std::cout << "|===================================================|" << std::endl;
    std::cout << "Please enter row for selection: " << std::endl;
    std::cin >> vending_row;
    switch (vending_row) {
        case 'a':
            std::cout << "Please enter number: ";
            std::cin >> vending_col;
            std::cout << vendingMachine[0][vending_col-1] << std::endl;
            break;
        case 'b':
            std::cout << "Please enter number: ";
            std::cin >> vending_col;
            std::cout << vendingMachine[1][vending_col-1] << std::endl;
            break;
        case 'c':
            std::cout << "Please enter number: ";
            std::cin >> vending_col;
            std::cout << vendingMachine[2][vending_col-1] << std::endl;
            break;
        case 'd':
            std::cout << "Please enter number: ";
            std::cin >> vending_col;
            std::cout << vendingMachine[3][vending_col-1] << std::endl;
            break;
        case 'e':
            std::cout << "Please enter number: ";
            std::cin >> vending_col;
            std::cout << vendingMachine[4][vending_col-1] << std::endl;
            break;
    }   
}

int main() {
    vendingMachineBuilder();
}