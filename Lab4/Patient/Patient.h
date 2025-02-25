#ifndef PATIENT_H
#define PATIENT_H

class Patient
{
private:
    int days = 0;
    double rate = 0.0;
    double services = 0.0;
    double medication = 0.0;
    char patientType = 'I';
    bool validateInput(double input);
    bool validateInput(int input);
public:
    Patient();
    Patient(int daysSpent, double roomRate, double serv, double meds, char type);
    Patient(char type, double serv, double meds); 
    double calcTotalCharges();
    void setDays(int amountDays);
    void setRate(double theRate);
    void setServices(double serv);
    void setMedication(double meds);
    void setPatientType(char type);
    int getDays();
    double getRate();
    double getServices();
    double getMedication();
    char getPatientType();
};

#endif
