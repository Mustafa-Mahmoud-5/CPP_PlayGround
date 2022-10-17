#include <iostream>
using namespace std;

int main () {
    // 2D arrays is like a matrix, you can think of it as rows and columns
    // Rows for the subarrays columns for subarrays elements

    // students and subjects
    double student1[] = {50,60,51};
    double student2[] = {40,50,60};
    double student3[] = {80, 90, 89};


    // same problem could be solved using 2D arrays in which we make an array for students themselves

    double students_subjects[][3] =  { { 50,60,51},{40,50,60},{80, 90, 89} };

    cout << students_subjects[1][1] << endl;

    return 0;
}