#include "Athlete.h"
#include <iostream>
using namespace std;
Athlete::Athlete()
{

}

Athlete::Athlete(int height, int weight, char gender){
        m_height = height;
        m_weight = weight;
        m_gender = gender;

}
int Athlete::getHeight(){
    return m_height;
}
int Athlete::setHeight(int height){
    m_height = height;
}
int Athlete::getWeight(){
    return m_weight;
}
int Athlete::setWeight(int w){
    m_weight = w;
}
int Athlete::getGender(){
    return m_gender;
}
int Athlete::setGender(char g){
    m_gender = g;
}
