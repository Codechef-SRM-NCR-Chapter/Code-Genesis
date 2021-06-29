#include <iostream>
#include <cmath>
using namespace std;

int usageCharge(int waterQty);

int main() {
    int cxID, consumedWaterQty;
    string cxName;
    double waterUsageCharge;

    cin >> cxID >> cxName >> consumedWaterQty;
    waterUsageCharge = usageCharge(consumedWaterQty);

    if(waterUsageCharge > 1250) {
        double surgeCharge;
        surgeCharge = (double) 15 / 100;
        waterUsageCharge = round(waterUsageCharge + (double) 15 / 100 * waterUsageCharge);
    }

    cout << cxID << endl << cxName << endl << consumedWaterQty << endl << waterUsageCharge;

    return 0;
}

int usageCharge(int waterQty) {
    if(waterQty < 200)
        return  3 * waterQty;
    else if(waterQty >= 200 && waterQty < 400)
        return  3.35 * waterQty;
    else
        return  5.10 * waterQty;
}