//
// Created by Aidan Patrick Hayes on 3/28/23.
//

#include "BikeDisplayer.h"
BikeDisplayer::BikeDisplayer() : ExerciseDisplayer() {
}

BikeDisplayer::BikeDisplayer(string exerciseType, int distance, int time, int elevation,
                             int heartRate, string month, string date, string bikeType){
    this->exerciseType = exerciseType;
    this->distance = distance;
    this->time = time;
    this->elevation = elevation;
    this->heartRate = heartRate;
    this->month = month;
    this->date = date;
    this->bikeType = bikeType;
}

void BikeDisplayer::setBikeType(string bikeType){
    this->bikeType = bikeType;
}

string BikeDisplayer::getBikeType(){
    return bikeType;
}

