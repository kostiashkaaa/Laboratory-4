#ifndef LOYALTYPROGRAM_H
#define LOYALTYPROGRAM_H

#include "Person.h"
#include <string>

class LoyaltyProgram : virtual public Person {
protected:
    std::string vipStatus;
    double discountPercent;
    
public:
    LoyaltyProgram();
    LoyaltyProgram(const std::string& status, double discount);
    
    virtual ~LoyaltyProgram();
    
    std::string getVIPStatus() const;
    double getDiscountPercent() const;
    
    void setVIPStatus(const std::string& status);
    void setDiscountPercent(double discount);
    
    double applyDiscount(double price) const;
    
    void displayLoyaltyInfo() const;
};

#endif
