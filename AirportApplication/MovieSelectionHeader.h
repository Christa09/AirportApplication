#pragma once
#include<string>
#include<iomanip>
#include<iostream>
#include<fstream>
#include <sstream>

const int NUM_OF_MOVIES = 100;
void movieSelectorMenu();
void displayMovieSelectorMessages(char ch);
void displayAvailableMovies();
void searchByYear();
char userInputMovies();