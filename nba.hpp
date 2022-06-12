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
    Team The_longest_run_of_victories();
    friend ostream &operator<<(ostream &os,nba &g);
    vector<Team> leaders(int num); //give the num of leaders team yoi want..

    ~nba();
};