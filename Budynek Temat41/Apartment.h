#pragma once
#ifndef APARTMENT_H
#define APARTMENT_H

#include <stdexcept>

class Apartment {
private:
    int number;
    double baseMonthlyPayment;
    double area;

public:
    Apartment(int number, double baseMonthlyPayment, double area);

    int getNumber() const;
    void setNumber(int number);

    double getBaseMonthlyPayment() const;
    void setBaseMonthlyPayment(double baseMonthlyPayment);

    double getArea() const;
    void setArea(double area);

    double calculateMonthlyPayment() const;
};

#endif // APARTMENT_H


