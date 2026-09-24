#include<bits/stdc++.h>
using namespace std;
class FootBaller{
    public:
    string name;
    int goals;
    int age;
    FootBaller(string name, int goals, int age){
        this->name = name;
        this->goals = goals;
        this->age = age;
    }
    void print(){
        cout << name << " " << age << " " << goals << endl;
    }
};
int main(){
    FootBaller* f1 = new FootBaller("Messi",786,35);
    cout << f1->age;
}