#ifndef TENNIS_H
#define TENNIS_H

#include <Athlete.h>
#include <iostream>
using namespace std;

class Tennis : public Athlete
{
    public:
        Tennis();
        Tennis(int, bool);
        int getServerSpeed();
        void setServerSpeed(int);
        bool getServeAndVolley();
        void setServeAndVolley(bool);
    protected:

    private:
        int m_serverSpeed;
        bool m_serveAndVolley;
};

#endif // TENNIS_H
