//Christa Balderston
//CISP 360
//Assignment 6
//11/1/24
#include "airportApplicationHeader.h"


char userInputMovies()
{
    char ch = ' ';
    cin >> ch;
    ch = toupper(ch);
    while (ch != 'D' && ch != 'S' &&  ch != 'Q')
    {
        cout << "\nPlease enter a valid choice " << " " << endl;
        //cin.clear();
        //cin.ignore(9999,'\n');
        void movieSelectorMenu();
        cin >> ch;
        ch = toupper(ch);
    }

    return ch;
}


void movieSelectorMenu()
{
    cout << "**************************************" << endl;
    cout << "Movie Selector Menu" << endl;
    cout << "**************************************" << endl;
    cout << "Display Available Movies : D " << endl;
    cout << "Search a Movie by Year   : S " << endl;
    cout << "Quit                        : Q \n" << endl;
    cout << "Enter your choice           :    ";

}

void displayMovieSelectorMessages(char ch)
{
    switch (ch)
    {
    case 'D': displayAvailableMovies();
        break;
    case 'S': searchByYear();
        break;
    case 'Q': quit();
        break;
    }
    return;

}
void displayAvailableMovies()
{

}
void searchByYear()
{

}


struct Movie {
    string title;
    int releaseYear;
    string director;
    string genre;
    string starring;
};

static void fillDatabase(Movie movieArray[NUM_OF_MOVIES], int& count)
{
    ifstream inFile;
    string filename = "MovieData.txt";
    inFile.open(filename);
    if (!inFile) {
        cerr << "Unable to open file " << filename << endl;
        return;
    }
    string line;
    while (getline(inFile, line))
    {
       
        extractAndDisplay(line);
    }
    inFile.close();
}

static void extractAndDisplay(string line)
{
	istringstream iss(line);
	string title;
	int releaseYear;
	string director;
	string genre;
	string starring;
	iss >> title >> releaseYear >> director >> genre >> starring;
	cout << title << " " << releaseYear << " " << director << " " << genre << " " << starring << endl;
}