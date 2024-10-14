#ifndef ATHLETE_H
#define ATHLETE_H
#include <iostream>
using namespace std;

class Athlete
{
    public:
        Athlete();
        Athlete(int, int, char);
        int getHeight();
        int setHeight(int);
        int getWeight();
        int setWeight(int);
        int getGender();
        int setGender(char);

    protected:
        int m_height;
        int m_weight;
        int m_gender;
    private:

};

#endif // ATHLETE_H
