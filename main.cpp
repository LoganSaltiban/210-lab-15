#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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
    movies.open("movies.txt");

    // Test Case Open File
    if (!movies)
    {
        cout << "Error reading from input file" << endl;
        return 1;
    }

    // Initialize Vector of Movies
    vector<Movies> movieList;

  
        while (!movies.eof())
        {
            // Temp Variable Declarations
            Movies tempMovie;
            string tempScreenwriter = "";
            int tempYearReleased = 0;
            string tempMovieTitle = "";

            // Set Movie Title
            getline(movies, tempMovieTitle);
            tempMovie.set_movieTitle(tempMovieTitle);
            
            // Set Year Released
            movies >> tempYearReleased;
            tempMovie.set_yearReleased(tempYearReleased);

            // Set Screenwriter Name
            movies.ignore(); // Needed since we use a >> operator beforehand
            getline(movies, tempScreenwriter);
            tempMovie.set_screenWriter(tempScreenwriter);

            // Add The Filled TempMovie into movieList
            movieList.push_back(tempMovie);
        }

        // Print Using Range
        for (auto movie : movieList)
            movie.printInfo();
    
    return 0;
}