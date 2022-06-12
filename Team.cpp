#include "Team.hpp"

Team::Team(string name,double talent)
{
    this->talent = talent;
    this->numOfLose = 0;
    this->numOfWin = 0;
    this->stat = 0;
    this->name = name;
}

string Team:: get_name()
{
    return this->name;
}

void Team::set_name(string name)
{
    this->name = name;
}

double Team::get_talent()
{
    return this->talent;
}

ostream &operator<<(ostream &os,Team &t)
{
    os << t.get_name()<<"  W: "<<t.numOfWin<<"  L:"<<t.numOfLose<<endl;
    return os;    
}


Team::~Team()
{
}
