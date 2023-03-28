//
// Created by Aidan Patrick Hayes on 3/28/23.
//

#include "ExerciseDisplayer.h"
#include "RunDisplayer.h"
#include "SkiDisplayer.h"
#include "BikeDisplayer.h"
#include <fstream>

void displaySkiExercise(vector<SkiDisplayer> userDisplayer, ofstream& myFile);
void displayRunExercise(vector<RunDisplayer> userDisplayer, ofstream& myFile);
void displayBikeExercise(vector<BikeDisplayer> userDisplayer, ofstream& myFile);
bool outputUserInfo(string fileName);

int main(){
    // getting input from the user and validating it
    string userFile;
    cout << "Please Enter a file: ";
    cin >> userFile;

    // outputting user info to files
    if (outputUserInfo(userFile)){
        cout << "Check The Individual Files for information about separate running, skiing, and biking activities." << endl;
    }

    // going to python file
    string pythonFile = "python3 graph.py";
    system(pythonFile.c_str());

    return 0;
}


bool outputUserInfo(string fileName){

    bool passed = true;
    // setting up variables
    vector<SkiDisplayer> skiDisplayerVec;
    vector<BikeDisplayer> bikeDisplayerVec;
    vector<RunDisplayer> runDisplayerVec;
    SkiDisplayer mySkiDisp;
    string userInput;
    string userName;
    float distance;
    float time;
    float elevation;
    float heartRate;
    string month;
    string date;
    string mtnType;
    string shoeType;
    string bikeType;

    // opening file for input
    ifstream myFile;
    myFile.open(fileName.c_str());

    // opening files for data
    ofstream myRunOutput;
    myRunOutput.open("dataForGraphs/runData.txt");
    ofstream mySkiOutput;
    mySkiOutput.open("dataForGraphs/skiData.txt");
    ofstream myBikeOutput;
    myBikeOutput.open("dataForGraphs/bikeData.txt");

    // opening three files for output
    ofstream mySkiFile ("SkiFile.txt");
    ofstream myBikeFile ("BikeFile.txt");
    ofstream myRunFile ("RunFile.txt");

    // looping through file in loop and calls individual parse functions once they read key word (ski, run, bike)
    // output these results to three different files for biking, skiing, and running

    if (myFile.is_open()){
        cout << "Worked Succesfully" << endl;

        while (myFile && myFile.peek() != EOF){
            getline(myFile, userInput);
            if (userInput == "Run"){
                myFile >> distance;
                myFile >> time;
                myFile >> elevation;
                myFile >> heartRate;
                myFile >> month;
                myFile >> date;
                myFile >> shoeType;
                runDisplayerVec.push_back(RunDisplayer(userInput, distance, time, elevation, heartRate, month, date, shoeType));
                myRunOutput << distance << endl;
            }
            else if (userInput == "Ski"){
                myFile >> distance;
                myFile >> time;
                myFile >> elevation;
                myFile >> heartRate;
                myFile >> month;
                myFile >> date;
                myFile >> mtnType;
                skiDisplayerVec.push_back(SkiDisplayer(userInput, distance, time, elevation, heartRate, month, date, mtnType));
                mySkiOutput << distance << endl;
            }
            else if (userInput == "Bike"){
                myFile >> distance;
                myFile >> time;
                myFile >> elevation;
                myFile >> heartRate;
                myFile >> month;
                myFile >> date;
                myFile >> bikeType;
                bikeDisplayerVec.push_back(BikeDisplayer(userInput, distance, time, elevation, heartRate, month, date, bikeType));
                myBikeOutput << distance << endl;
            }
        }

        // writing out to files
        displaySkiExercise(skiDisplayerVec, mySkiFile);
        displayRunExercise(runDisplayerVec, myRunFile);
        displayBikeExercise(bikeDisplayerVec, myBikeFile);
    }
    else {
        passed = false;
        cout << "Could not Open";
    }

    // close file
    myFile.close();

    return passed;
}


void displaySkiExercise(vector<SkiDisplayer> userDisplayer, ofstream& myFile) {
    myFile << "Skiing Activities" << endl;
    for (int i = 0; i < userDisplayer.size(); i++){
        myFile << "--------------------------------------------------" << endl;
        myFile << "Month and Date: " << userDisplayer[i].getMonth() << ", " << userDisplayer[i].getDate() << endl;
        myFile << "Exercise Type: " << userDisplayer[i].getExerciseType() << endl;
        myFile << "Distance: " << userDisplayer[i].getDistance() << " Miles" << endl;
        myFile << "Time: " << userDisplayer[i].getTime() << " Minutes" << endl;
        myFile << "Elevation: " << userDisplayer[i].getElevation() << " Feet" << endl;
        myFile << "Heart Rate: " << userDisplayer[i].getHeartRate() << " BPM" << endl;
        myFile << "Mountain: " << userDisplayer[i].getMtnRange()  << endl;
        myFile<< "--------------------------------------------------" << endl;
    }


}


void displayRunExercise(vector<RunDisplayer> userDisplayer, ofstream& myFile) {
    myFile << "Running Activities" << endl;
    for (int i = 0; i < userDisplayer.size(); i++) {
        myFile << "--------------------------------------------------" << endl;
        myFile << "Month and Date: " << userDisplayer[i].getMonth() << ", " << userDisplayer[i].getDate() << endl;
        myFile << "Exercise Type: " << userDisplayer[i].getExerciseType() << endl;
        myFile << "Distance: " << userDisplayer[i].getDistance() << " Miles" << endl;
        myFile << "Time: " << userDisplayer[i].getTime() << " Minutes" << endl;
        myFile << "Elevation: " << userDisplayer[i].getElevation() << " Feet" << endl;
        myFile << "Heart Rate: " << userDisplayer[i].getHeartRate() << " BPM" << endl;
        myFile << "Shoe Type: " << userDisplayer[i].getShoeType() << endl;
        myFile << "--------------------------------------------------" << endl;
    }
}

void displayBikeExercise(vector<BikeDisplayer> userDisplayer, ofstream& myFile) {
    myFile << "Biking Activities" << endl;
    for (int i = 0; i < userDisplayer.size(); i++) {
        myFile << "--------------------------------------------------" << endl;
        myFile << "Month and Date: " << userDisplayer[i].getMonth() << ", " << userDisplayer[i].getDate() << endl;
        myFile << "Exercise Type: " << userDisplayer[i].getExerciseType() << endl;
        myFile << "Distance: " << userDisplayer[i].getDistance() << " Miles" << endl;
        myFile << "Time: " << userDisplayer[i].getTime() << " Minutes" << endl;
        myFile << "Elevation: " << userDisplayer[i].getElevation() << " Feet" << endl;
        myFile << "Heart Rate: " << userDisplayer[i].getHeartRate() << " BPM" << endl;
        myFile << "Bike Type: " << userDisplayer[i].getBikeType() << endl;
        myFile << "--------------------------------------------------" << endl;
    }
}