#ifndef __CREADIT_CARD_PAY__
#define __CREADIT_CARD_PAY__

#include <string>

class CreaditCardPay
{
public:
    CreaditCardPay();
    ~CreaditCardPay();

    void pay(int amount);
private:
    std::string name;
    std::string card_number;
};

#endif//__CREADIT_CARD_PAY__
