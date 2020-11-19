#include <iostream>
#include "Distance.h"
#include "time24.h"
#include "time12.h"


using namespace std;

int main() {
    Distance dist1, dist3, dist4; //define distances
    cin >> dist1;
    Distance dist2(11, 6.25); //define, initialize dist2
    dist3 = dist1 + dist2; //single '+' operator
    dist4 = dist1 - dist2; //friend '-' operators
    //display all lengths
    cout << "dist1 = ";
    cout << dist1 << endl;
    cout << "dist2 = ";
    cout << dist2 << endl;
    cout << "dist3 = ";
    cout << dist3 << endl;

    cout << "dist4 = ";
    cout << dist4 << endl;

    dist2 = dist1++; //Increase feet by one
    dist3 = dist2 + 10;//10 mean feet
    cout << "dist2 = ";
    cout << dist2 << endl;
    cout << "dist3 = ";
    cout << dist3 << endl;

    if(dist4 < dist1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


    int h, m, s;

    while(true) {
        //get 24-hr time from user
        cout << "Enter 24-hour time: \n";
        cout << " Hours (0 to 23): ";
        cin >> h;
        if(h > 23) //quit if hours > 23
            return(1);
        cout << " Minutes: ";
        cin >> m;
        cout << " Seconds: ";
        cin >> s;

        time24 t24(h, m, s); //make a time24
        cout << "You entered: "; //display the time24
        t24.display();

        time12 t12 = t24; //convert time24 to time12

        cout << "\n12-hour time: "; //display equivalent time12
        t12.display();
        cout << "\n\n";
    }

    return 0;
}
