#include <iostream>
#include <string>
#include <stdexcept>

class Office {
private:
    std::string companyName;
    std::string activityType;
    double monthlyPayment;

public:
    Office(const std::string& companyName, const std::string& activityType, double monthlyPayment)
        : companyName(companyName), activityType(activityType), monthlyPayment(monthlyPayment) {
        if (monthlyPayment <= 0) {
            throw std::invalid_argument("Monthly payment must be greater than zero.");
        }
    }

    std::string getCompanyName() const {
        return companyName;
    }

    void setCompanyName(const std::string& companyName) {
        this->companyName = companyName;
    }

    std::string getActivityType() const {
        return activityType;
    }

    void setActivityType(const std::string& activityType) {
        this->activityType = activityType;
    }

    double getMonthlyPayment() const {
        return monthlyPayment;
    }

    void setMonthlyPayment(double monthlyPayment) {
        if (monthlyPayment <= 0) {
            throw std::invalid_argument("Monthly payment must be greater than zero.");
        }
        this->monthlyPayment = monthlyPayment;
    }
};

int main() {
    setlocale(LC_ALL, "Ukr");

    try {
        Office office("ABC Inc.", "IT", 1000.0);

        std::cout << "Ќазва ф≥рми-власника: " << office.getCompanyName() << std::endl;
        std::cout << "¬ид д≥€льност≥: " << office.getActivityType() << std::endl;
        std::cout << "ўом≥с€чна оплата: " << office.getMonthlyPayment() << " грн" << std::endl;

        
        

    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
