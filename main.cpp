#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  string fileName;
  ifstream inFile;

  string firstName, lastName;
  double baseSalary, comissionPercent, totalSales, expenses;
  double commission, totalPay/

  // Ask for the filename
  cout << "Enter the name of the input file: ";
  cin >> fileName;

  // Open the input file
  inFile.open(fileName);
  if (!inFile) {
  cout << "Error opening file." << endl;
        return 1;
    }

    // Read data from file
    inFile >> firstName >> lastName;
    inFile >> baseSalary >> commissionPercent;
    inFile >> totalSales;
    inFile >> expenses;
    inFile.close();

    // Calculate commission and total pay
    commission = totalSales * (commissionPercent / 100.0);
    totalPay = baseSalary + commission - expenses;

    // Output results
    cout << endl;
    cout << "Payroll data for " << firstName << " " << lastName << endl << endl;

    cout << fixed << setprecision(2);
    cout << "Base Salary:" << setw(10) << baseSalary << endl;

    cout << "Commission:" << setw(10) << commission;
    cout << " (" << setprecision(1) << commissionPercent << "% of "
         << fixed << setprecision(2) << totalSales << ")" << endl;

    cout << "Expenses:" << setw(11) << expenses << endl;
    cout << "              --------" << endl;
    cout << "Total:" << setw(16) << totalPay << endl;

    return 0;
}
