#define HAS_COUNTRY_AND_CURRENCY_DB = TRUE //In order for moneycpp::currency to be accesible

#include <iostream>
#include <money.h>
#include <currency.h>

using namespace moneycpp;

int main()
{
    std::cout << "Hello World!\n";

    money moneyExample = make_money(20, currency::AUD);

    std::cout << moneyExample.amount;
}