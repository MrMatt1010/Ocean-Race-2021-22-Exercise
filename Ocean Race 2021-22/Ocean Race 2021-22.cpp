// Ocean Race 2021-22.cpp : 

#include <iostream>
#include <string>

using namespace std;

class Location {

private:

    int degreesLat;

    float minutesLat;

    char directionLat; //This is normally North or South for latitude

    int degreesLong;

    float minutesLong;

    char directionLong; //This is normally West or East for longitude 


public:

    //This is where the constructor sits to initialize the location object
    location() : degreesLat(0), minutesLat(0), directionLat('N'),
        degreesLong(0), minutesLong(0), directionLong('E') {}


    //This is the function to get the yachts position from the user

    void getPos() {

        cout << "Input Latitude (degrees, minutes, N/S: " endl;
        cin >> degreesLat >> minutesLat >> directionLat;


    //We validate the latitude degrees, minutes and direction here

        if (degreesLat < 0 || degreesLat > 180) {
            cout << "Invalid Latitude Degrees. Must be between  0 and 180." << endl;
            return;
        }

        if (minutesLat < 0 || minutesLat >= 60) {
            cout << "Invalid Latitude Minutes. Must be between 0 and 60." << endl;
            return;
        }

        if (directionLat != 'N' && directionLat != 'S') {
            cout << "Invalid Latitude Direction. Must be N or S" << endl;
            return;
        }


        //We validate the longitude degrees, minutes and direction here

        if (degreesLong < 0 || degreesLong > 180) {
            cout << "Invalid Longitude Degrees. Must be between  0 and 180." << endl;
            return;
        }

        if (minutesLong < 0 || minutesLlong >= 60) {
            cout << "Invalid Longitude Minutes. Must be between 0 and 60." << endl;
            return;
        }

        if (directionLong != 'E' && directionLong != 'W') {
            cout << "Invalid Longitude Direction. Must be E or W" << endl;
            return;
        }

    }
    //Function to display the location in the format required

    void display() {
        cout << degreesLat << "\xf8" << minutesLat << "' " << directionLat << " ";

        cout << degreesLong << "\xf8" << minutesLong << "' " << directionLong << " ";
    }

};



int main()
{
    
}

