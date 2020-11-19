#ifndef LAB_9_DISTANCE_H
#define LAB_9_DISTANCE_H

#include <iostream>

using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    public:
        Distance();
        Distance(int ft, float in);
        Distance operator+(const Distance & d) const;
        Distance operator+(const int i) const;
        Distance operator-(const Distance & d) const;
        Distance operator++(int);

        friend bool operator<(const Distance & d1, const Distance & d2);
        friend bool operator>(const Distance & d1, const Distance & d2);
        friend ostream& operator<<(ostream& s, const Distance& d);
        friend istream& operator>>(istream& s, Distance& d);
};


#endif //LAB_9_DISTANCE_H
