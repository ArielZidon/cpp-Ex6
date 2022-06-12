#include "nba.hpp"
#include <bits/stdc++.h>
 using namespace std;
 
 
nba::nba(vector<Team> new_teams)
{

    for (size_t i = 0; i < 20; i++)
    {
        this->teams.push_back(new_teams[i]); 
    }
    
}

void nba::games()
{
    Team* home;  
    for (size_t i = 0; i <20; i++)
    {  
        home = &(this->teams[i]);

        for (size_t i = 0; i < 20; i++)
        {
            if(home->get_name() != teams[i].get_name())
            {
                int x = home->points = ((rand() % 50) + 55) + (home->get_talent()*10);
                int y = this->teams[i].points = ((rand() % 50) + 50) + (this->teams[i].get_talent()*10);

                if( x >= y)
                {
                    home->numOfWin++;
                    this->teams[i].numOfLose++;

                }
                else 
                {
                    home->numOfLose++;
                    this->teams[i].numOfWin++;
                }
                home->points+=x;
                home->points-=y;

                this->teams[i].points +=y;
                this->teams[i].points-=x;
            }
        }
        
    }
    sort(teams.begin(), teams.end());
}

ostream &operator<<(ostream &os,nba &g)
{
    os<< "NBA LEAGUE: \n"<<endl;
    for (size_t i = 0; i < 20; i++)
    {  
        os<<i+1<<") ";
        os<<g.teams[i]<<endl;
    }
    return os;
    
}

nba::~nba()
{
}
