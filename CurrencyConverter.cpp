#include <iostream>

int main() {
    double amount;
    int choice;

    std::cout << "Simple Currency Converter\n";
    std::cout << "Enter the amount in USD: $";
    std::cin >> amount;

    std::cout << "Select the currency to convert to:\n";
    std::cout << "1. Euro\n";
    std::cout << "2. British Pound\n";
    std::cout << "3. Japanese Yen\n";
    std::cout << "4. Indian Rupee\n";
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    double convertedAmount;

    switch (choice) {
        case 1:
            convertedAmount = amount * 0.85;
            std::cout << "Converted amount: " << convertedAmount << " EUR\n";
            break;
        case 2:
            convertedAmount = amount * 0.73;
            std::cout << "Converted amount: " << convertedAmount << " GBP\n";
            break;
        case 3:
            convertedAmount = amount * 110.29;
            std::cout << "Converted amount: " << convertedAmount << " JPY\n";
            break;
        case 4:
            convertedAmount = amount * 74.39;
            std::cout << "Converted amount: " << convertedAmount << " INR\n";
            break;
        default:
            std::cout << "Invalid choice. Conversion not performed.\n";
            break;
    }

    return 0;
}