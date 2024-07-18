#include <iostream>
#include <string>
#include "Apartment.h"
#include "Office.h"

int main() {
    setlocale(LC_ALL, "Ukr");

    try {
        Apartment apartment(101, 100.0, 50.0); 
        Office office("ABC Inc.", "IT", 1000.0, &apartment); 

        std::cout << "����� �����-��������: " << office.getCompanyName() << std::endl;
        std::cout << "��� ��������: " << office.getActivityType() << std::endl;
        std::cout << "�������� ������: " << office.getMonthlyPayment() << " ���" << std::endl;

        
        std::cout << "����� ��������: " << office.getApartment()->getNumber() << std::endl;
        std::cout << "�����: " << office.getApartment()->getArea() << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "�������: " << e.what() << std::endl;
    }

    return 0;
}
