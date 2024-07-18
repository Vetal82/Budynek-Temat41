#include "Apartment.h"

Apartment::Apartment(int number, double baseMonthlyPayment, double area)
    : number(number), baseMonthlyPayment(baseMonthlyPayment), area(area) {
    if (baseMonthlyPayment <= 0) {
        throw std::invalid_argument("Base monthly payment must be greater than zero.");
    }
    if (area <= 0) {
        throw std::invalid_argument("Area must be greater than zero.");
    }
}

int Apartment::getNumber() const {
    return number;
}

void Apartment::setNumber(int number) {
    this->number = number;
}

double Apartment::getBaseMonthlyPayment() const {
    return baseMonthlyPayment;
}

void Apartment::setBaseMonthlyPayment(double baseMonthlyPayment) {
    if (baseMonthlyPayment <= 0) {
        throw std::invalid_argument("Base monthly payment must be greater than zero.");
    }
    this->baseMonthlyPayment = baseMonthlyPayment;
}

double Apartment::getArea() const {
    return area;
}

void Apartment::setArea(double area) {
    if (area <= 0) {
        throw std::invalid_argument("Area must be greater than zero.");
    }
    this->area = area;
}

double Apartment::calculateMonthlyPayment() const {
    return baseMonthlyPayment * area;
}

