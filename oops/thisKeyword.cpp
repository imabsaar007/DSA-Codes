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
};
int main(){
    FootBaller f1("Messi",882,39);
    FootBaller f2("Ronaldo",980,41);
    f1.print();
    f2.print();
}