//
// Created by Aidan Patrick Hayes on 3/28/23.
//

#include "SkiDisplayer.h"

SkiDisplayer::SkiDisplayer() : ExerciseDisplayer(){
}

SkiDisplayer::SkiDisplayer(string exerciseType, int distance, int time, int elevation,
                           int heartRate, string month, string date,string mtnRange){
    this->exerciseType = exerciseType;
    this->distance = distance;
    this->time = time;
    this->elevation = elevation;
    this->heartRate = heartRate;
    this->month = month;
    this->date = date;
    this->mtnRange = mtnRange;
}

void SkiDisplayer::setMtnRange(string mtnRange){
    this->mtnRange = mtnRange;
}
string SkiDisplayer::getMtnRange(){
    return mtnRange;
}
