#include <iostream>

int main(void)
{
    int month, date, sum = 0;
    std::cin >> month >> date;

    switch(month) {
        case 12:
            sum += 30;
        case 11:
            sum += 31;
        case 10:
            sum += 30;
        case 9:
            sum += 31;
        case 8:
            sum += 31;
        case 7:
            sum += 30;
        case 6:
            sum += 31;
        case 5:
            sum += 30;
        case 4:
            sum += 31;
        case 3:
            sum += 28;
        case 2:
            sum += 31;
        case 1:
            sum += date;
    }

    switch(sum % 7) {
        case 0:
            std::cout << "SUN" << std::endl;
            break;
        case 1:
            std::cout << "MON" << std::endl;
            break;
        case 2:
            std::cout << "TUE" << std::endl;
            break;
        case 3:
            std::cout << "WED" << std::endl;
            break;
        case 4:
            std::cout << "THR" << std::endl;
            break;
        case 5:
            std::cout << "FRI" << std::endl;
            break;
        case 6:
            std::cout << "SAT" << std::endl;
            break;
    }

    return 0;
}
