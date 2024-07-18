#include <iostream>
#include <string>
#include "Apartment.h"
#include "Office.h"

int main() {
    setlocale(LC_ALL, "Ukr");

    try {
        Apartment apartment(101, 100.0, 50.0); // створити об'єкт класу Apartment
        Office office("ABC Inc.", "IT", 1000.0, &apartment); // створити об'єкт класу Office з посиланням на об'єкт класу Apartment

        std::cout << "Назва фірми-власника: " << office.getCompanyName() << std::endl;
        std::cout << "Вид діяльності: " << office.getActivityType() << std::endl;
        std::cout << "Щомісячна оплата: " << office.getMonthlyPayment() << " грн" << std::endl;

        // доступ до об'єкта класу Apartment через посилання
        std::cout << "Номер квартири: " << office.getApartment()->getNumber() << std::endl;
        std::cout << "Площа: " << office.getApartment()->getArea() << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}
