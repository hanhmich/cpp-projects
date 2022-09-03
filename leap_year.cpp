#include <iostream>

int main() {
int year;
std::cout << "Please enter a year: \n";
std::cin >> year;

if (year > 999 && year <= 9999) {
  bool  year = true;
}
else {
    std::cout << "Please enter a 4 digit number. \n";
    std::cin >> year;
}

if (year % 4 == 0 || year % 400 == 0) {
        std::cout << year << " is a leap year.\n";
    } else if (year % 4 != 0 || 400 != 0){
        std::cout << year << " is not a leap year.\n";
    }
    return 0;
}
