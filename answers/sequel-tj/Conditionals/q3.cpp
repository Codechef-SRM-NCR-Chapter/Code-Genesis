#include <bits/stdc++.h>
using namespace std;

int main() {
    int cusId, waterVolume;
    string name;
    double charge, cost;
    cin >> cusId >> name >> waterVolume;

    if (waterVolume < 200)
        charge = 3;
    else if (waterVolume >= 200 && waterVolume < 400)
        charge = 3.35;
    else if (waterVolume >= 400 && waterVolume < 600)
        charge = 4.80;
    else
        charge = 5.10;

    cost = waterVolume * charge;
    if (cost > 1250)
        cost += cost*0.15;

    cout << cusId << "\n" << name << "\n" << waterVolume << "\n" << cost << endl;

    return 0;
}
