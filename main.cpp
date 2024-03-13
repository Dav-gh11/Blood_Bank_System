#include "Donors.h"
#include "Blood_container.h"
#include "BloodBank_System.h"

int main()
{
    BloodBankSystem bbs;
    bbs.Blood_registr("David", 1, Donor::Types::plus_2, "26.09.2024");
    std::cout << "Registration complete!" << std::endl;
    return 0;
}