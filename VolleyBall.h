#ifndef VOLLEYBALL_H
#define VOLLEYBALL_H

#include "Athlete.h"
#include <string>

using namespace std;
class VolleyBall : public Athlete
{
    public:
        VolleyBall();
        VolleyBall(string, float);

        string getPosition();
        void setPosition(string);
        float getReationTime();
        void setReationTime(float val);
    protected:

    private:
        string m_position;
        float m_reationTime;
};

#endif // VOLLEYBALL_H
