// StudentTestScores .h
#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H
#include <string>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores {
private:
    string studentName; // The student ’s name
    double* testScores; // Points to array of test scores
    int numTestScores; // Number of test scores
    // Private member function to create an array of test scores .
    void createTestScoresArray(int size);
public:
    // Constructror
    StudentTestScores(string name, int numScores);
    // Copy constructor
    StudentTestScores(const StudentTestScores& obj);
    // Destructor
    ~StudentTestScores();
    // The setTestScore function sets a specific test score ’s value .
    void setTestScore(double score, int index);
    // Set the student ’s name
    void setStudentName(string name);
    // Get the student ’s name
    string getStudentName() const;
    // Get the number of test scores.
    int getNumTestScores();
    // Get a specific test score .
    double getTestScore(int index) const;
    // Overloaded = operator
    void operator =(const StudentTestScores& right);
};
# endif
