#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float gpa;
    Student(){

    }
    Student(string name , int roll, float gpa){
        this->name = name;
        this->roll = roll;
        this->gpa = gpa;
    }
};
void change(Student& s){
    s.name = "Mehar";
}
int main(){
    Student absaar("absaar",34,9.5);
    cout << absaar.name << endl;
    change(absaar);
    cout << absaar.name << endl;
    Student mehar;
    mehar.name = "Mehar Jamal";
    mehar.roll = 33;
    mehar.gpa = 9.3;
    cout << mehar.name << endl;
    return 0;
}