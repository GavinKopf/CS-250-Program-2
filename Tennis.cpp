#include "Tennis.h"
#include "Athlete.h"
#include <iostream>
using namespace std;
Tennis::Tennis()
{
    //ctor
}
Tennis::Tennis(int s, bool sv){
    m_serverSpeed = s;
    m_serveAndVolley = sv;
}
int Tennis::getServerSpeed(){
    return m_serverSpeed;
}
void Tennis::setServerSpeed(int s){
    m_serverSpeed = s;
}
bool Tennis::getServeAndVolley(){
    return m_serveAndVolley;
}
void Tennis::setServeAndVolley(bool sv){
    m_serveAndVolley = sv;
}
