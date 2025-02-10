#include <iostream>
#include <iomanip>
#include "Patient.h"

using namespace std;

int main()
{
    Patient patient;
    
    char type;
    double hospitalCharge, dailyRoomRate, labFees, medicationCharges;
    int numDays;
    
    cout << "This program will calculate a patient's hospital charges." << endl;
    
    cout << "Enter I for in-patient or O for out-patient: ";
    cin >> type;
    
    patient.setpatientType(type);
    
    if (patient.getPatientType() == 'I') {  // Inpatient
        cout << "Number of days in the hospital: ";
        cin >> numDays;
        patient.setDays(numDays);
        
        cout << "Daily room rate ($): ";
        cin >> dailyRoomRate;
        patient.setRate(dailyRoomRate);
        
        cout << "Lab fees and other service charges ($): ";
        cin >> labFees;
        patient.setServices(labFees);
        
        cout << "Medication charges ($): ";
        cin >> medicationCharges;
        patient.setMedication(medicationCharges);
            
        hospitalCharge = patient.calcTotalCharges();
        cout << "Your total hospital bills is $" << fixed << setprecision(2) << hospitalCharge << endl;
    }
    else // Outpatient
    {
        cout << "Lab fees and other service charges ($): ";
        cin >> labFees;
        patient.setServices(labFees);
        
        cout << "Medication charges ($): ";
        cin >> medicationCharges;
        patient.setMedication(medicationCharges);
        
        hospitalCharge = patient.calcTotalCharges();
        cout << "Your total hospital bills is $" << fixed << setprecision(2) << hospitalCharge << endl;
    }
    
    return 0;
}
