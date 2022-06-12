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
    os << t.get_name()<<"  W: "<<t.numOfWin<<"  L: "<<t.numOfLose<<"  STAT: "<<t.points<<endl;
    return os;    
}

bool Team::operator<(const Team & t)
{
    if (numOfWin>t.numOfWin)
    {
        return true;
    }
    else if (numOfWin == t.numOfWin)
    {
        if(points>t.points)
            return true;
    }
    return false;
}

bool operator<(const Team & t1,const Team & t2)
{
    if (t1.numOfWin>t2.numOfWin)
    {
        return true;
    }
    else if (t1.numOfWin == t2.numOfWin)
    {
        if(t1.points>t2.points)
            return true;
    }
    return false;

}
Team::~Team()
{
}
