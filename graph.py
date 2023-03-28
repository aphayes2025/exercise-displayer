# graphing the user's data
import matplotlib.pyplot as plt

def yAxisGetter(lst):
    # setting counters
    lowCount = 0
    medCount = 0
    highCount = 0

    # looping through lst
    for i in lst:
        if float(i) <= 4:
            lowCount += 1
        elif float(i) <= 8:
            medCount += 1
        else:
            highCount += 1
    rangeLst = [lowCount, medCount, highCount]

    return rangeLst

if __name__ == "__main__":
    # setting blank vars
    runLst = []
    skiLst = []
    bikeLst = []

    # opening up all the files
    with open("dataForGraphs/runData.txt") as f:
        for line in f:
            runLst.append(line)

    with open("dataForGraphs/skiData.txt") as f:
        for line in f:
            skiLst.append(line)

    with open("dataForGraphs/bikeData.txt") as f:
        for line in f:
            bikeLst.append(line)

    # getting the ranges for the run lst
    rangeRunLst = yAxisGetter(runLst)
    rangeSkiLst = yAxisGetter(skiLst)
    rangeBikeLst = yAxisGetter(bikeLst)

    # asking user what graph they want to see and validating it
    user_choice = int(input("What graph Would you like to see, run (1), ski (2), bike(3), quit(4): "))
    while user_choice != 1 and user_choice != 2 and user_choice != 3 and user_choice != 4:
        print("Not a valid option please choose again!")
        user_choice = int(input("What graph Would you like to see, run (1), ski (2), bike(3), quit(4): "))

    # getting the user's choice
    if user_choice == 1:
        # plotting the bar graph for running
        xAxis = ["0-4 (Miles)", "5-8 (Miles)", "9+ (Miles)"]
        plt.bar(xAxis, rangeRunLst)
        plt.title("Running Bar Graph for Distances")
        plt.show()
    elif user_choice == 2:
        # plotting the bar graph for skiing
        xAxis = ["0-4 (Miles)", "5-8 (Miles)", "9+ (Miles)"]
        plt.bar(xAxis, rangeSkiLst)
        plt.title("Skiing Bar Graph for Distances")
        plt.show()
    elif user_choice == 3:
        # plotting the bar graph for biking
        xAxis = ["0-4 (Miles)", "5-8 (Miles)", "9+ (Miles)"]
        plt.bar(xAxis, rangeBikeLst)
        plt.title("Biking Bar Graph for Distances")
        plt.show()
    else:
        print("Have a great day!")