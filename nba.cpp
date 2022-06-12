#include "nba.hpp"
 using namespace std;
 
 
nba::nba(vector<Team> new_teams)
{

    for (size_t i = 0; i < 20; i++)
    {
        this->teams[i] = new_teams[i]; 
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
                int x = home->points = ((rand() % 50) + 55);
                int y = this->teams[i].points = ((rand() % 50) + 50);

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
            }
        }
        
    }
    
}

nba::~nba()
{
}
