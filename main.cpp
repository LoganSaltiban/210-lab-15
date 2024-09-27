#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Movies
{
    private:
        string screenWriter;
        int yearReleased;
        string movieTitle;

    public:
        // Setters
        void set_screenWriter(string iScreenWriter) { screenWriter = iScreenWriter; }
        void set_yearReleased(int iYearReleased) { yearReleased = iYearReleased; }
        void set_movieTitle(string iMovieTitle) { movieTitle = iMovieTitle; }

        // Getters
        string get_screenWriter() { return screenWriter; }
        int get_yearReleased() { return yearReleased; }
        string get_movieTitle() { return movieTitle; }

        // Print
        void printInfo()
        {
            cout << "Movie: " << movieTitle << endl;
            cout << "Year released: " << yearReleased << endl;
            cout << "Screenwriter: " << screenWriter << endl;
            cout << endl;
        }
};

int main()
{
    // Create Input File Object & Open movies.txt
    ifstream movies;
    movies.open("movies.txt")

    // Test Case Open File
    if (!movies)
    {
        cout << "Error reading from input file" << endl;
        return 1;
    }

    



    return 0;
}