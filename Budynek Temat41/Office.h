#ifndef OFFICE_H
#define OFFICE_H

#include <string>
#include "Apartment.h"

class Office {
private:
    std::string companyName;
    std::string activityType;
    double monthlyPayment;
    Apartment* apartment;

public:
    Office(const std::string& companyName, const std::string& activityType, double monthlyPayment, Apartment* apartment);

    std::string getCompanyName() const;
    void setCompanyName(const std::string& companyName);

    std::string getActivityType() const;
    void setActivityType(const std::string& activityType);

    double getMonthlyPayment() const;
    void setMonthlyPayment(double monthlyPayment);

    Apartment* getApartment() const;
    void setApartment(Apartment* apartment);
};

#endif // OFFICE_H
