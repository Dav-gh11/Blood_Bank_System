#ifndef BLOOD_CONTAINER_H
#define BLOOD_CONTAINER_H

#include <iostream>
#include <string>
class Blood
{
public:
    Blood(const std::string &Blood_type, const std::string &date, int ml) : Blood_type(Blood_type), date(date), ml(ml) {}
    ~Blood() = default;
public:
    void set_Blood_type(const std::string &bt)
    {
        Blood_type = bt;
    }
    void set_date(const std::string &d)
    {
        date = d;
    }
    void set_ml(const int m)
    {
        ml = m;
    }
    std::string get_Blood_type() const
    {
        return Blood_type;
    }
    std::string get_date() const
    {
        return date;
    }
    int get_ml() const
    {
        return ml;
    }

private:
    std::string Blood_type;
    std::string date;
    int ml;
};

#endif // BLOOD_CONTAINER_H