#include "Distance.h"

Distance::Distance(): feet(0), inches(0.0){

}

Distance::Distance(int ft, float in): feet(ft), inches(in){

}

Distance Distance::operator+(const Distance & d) const {
    int newFt = feet + d.feet;
    float newInches = inches + d.inches;
    while(newInches >= 12){
        newInches -= 12;
        newFt++;
    }
    Distance local(newFt, newInches);
    return local;
}

Distance Distance::operator+(const int i) const {
    int newFt = feet + i;
    Distance local(newFt, inches);
    return local;
}

Distance Distance::operator-(const Distance & d) const {
    int newFt = feet - d.feet;
    float newInches = inches - d.inches;
    while(newInches < 0){
        newInches += 12;
        newFt--;
    }
    Distance local(newFt, newInches);
    return local;
}

Distance Distance::operator++(int){
    feet++;
    return *this;
}

bool operator<(const Distance & d1, const Distance & d2){
    if(d1.feet == d2.feet){
        if(d1.inches < d1.inches)
            return true;
    } else  if(d1.feet < d2.feet)
        return true;
    return false;
}

bool operator>(const Distance & d1, const Distance & d2){
    if(d1.feet == d2.feet){
        if(d1.inches > d1.inches)
            return true;
    } else  if(d1.feet > d2.feet)
        return true;
    return false;
}


ostream& operator<<(ostream& s, const Distance& d){

    s << "Feet: " << d.feet << endl << "Inches: " << d.inches;
    return s;
}

istream& operator>>(istream& s, Distance& d){
    cout << "Input feet: ";
    s >> d.feet;
    cout << "Input inches: ";
    s >> d.inches;
    while(d.inches >= 12){
        d.inches -= 12;
        d.feet++;
    }
    return s;
}


