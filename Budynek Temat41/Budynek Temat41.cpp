#include <iostream>
#include <string>
#include "Apartment.h"
#include "Office.h"

int main() {
    setlocale(LC_ALL, "Ukr");

    try {
        Apartment apartment(101, 100.0, 50.0); 
        Office office("ABC Inc.", "IT", 1000.0, &apartment); 

        std::cout << "Назва фірми-власника: " << office.getCompanyName() << std::endl;
        std::cout << "Вид діяльності: " << office.getActivityType() << std::endl;
        std::cout << "Щомісячна оплата: " << office.getMonthlyPayment() << " грн" << std::endl;

        
        std::cout << "Номер квартири: " << office.getApartment()->getNumber() << std::endl;
        std::cout << "Площа: " << office.getApartment()->getArea() << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}
