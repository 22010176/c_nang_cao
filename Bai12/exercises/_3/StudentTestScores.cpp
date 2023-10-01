#include <string>
#include  "StudentTestScores.h"

void StudentTestScores::createTestScoresArray(int size) {
    numTestScores = size;
    testScores = new double[size];
    for (int i = 0; i < size; i++) testScores[i] = DEFAULT_SCORE;
}

StudentTestScores::StudentTestScores(std::string name, int numScores) {
    studentName = name;
    createTestScoresArray(numScores);
}
StudentTestScores::StudentTestScores(const StudentTestScores& obj) {
    studentName = obj.studentName, numTestScores = obj.numTestScores;
    testScores = new double[numTestScores];
    for (int i = 0; i < numTestScores; i++) testScores[i] = obj.testScores[i];
}
StudentTestScores::~StudentTestScores() { delete[] testScores; };
void StudentTestScores::setTestScore(double score, int index) { testScores[index] = score; }
void StudentTestScores::setStudentName(std::string name) { studentName = name; }
std::string StudentTestScores::getStudentName() const { return studentName; }
int StudentTestScores::getNumTestScores() { return numTestScores; }
double StudentTestScores::getTestScore(int index) const { return testScores[index]; }
void StudentTestScores::operator=(const StudentTestScores& right) {
    delete[] testScores;
    studentName = right.studentName;
    numTestScores = right.numTestScores;

    testScores = new double[numTestScores];
    for (int i = 0; i < numTestScores; i++) testScores[i] = right.testScores[i];
}
