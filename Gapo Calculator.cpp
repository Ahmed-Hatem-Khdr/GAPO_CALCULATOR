#include <iostream>
#include <string>
using namespace std;

float percentagestogpa(float percentage) {
    if (percentage >= 90) return 4.0;
    else if (percentage >= 85) return 3.6;
    else if (percentage >= 80) return 3.3;
    else if (percentage >= 75) return 3.0;
    else if (percentage >= 72) return 2.7;
    else if (percentage >= 70) return 2.3;
    else if (percentage >= 65) return 2.0;
    else if (percentage >= 63) return 1.7;
    else if (percentage >= 60) return 1.0;
    else return 0.0;
}

int main() {
    int subjectnum;
    string subname; // The name of the subject the user will write
    cout << "->Please Write The Number of Your Subjects: ";
    cin >> subjectnum;
    double full; // The full mark
    cout << "->Please write the full mark of the subjects: ";
    cin >> full;

    float totalGPA = 0; // Initialize totalGPA
    cout << "\n->The Subject Name & Mark:";

    for (int x = 0; x < subjectnum; x++) {
        cout << endl << "-Subject Name Number " << x + 1 << ": ";
        cin >> subname;
        float mark;
        cout << "\nMark: ";
        cin >> mark;

        float percentage = (mark / full) * 100;
        float GPA = percentagestogpa(percentage);

        totalGPA += GPA;
    }

    float POINT = totalGPA / subjectnum; // total GPA points of all subjects
    cout << "\n#Your Total GPA Is: " << POINT << " #"; 
    cout << "\n$$$$ Congratulations $$$$";
    
    return 0;
}