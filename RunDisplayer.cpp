//
// Created by Aidan Patrick Hayes on 3/28/23.
//

#include "RunDisplayer.h"


RunDisplayer::RunDisplayer() : ExerciseDisplayer(){
}

RunDisplayer::RunDisplayer(string exerciseType, int distance, int time, int elevation,
                           int heartRate, string month, string date, string shoeType){
    this->exerciseType = exerciseType;
    this->distance = distance;
    this->time = time;
    this->elevation = elevation;
    this->heartRate = heartRate;
    this->month = month;
    this->date = date;
    this->shoeType = shoeType;

}

void RunDisplayer::setShoeType(string shoeType) {
    this->shoeType = shoeType;
}

string RunDisplayer::getShoeType() {
    return shoeType;
}