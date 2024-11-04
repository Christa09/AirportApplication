#pragma once
#include<string>
#include<iomanip>
#include<iostream>
#include<fstream>
#include <sstream>
#include "EmergencyDecisionsFunctions.h"
#include "FlightStatusHeader.h"
#include "SeatReservationCancellationHeader.h"
#include "MovieSelectionHeader.h"


using namespace std;


char userInput();
void airportApplicationMenu();
void displayAirportApplicationMenu();
void displayAirportApplicationMessages(char ch);
void EmergencyDecisionsMenu();
void flightStatusReporterMenu();
void seatReservationMenu();



