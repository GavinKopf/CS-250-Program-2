#include "VolleyBall.h"
#include "Athlete.h"
#include <iostream>
using namespace std;

    VolleyBall::VolleyBall(){

    }
    VolleyBall::VolleyBall(string s, float f){
        m_position = s;
        m_reationTime = f;
    }
    string VolleyBall::getPosition() {
        return m_position;
    }
     void VolleyBall::setPosition(string p) {
        m_position = p;
    }
    float VolleyBall::getReationTime(){
        return m_reationTime;
    }
    void VolleyBall::setReationTime(float r){
        m_reationTime = r;
    }
