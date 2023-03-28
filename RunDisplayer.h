//
// Created by Aidan Patrick Hayes on 3/28/23.
//

#ifndef EXERCISE_DISPLAYER_RUNDISPLAYER_H
#define EXERCISE_DISPLAYER_RUNDISPLAYER_H


#include "ExerciseDisplayer.h"

class RunDisplayer : public ExerciseDisplayer{
public:
    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Returns: Calls parent class constructor
     */
    RunDisplayer();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Returns: sets all protected variables and private variable from this class
     */
    explicit RunDisplayer(string exerciseType, int distance, int time, int elevation,
                          int heartRate, string month, string date, string shoeType);

    /**
     * Requires: string shoeType
     * Modifies: sets shoe type
     * Returns: nothing
     */
    void setShoeType(string shoeType);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Returns: returns Shoe Type
     */
    string getShoeType();

private:
    string shoeType;
};

#endif //EXERCISE_DISPLAYER_RUNDISPLAYER_H
