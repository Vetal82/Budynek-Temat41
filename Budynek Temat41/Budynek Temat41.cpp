#include <iostream>
#include <stdexcept>

class Apartment {
private:
    int number;
    double baseMonthlyPayment;
    double area;

public:
    Apartment(int number, double baseMonthlyPayment, double area)
        : number(number), baseMonthlyPayment(baseMonthlyPayment), area(area) {
        if (baseMonthlyPayment <= 0) {
            throw std::invalid_argument("Base monthly payment must be greater than zero.");
        }
        if (area <= 0) {
            throw std::invalid_argument("Area must be greater than zero.");
        }
    }

    int getNumber() const {
        return number;
    }

    void setNumber(int number) {
        this->number = number;
    }

    double getBaseMonthlyPayment() const {
        return baseMonthlyPayment;
    }

    void setBaseMonthlyPayment(double baseMonthlyPayment) {
        if (baseMonthlyPayment <= 0) {
            throw std::invalid_argument("Base monthly payment must be greater than zero.");
        }
        this->baseMonthlyPayment = baseMonthlyPayment;
    }

    double getArea() const {
        return area;
    }

    void setArea(double area) {
        if (area <= 0) {
            throw std::invalid_argument("Area must be greater than zero.");
        }
        this->area = area;
    }

    double calculateMonthlyPayment() const {
        return baseMonthlyPayment * area;
    }
};

int main() {
    setlocale(LC_ALL, "Ukr");
    try {
        Apartment apartment(101, 100.0, 50.0);

        std::cout << "Номер квартири: " << apartment.getNumber() << std::endl;
        std::cout << "Базова щомісячна оплата: " << apartment.getBaseMonthlyPayment() << std::endl;
        std::cout << "Площа: " << apartment.getArea() << std::endl;
        std::cout << "Щомісячна оплата: " << apartment.calculateMonthlyPayment() << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}
