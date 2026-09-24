#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float gpa;
};
void change(Student& s){
    s.name = "Mehar";
}
int main(){
    Student absaar;
    absaar.name="Absaar";
    absaar.roll=10;
    absaar.gpa=8.5;
    cout << absaar.name << endl;
    change(absaar);
    cout << absaar.name << endl;
    return 0;
}