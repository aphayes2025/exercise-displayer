//
// Created by Aidan Patrick Hayes on 3/28/23.
//

#ifndef EXERCISE_DISPLAYER_EXERCISEDISPLAYER_H
#define EXERCISE_DISPLAYER_EXERCISEDISPLAYER_H


#include <string>
#include <ostream>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

class ExerciseDisplayer {
protected:
    string exerciseType;
    int distance;
    int time;
    int elevation;
    int heartRate;
    string month;
    string date;

public:
    ExerciseDisplayer();
    ExerciseDisplayer(string exerciseType, int distance,
                      int time, int elevation, int heartRate, string month, string date);

    // getters
    string getExerciseType() const;
    int getDistance() const;
    int getTime() const;
    int getElevation() const;
    int getHeartRate() const;
    string getMonth() const;
    string getDate() const;

    // setters
    void setExerciseType(string exerciseType);
    void setDistance(int distance);
    void setTime(int time);
    void setElevation(int elevation);
    void setHeartRate(int heartRate);
    void setMonth(string month);
    void setDate(string date);

    // overloaded operators
    friend ostream& operator << (ostream& outs, const ExerciseDisplayer &disp);
    friend bool operator == (const ExerciseDisplayer dispLeft, const ExerciseDisplayer dispRight);
    friend bool operator > (const ExerciseDisplayer dispLeft, const ExerciseDisplayer dispRight);
    friend bool operator < (const ExerciseDisplayer dispLeft, const ExerciseDisplayer dispRight);


    // displaying the longest distance function
    int longestDistance(vector<ExerciseDisplayer> &exerciseDisp);


};


#endif //EXERCISE_DISPLAYER_EXERCISEDISPLAYER_H
