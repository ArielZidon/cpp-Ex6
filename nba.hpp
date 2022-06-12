#include <iostream>
#include <string>
#include <vector>
#include "Team.hpp"

using namespace std;
class nba
{
private:
    vector <Team> teams;
    vector <Team> table;

public:
    nba(vector<Team> new_teams);
    void games();
    friend ostream &operator<<(ostream &os,nba &g);
    ~nba();
};