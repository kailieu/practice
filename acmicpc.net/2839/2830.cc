#include <iostream>

int main(void)
{
    int target, rest, ret=0;
    std::cin >> target;

    ret = static_cast<int>(target / 5);
    switch(target % 5) {
        case 0:
            std::cout << ret << std::endl;
            break;
        case 1:
            if (1 <= ret) {
                std::cout << ret + 1 << std::endl;
            }else{
                std::cout << -1 << std::endl;
            }
            break;
        case 2:
            if ( 2 <= ret) {
                std::cout << ret + 2 << std::endl;
            }else{
                std::cout << -1 << std::endl;
            }
            break;
        case 3:
            std::cout << ret + 1 << std::endl;
            break;
        case 4:
            if (1 <= ret) {
                std::cout << ret + 2 << std::endl;
            }else{
                std::cout << -1 << std::endl;
            }
            break;
        default:
            break;
    }
}
