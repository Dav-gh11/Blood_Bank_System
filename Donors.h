#ifndef DONORS_H
#define DONORS_H

#include <iostream>
#include <string>

class Donor
{
public:
    enum class Types
    {
        minus_4,
        minus_3,
        minus_2,
        minus_1,
        plus_1,
        plus_2,
        plus_3,
        plus_4
    };

public:
    Donor(const std::string &name, int id, Donor::Types typ)
        : name(name), id(id), typ(typ) {}

public:
    void set_name(std::string &str)
    {
        name = str;
    }
    void set_id(int i)
    {
        id = i;
    }
    void set_types(Types t)
    {
        typ = t;
    }
    std::string get_name() const
    {
        return name;
    }
    int get_id() const
    {
        return id;
    }
    Types get_typ() const
    {
        return typ;
    }

private:
    std::string name;
    int id;
    Types typ;
};

#endif // DONORS_H