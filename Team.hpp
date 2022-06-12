#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Team
{
private:
    string name;
    double talent;

public:
    int stat;
    int numOfLose;
    int numOfWin;
    int points;

    Team(string name,double talent);
    
    string get_name();
    void set_name(string name);
    double get_talent();
    void set_talent();
    bool operator<(const Team & t);
    friend bool operator<(const Team & t1,const Team & t2);
    friend ostream &operator<<(ostream &os,Team &t);
    ~Team();
};

