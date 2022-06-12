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
                int x = home->points = ((rand() % 50) + 50)+ 5;
                int y = this->teams[i].points = ((rand() % 50) + 50);

                if( x + (home->get_talent()*10) >= y + (this->teams[i].get_talent()*10))
                {
                    home->numOfWin++;
                    this->teams[i].numOfLose++;
                    home->win(1);
                    this->teams[i].win(0);

                }
                else 
                {
                    home->numOfLose++;
                    this->teams[i].numOfWin++;
                    home->win(0);
                    this->teams[i].win(1); 
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

vector<Team> nba::leaders(int num)
{
    vector<Team> res;
    for (size_t i = 0; i < num; i++)
    {
        res.push_back(teams[i]);
    }
    return res;
}

Team nba::The_longest_run_of_victories()
{
    Team* res;
    int longest = 0;
    for (size_t i = 0; i <20; i++)
    {
        if(teams[i].wins>longest)
        {
            longest = teams[i].wins;
            res = &(teams[i]);
        }
    }
    return (*res);
}

nba::~nba()
{
}
