#include "airportApplicationHeader.h"
#include "EmergencyDecisionsFunctions.h"

using namespace std;



void airportApplicationMenu()
{

    char ch = ' ';
    while (ch != 'Q')
    {
        displayAirportApplicationMenu();
        ch = userInput();
        displayAirportApplicationMessages(ch);
    }

}



char userInput()
{
    char ch = ' ';
    cin >> ch;
    ch = toupper(ch);
    while (ch != 'D' && ch != 'R' && ch != 'C' && ch != 'Q')
    {
        cout << "\nPlease enter a valid choice " << " " << endl;
        //cin.clear();
        //cin.ignore(9999,'\n');
        void displayReservationMenu();
        cin >> ch;
        ch = toupper(ch);
    }

    return ch;
}


void displayAirportApplicationMenu()
{
    cout << "**************************************" << endl;
    cout << "Airport Application Menu" << endl;
    cout << "**************************************" << endl;
    cout << "Display All Available Seats : E " << endl;
    cout << "Flight Status Report        : R " << endl;
    cout << "Reserve/Cancel Seat         : S " << endl;
    cout << "Movie Selection             : M " << endl;
    cout << "Exit                        : Q \n" << endl;
    cout << "Enter your choice           :    ";

}

void displayAirportApplicationMessages(char ch)
{

    switch (ch)
    {
    case 'E': EmergencyDecisionsMenu();
        break;
    case 'R': flightStatusReporterMenu();
        break;
    case 'S': seatReservationMenu();
        break;
 /*   case 'M': movieSelectorMenu();
        break;*/
    case 'Q': quit();
        break;

    }
    return;

}

