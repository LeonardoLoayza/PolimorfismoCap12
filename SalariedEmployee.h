#ifndef SALARIED_H
#define SALARIED_H
#include <string>     // C++ standard string class
#include "Employee.h" // Employee class definition

class SalariedEmployee
{
public:
    SalariedEmployee(const std::string &, const std::string &,
                     const std::string &, double = 0.0);
    // virtual destructor
    virtual ~SalariedEmployee() = default;
    void setWeeklySalary(double);   // set weekly salary
    double getWeeklySalary() const; // return weekly salary

    virtual double earnings() const;
    virtual std::string toString() const;
    // keyword virtual signals intent to override

private:
    double weeklySalary;
};

#endif // SALARIED_H