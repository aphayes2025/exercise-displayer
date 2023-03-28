//
// Created by Aidan Patrick Hayes on 3/28/23.
//

#ifndef EXERCISE_DISPLAYER_SKIDISPLAYER_H
#define EXERCISE_DISPLAYER_SKIDISPLAYER_H


#include "ExerciseDisplayer.h"

class SkiDisplayer : public ExerciseDisplayer{
public:
    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Returns: Calls parent class constructor
     */
    SkiDisplayer();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Returns: sets all protected variables from parent and private from this class
     */
    explicit SkiDisplayer(string exerciseType, int distance, int time, int elevation,
                          int heartRate, string month, string date,string bikeType);

    /**
     * Requires: string mtnRange
     * Modifies: sets new mtnRange
     * Returns: nothing
     */
    void setMtnRange(string mtnRange);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Returns: returns mtnRange
     */
    string getMtnRange();

private:
    string mtnRange;
};

#endif //EXERCISE_DISPLAYER_SKIDISPLAYER_H
