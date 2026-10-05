#include<iostream>
using namespace std ;

class TimeConverter{
    private : 
             int hours;
             int minutes;
             int seconds;
    
    public : 
           void secondsToTime(){
                int totalSeconds;

                cout << "Enter total seconds: ";
                cin >> totalSeconds;

                hours = totalSeconds / 3600;
                totalSeconds = totalSeconds % 3600;

                minutes = totalSeconds / 60;
                seconds = totalSeconds % 60;

                cout << hours << ":" << minutes << ":" << seconds;
                }
            void TimeToSeconds(){
                cout<< "Enter hours : ";
                cin >> hours;

                cout << "Enter minutes : ";
                cin >> minutes;

                cout << "Enter seconds : ";
                cin >> seconds;

                int totalseconds;

                totalseconds = (hours * 3600) + (minutes * 60) + (seconds);
                cout << "Total seconds: " << totalseconds << endl;
            }
};

int main(){

    TimeConverter converter;
     
     int choice;
     int totalSeconds;


     cout << "1. Convert Seconds to HH:MM:SS" << endl;
     cout << "2. Convert HH:MM:SS to Seconds" << endl;
     cout << "Enter your choice: ";
     cin >> choice;

     if (choice == 1)
     {
        converter.secondsToTime();
     }else if (choice == 2)
     {
        converter.TimeToSeconds();
     }
     else{
        cout << "Invalid Choice" << endl;
     }
     

    return 0 ;
}