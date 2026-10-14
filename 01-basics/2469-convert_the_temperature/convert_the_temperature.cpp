#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;

        vector<double> result = {kelvin, fahrenheit};

        return result;
    }
};

int main() {
    double celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    Solution obj;

    vector<double> result = obj.convertTemperature(celsius);

    cout << "Temperature in Kelvin: " << result[0] << endl;
    cout << "Temperature in Fahrenheit: " << result[1] << endl;

    return 0;
}