#include<bits/stdc++.h>
using namespace std;
class FootBaller{
    public:
    string name;
    int goals;
    int age;
    FootBaller(string name , int goals, int age){
        this->name = name;
        this->goals = goals;
        this->age = age;
    }
    void print(){
        cout <<name << " " << goals <<" " << age << endl;
    }
    void change(FootBaller* f,int age){
        f->age = age;
    }
};
int main(){
    FootBaller f1("Messi",882,39);
    FootBaller f2("Ronaldo",980,41);
    // using pointer manipulation

    FootBaller* ptr = &f1;
    cout << (*ptr).goals << endl;
    (*ptr).goals = 899; // changing the values of the variable using pointer
    f1.change(&f1,40);
    f1.print();
    f2.print();
}