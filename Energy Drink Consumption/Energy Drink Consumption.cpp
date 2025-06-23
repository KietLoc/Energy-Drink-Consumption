#include <iostream>
using namespace std;

double calcEDrinker(int surveyedP, double eDR) //Calculate buyers of one or more e-drinks per week
{
    return surveyedP * eDR;
};

double calcCEDrinker(int eDrinker, double citrusEDR) //Calculate e-drinkers that likes citrus-flavored drinks
{
    return eDrinker * citrusEDR;
};

int main()
{
    //Definitions and value assignments
    const int surveyedP = 16500;
    const double eDR = 0.15;
    const double citrusEDR = 0.58;
    
    //eDrinker and citrusDrinker are treated as integers because they are not logical to result in anything but a whole person.
    int eDrinker = calcEDrinker(surveyedP, eDR);
    int citrusDrinker = calcCEDrinker(eDrinker, citrusEDR); 

    cout << "Out of " << surveyedP << " about " << eDrinker << " purchase energy drinks one or more times a week and about " << citrusDrinker << " prefers citrus-flavored energy drinks." << endl;

    return 0;
};


