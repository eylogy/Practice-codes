#include <iostream>
    using namespace std;

    int main() {

        double StudentGrades[3][2];
        string SchoolSubjects[3][2] = {
            {"Math", "Science"},
            {"Math", "Science"},
            {"Math", "Science"}
        };
        // Stores the average of each student
        double studentAverageList[3];

        // Ask the user to enter the grades
        cout << "Student Grades: " << endl;
        for ( int GradeRow = 0; GradeRow < 3; GradeRow++) {
            for (int GradeColumn = 0; GradeColumn < 2; GradeColumn++) {
            cout << "Enter your student grade for " << SchoolSubjects[GradeRow][GradeColumn] << " for student " << GradeRow + 1 << ": ";
            cin >> StudentGrades[GradeRow][GradeColumn]; 
            }
        }

        // Compute the average of each student
        for (int GradeRowAvg = 0; GradeRowAvg< 3; GradeRowAvg++) {
            double studentAverage = 0;
            for (int GradeColumnAvg = 0; GradeColumnAvg < 2; GradeColumnAvg++) {
                studentAverage += StudentGrades[GradeRowAvg][GradeColumnAvg];
            }
            studentAverageList[GradeRowAvg] = studentAverage / 2;
        }

        // Display each student's grades, average, and remark
        cout << endl << "===== RESULTS =====" << endl;
        int topStudentRow = 0;   // keeps track of the highest average
        for (int GradeRowShow = 0; GradeRowShow < 3; GradeRowShow++) {
            cout << "Student " << GradeRowShow + 1 << endl;
            for (int GradeColumnShow = 0; GradeColumnShow < 2; GradeColumnShow++) {
                cout << "  " << SchoolSubjects[GradeRowShow][GradeColumnShow] << ": " << StudentGrades[GradeRowShow][GradeColumnShow] << endl;

                // Scenario: grade is not between 0 and 100
                if (StudentGrades[GradeRowShow][GradeColumnShow] < 0 ||
                    StudentGrades[GradeRowShow][GradeColumnShow] > 100) {
                    cout << "  Invalid grade!" << endl; 
                }
            }
            cout << "  Average: " << studentAverageList[GradeRowShow] << endl;

            // Scenario: passed or failed (75 and up is passed)
            if (studentAverageList[GradeRowShow] >= 75) {
                cout << "  Remark: Passed" << endl;
            } else {
                cout << "  Remark: Failed" << endl;
            }

            // Scenario: check if this student has the highest average so far
            if (studentAverageList[GradeRowShow] > studentAverageList[topStudentRow]) {
                topStudentRow = GradeRowShow;
            }
        }

        // Show the top student
        cout << endl << "Top student: Student " << topStudentRow + 1 << endl;

    return 0;
    }
