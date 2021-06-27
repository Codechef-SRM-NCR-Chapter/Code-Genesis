#include <iostream>
using namespace std;

void printDateInWords(string month, int dd, int yyyy);

int main() {
    int dd, mm, yyyy;
    string month;

    cin >> dd >> mm >> yyyy;
    cout << "Outputs\n";

    switch(mm) {
        case 1:
            month = "January";
            printDateInWords(month, dd, yyyy);
            break;
        case 2:
        month = "February";
            printDateInWords(month, dd, yyyy);
            break;
        case 3:
        month = "March";
            printDateInWords(month, dd, yyyy);
            break;
        case 4:
        month = "April";
            printDateInWords(month, dd, yyyy);
            break;
        case 5:
        month = "May";
            printDateInWords(month, dd, yyyy);
            break;
        case 6:
        month = "June";
            printDateInWords(month, dd, yyyy);
            break;
        case 7:
        month = "July";
            printDateInWords(month, dd, yyyy);
            break;
        case 8:
        month = "August";
            printDateInWords(month, dd, yyyy);
            break;
        case 9:
        month = "September";
            printDateInWords(month, dd, yyyy);
            break;
        case 10:
        month = "October";
            printDateInWords(month, dd, yyyy);
            break;
        case 11:
        month = "November";
            printDateInWords(month, dd, yyyy);
            break;
        case 12:
        month = "December";
            printDateInWords(month, dd, yyyy);
            break;
        default:
            break;
        }

    // printDateInWords(month, dd, yyyy);
    return 0;
}

void printDateInWords(string month, int dd, int yyyy) {
    cout << month << " " << dd << " " << yyyy;
    return;
}

