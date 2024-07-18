#include "Office.h"
#include <stdexcept>

Office::Office(const std::string& companyName, const std::string& activityType, double monthlyPayment, Apartment* apartment)
    : companyName(companyName), activityType(activityType), monthlyPayment(monthlyPayment), apartment(apartment) {
    if (monthlyPayment <= 0) {
        throw std::invalid_argument("Monthly payment must be greater than zero.");
    }
}

std::string Office::getCompanyName() const {
    return companyName;
}

void Office::setCompanyName(const std::string& companyName) {
    this->companyName = companyName;
}

std::string Office::getActivityType() const {
    return activityType;
}

void Office::setActivityType(const std::string& activityType) {
    this->activityType = activityType;
}

double Office::getMonthlyPayment() const {
    return monthlyPayment;
}

void Office::setMonthlyPayment(double monthlyPayment) {
    if (monthlyPayment <= 0) {
        throw std::invalid_argument("Monthly payment must be greater than zero.");
    }
    this->monthlyPayment = monthlyPayment;
}

Apartment* Office::getApartment() const {
    return apartment;
}

void Office::setApartment(Apartment* apartment) {
    this->apartment = apartment;
}
