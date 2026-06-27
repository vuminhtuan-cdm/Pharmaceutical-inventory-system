#include <iostream>
#include "../include/MedicineManager.h"
#include "../include/PrescriptionManager.h"
#include "../include/AnalysisManager.h"

using namespace std;

int main() {
    int choice;
    do {
        cout << "\n=============================================" << endl;
        cout << "  PHARMACEUTICAL SYSTEM - MAIN MENU" << endl;
        cout << "=============================================" << endl;
        cout << "1. Medicine Management" << endl;
        cout << "2. Prescription Tracking" << endl;
        cout << "3. Data Analysis & Stock Levels" << endl;
        cout << "0. Exit Program" << endl;
        cout << "=============================================" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: 
                runMedicineMenu(); 
                break;
            case 2: 
                runPrescriptionMenu(); 
                break;
            case 3: 
                runAnalysisMenu(); 
                break;
            case 0: 
                cout << "\nExiting system. Goodbye!\n"; 
                break;
            default: 
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while(choice != 0);
    return 0;
}