#include "nba.hpp"
#include "Team.hpp"

int main()
{
    vector<Team> t;
    Team Boston("Boston Celtics",0.9);
    Team Brooklyn("Brooklyn Nets",0.4);
    Team NewYork("New York Knicks",0.3);
    Team Philadelphia("Philadelphia 76ers",0.5);
    Team Toronto("Toronto Raptors",0.4);
    Team Chicago("Chicago Bulls",0.4);
    Team Cleveland("Cleveland Cavaliers",0.3);
    Team Detroit("Detroit Pistons",0.2);
    Team Indiana("Indiana Pacers",0.2);
    Team Milwaukee("Milwaukee Bucks",0.7);
    Team Atlanta("Atlanta Hawks",0.5);
    Team Charlotte("Charlotte Hornets",0.5);
    Team Miami("Miami Heat",0.8);
    Team Orlando("Orlando Magic",0.4);
    Team Washington("Washington Wizards",0.3);
    Team Golden("Golden State Warriors",0.9);
    Team LosAngeles("Los Angeles Lakers",0.6);
    Team Dallas("Dallas Mavericks",0.8);
    Team Minnesota("Minnesota Timberwolves",0.4);
    Team Denver("Denver Nuggets",0.5);
    t[0] = Boston;
    t[1] = Brooklyn;
    t[2] = NewYork;
    t[3] = Philadelphia;
    t[4] = Toronto;
    t[5] = Chicago;
    t[6] = Cleveland;
    t[7] = Detroit;
    t[8] = Indiana;
    t[9] = Milwaukee;
    t[10] = Atlanta;
    t[11] = Charlotte;
    t[12] = Miami;
    t[13] = Orlando;
    t[14] = Washington;
    t[15] = Golden;
    t[16] = LosAngeles;
    t[17] = Dallas;
    t[18] = Minnesota;
    t[19] = Denver;


    nba game(t);

}