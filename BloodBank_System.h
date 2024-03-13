#ifndef BLOODBANK_SYSTEM_H
#define BLOODBANK_SYSTEM_H

#include <iostream>
#include <vector>
#include "Donors.h"
#include "Blood_container.h"

class BloodBankSystem
{
public:
    void Blood_registr(const std::string &name, int id, Donor::Types type, const std::string &date)
    {
        Donor *newDonor = new Donor(name, id, type);
        Donors.push_back(newDonor);
        Blood *newBlood = new Blood(typeToString(type), date, id);
        Bloods.push_back(newBlood);
    }

private:
    std::vector<Donor *> Donors;
    std::vector<Blood *> Bloods;
    std::string typeToString(Donor::Types type)
    {
        switch (type)
        {
        case Donor::Types::minus_4:
            return "-4";
        case Donor::Types::minus_3:
            return "-3";
        case Donor::Types::minus_2:
            return "-2";
        case Donor::Types::minus_1:
            return "-1";
        case Donor::Types::plus_1:
            return "+1";
        case Donor::Types::plus_2:
            return "+2";
        case Donor::Types::plus_3:
            return "+3";
        case Donor::Types::plus_4:
            return "+4";
        default:
            return "Unknown";
        }
    }
};
#endif // BLOODBANK_SYSTEM_H



