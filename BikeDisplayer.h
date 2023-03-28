//
// Created by Aidan Patrick Hayes on 3/28/23.
//

#ifndef EXERCISE_DISPLAYER_BIKEDISPLAYER_H
#define EXERCISE_DISPLAYER_BIKEDISPLAYER_H


#include "ExerciseDisplayer.h"

class BikeDisplayer : public ExerciseDisplayer{
public:
    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Returns: Calls parent class constructor
     */
    BikeDisplayer();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Returns: sets all protected variables from parent and private from this class
     */
    BikeDisplayer(string exerciseType, int distance, int time, int elevation,
                  int heartRate, string month, string date,string bikeType);

    /**
     * Requires: string mtnRange
     * Modifies: sets new mtnRange
     * Returns: nothing
     */

    void setBikeType(string bikeType);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Returns: returns mtnRange
     */
    string getBikeType();

private:
    string bikeType;
};


#endif //EXERCISE_DISPLAYER_BIKEDISPLAYER_H
