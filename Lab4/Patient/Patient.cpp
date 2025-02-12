#include "Patient.h"

Patient::Patient() {} ;

Patient::Patient(int daysSpent, double roomRate, double serv, double meds, char type)
{
    days = daysSpent;
    rate = roomRate;
    services = serv;
    medication = meds;
    patientType = type;
}

Patient::Patient(char type, double serv, double meds)
{
    patientType = type;
    services = serv;
    medication = meds;
}

bool Patient::validateInput(double input)
{
    if (input < 0)
    {
        return false;
    }
    return true;
}
bool Patient::validateInput(int input)
{
    if (input < 0)
    {
        return false;
    }
    return true;
}

double Patient::calcTotalCharges()
{
    double cost = 0;
    cost += (days * rate) + services + medication;
    return cost;
}
void Patient::setDays(int amountDays)
{
    if (validateInput(amountDays) == true)
    {
        days = amountDays;
    }
}
void Patient::setRate(double theRate)
{
    if (validateInput(theRate) == true)
    {
        rate = theRate;
    }
}
void Patient::setServices(double serv)
{
    if (validateInput(serv) == true)
    {
        services = serv;
    }
}
void Patient::setMedication(double meds)
{
    if (validateInput(meds) == true)
    {
        medication = meds;
    }
}
void Patient::setPatientType(char type)
{
    if (validateInput(type) == true)
    {
        patientType = type;
    }
}
int Patient::getDays()
{
    return days;
}
double Patient::getRate()
{
    return rate;
}
double Patient::getServices()
{
    return services;
}
double Patient::getMedication()
{
    return medication;
}
char Patient::getPatientType()
{
    return patientType;
}

