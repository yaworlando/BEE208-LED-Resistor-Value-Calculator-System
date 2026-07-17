#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class LEDCircuit
{
private:
    string ledName;
    double supplyVoltage;
    double forwardVoltage;
    double ledCurrentMilliAmps;
    double ledCurrentAmps;
    double resistorValue;
    double resistorPower;
    string designStatus;

public:

    void setCircuitDetails()
    {
        cout << "\nEnter LED Name or Colour: ";
        cin.ignore();
        getline(cin, ledName);

        cout << "Enter Supply Voltage (V): ";
        cin >> supplyVoltage;

        cout << "Enter LED Forward Voltage (V): ";
        cin >> forwardVoltage;

        cout << "Enter Desired LED Current (mA): ";
        cin >> ledCurrentMilliAmps;
    }

    bool validateDetails()
    {
        if (supplyVoltage <= forwardVoltage)
        {
            designStatus = "Invalid Design";
            return false;
        }

        if (ledCurrentMilliAmps <= 0)
        {
            designStatus = "Invalid Current Value";
            return false;
        }

        if (supplyVoltage < 0 || forwardVoltage < 0)
        {
            designStatus = "Invalid Voltage";
            return false;
        }

        return true;
    }

    void calculateResistor()
    {
        ledCurrentAmps = ledCurrentMilliAmps / 1000.0;

        resistorValue = (supplyVoltage - forwardVoltage) / ledCurrentAmps;

        resistorPower = ledCurrentAmps * ledCurrentAmps * resistorValue;

        if (ledCurrentMilliAmps > 30)
        {
            designStatus = "Warning: LED current may be too high.";
        }
        else
        {
            designStatus = "Design Accepted";
        }
    }

    void displayCircuitReport()
    {
        cout << fixed << setprecision(2);

        cout << "\n==============================";
        cout << "\nLED CIRCUIT REPORT";
        cout << "\n==============================";

        cout << "\nLED Name: " << ledName;
        cout << "\nSupply Voltage: " << supplyVoltage << " V";
        cout << "\nForward Voltage: " << forwardVoltage << " V";
        cout << "\nDesired Current: " << ledCurrentMilliAmps << " mA";
        cout << "\nRecommended Resistor: " << resistorValue << " Ohms";
        cout << "\nMinimum Resistor Power: " << resistorPower << " W";
        cout << "\nDesign Status: " << designStatus << endl;
    }

    void saveCircuitReport(ofstream &file)
    {
        file << fixed << setprecision(2);

        file << "\n==============================";
        file << "\nLED CIRCUIT REPORT";
        file << "\n==============================";

        file << "\nLED Name: " << ledName;
        file << "\nSupply Voltage: " << supplyVoltage << " V";
        file << "\nForward Voltage: " << forwardVoltage << " V";
        file << "\nDesired Current: " << ledCurrentMilliAmps << " mA";
        file << "\nRecommended Resistor: " << resistorValue << " Ohms";
        file << "\nMinimum Resistor Power: " << resistorPower << " W";
        file << "\nDesign Status: " << designStatus << endl;
    }
};

int main()
{
    cout << "=============================================\n";
    cout << " LED RESISTOR VALUE CALCULATOR SYSTEM\n";
    cout << "=============================================\n";

    int numberOfCircuits;

    cout << "\nEnter number of LED circuits to calculate: ";
    cin >> numberOfCircuits;

    ofstream report("led_resistor_report.txt");

    for (int i = 1; i <= numberOfCircuits; i++)
    {
        cout << "\n----------------------------------";
        cout << "\nLED Circuit " << i;
        cout << "\n----------------------------------";

        LEDCircuit led;

        led.setCircuitDetails();

        if (led.validateDetails())
        {
            led.calculateResistor();
            led.displayCircuitReport();
            led.saveCircuitReport(report);
        }
        else
        {
            cout << "\nInvalid input values. Calculation cannot continue.\n";
        }
    }

    report.close();

    cout << "\n============================================";
    cout << "\nReport saved successfully as";
    cout << "\nled_resistor_report.txt";
    cout << "\n============================================";

    return 0;
}
