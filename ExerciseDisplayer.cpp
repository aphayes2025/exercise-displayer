//
// Created by Aidan Patrick Hayes on 3/28/23.
//

#include "ExerciseDisplayer.h"


ExerciseDisplayer::ExerciseDisplayer() {
    exerciseType = "run";
    distance = 1;
    elevation = 1;
    time = 1;
    heartRate = 1;
    month = "January";
    date = "1";
}

ExerciseDisplayer::ExerciseDisplayer(string exerciseType, int distance, int time, int elevation,
                                     int heartRate, string month, string date) {
    this->exerciseType = exerciseType;
    this->distance = distance;
    this->time = time;
    this->elevation = elevation;
    this->heartRate = heartRate;
    this->month = month;
    this->date = date;
}

string ExerciseDisplayer::getExerciseType() const {
    return exerciseType;
}

int ExerciseDisplayer::getDistance() const {
    return distance;
}

int ExerciseDisplayer::getTime() const {
    return time;
}

int ExerciseDisplayer::getElevation() const {
    return elevation;
}

int ExerciseDisplayer::getHeartRate() const {
    return heartRate;
}

string ExerciseDisplayer::getMonth() const {
    return month;
}

string ExerciseDisplayer::getDate() const {
    return date;
}

void ExerciseDisplayer::setExerciseType(string exerciseType) {
    this->exerciseType = exerciseType;
}
void ExerciseDisplayer::setDistance(int distance) {
    this->distance = distance;
}
void ExerciseDisplayer::setTime(int time) {
    this->time = time;
}
void ExerciseDisplayer::setElevation(int elevation) {
    this->elevation = elevation;
}
void ExerciseDisplayer::setHeartRate(int heartRate){
    this->heartRate = heartRate;
}
void ExerciseDisplayer::setMonth(string month) {
    this->month = month;
}
void ExerciseDisplayer::setDate(string date) {
    this->date = date;
}

ostream& operator << (ostream& outs, const ExerciseDisplayer &disp) {
    outs << disp.getExerciseType();
    outs << disp.getDistance();
    outs << disp.getTime();
    outs << disp.getElevation();
    outs << disp.getHeartRate();
    outs << disp.getMonth();
    outs << disp.getDate();
}

bool operator == (const ExerciseDisplayer dispLeft, const ExerciseDisplayer dispRight){
    return dispLeft.distance == dispRight.distance;
}
bool operator < (const ExerciseDisplayer dispLeft, const ExerciseDisplayer dispRight){
    return dispLeft.distance < dispRight.distance;
}
bool operator > (const ExerciseDisplayer dispLeft, const ExerciseDisplayer dispRight){
    return dispLeft.distance > dispRight.distance;
}

int ExerciseDisplayer::longestDistance(vector<ExerciseDisplayer> &exerciseDisp) {
    int longestDistance = 0;
    for (int i = 0; i < exerciseDisp.size(); i++) {
        if (exerciseDisp[i].getDistance() > longestDistance) {
            longestDistance = exerciseDisp[i].getDistance();
        }
    }
    return longestDistance;
}
