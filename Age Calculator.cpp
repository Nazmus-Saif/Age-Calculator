#include <iostream>
using namespace std;

int main(){
    int CD, CM, CY, BD, BM, BY, Day, Month, Year;

    cout << "\n Enter Birth Date : ";
    cin >> BD;
    cout << "\n Enter Birth Month : ";
    cin >> BM;
    cout << "\n Enter Birth Year : ";
    cin >> BY;
    cout << "\n Enter Current Date : ";
    cin >> CD;
    cout << "\n Enter Current Month : ";
    cin >> CM;
    cout << "\n Enter Current Year : ";
    cin >> CY;

    if (BD > 31 || BD < 1 || BM > 12 || BM < 1 || BY < 1 || CD > 31 || CD < 1 || CM > 12 || CM < 1 || CY < 1)
        cout << "\n\t\t\t\t\t\t# Invalid Birthdate #\n";
    else{
        Year = CY - BY;
        if (CD >= BD)
            Day = CD - BD;
        else{
            CM = CM - 1;
            CD = CD + 31;
            Day = CD - BD;
        }
        if (CM >= BM)
            Month = CM - BM;
        else{
            Year = Year - 1;
            CM = CM + 12;
            Month = CM - BM;
        }
        if (CD == BD && CM == BM)
            cout << "\n\n\t\t\t\t\t\t  # Happy Birthday #";

        cout << "\n\n\t\t\t\t\t # Your Age is " << Year << " Year " << Month << " Month " << Day << " Day #\n\n";
    }

    return 0;
}
