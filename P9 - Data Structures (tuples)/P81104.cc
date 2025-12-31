#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Subject {
    string name;
    double mark;
};

struct Student {
    string name;
    int idn;
    vector<Subject> subj;
};

double mark(int idn, string name, const vector<Student>& stu) {
    for (int i = 0; i < stu.size(); ++i) {
        if (stu[i].idn == idn) {
            for (int j = 0; j < stu[i].subj.size(); ++j) {
                if (stu[i].subj[j].name == name) {
                    return stu[i].subj[j].mark;
                }
            }
            return -1;
        }
    }
    return -1;
}

double mean(const vector<Subject>& subj) {
    double sum = 0;
    int count = 0;
    for (int i = 0; i < subj.size(); ++i) {
        if (subj[i].mark != -1) {
            sum += subj[i].mark;
            count++;
        }
    }
    if (count == 0) return -1;
    return sum / count;
}

void count(const vector<Student>& stu, int idn, string name, int& counter) {
    double ref_mark = mark(idn, name, stu);
    counter = 0;
    for (int i = 0; i < stu.size(); ++i) {
        double avg = mean(stu[i].subj);
        if (avg > ref_mark) {
            counter++;
        }
    }
}