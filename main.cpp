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
    
    t.push_back(Boston);
    t.push_back(Brooklyn);
    t.push_back(NewYork);
    t.push_back(Philadelphia);
    t.push_back(Toronto);
    t.push_back(Chicago);
    t.push_back(Cleveland);
    t.push_back(Detroit);
    t.push_back(Indiana);
    t.push_back(Milwaukee);
    t.push_back(Atlanta);
    t.push_back(Charlotte);
    t.push_back(Miami);
    t.push_back(Orlando);
    t.push_back(Washington);
    t.push_back(Golden);
    t.push_back(LosAngeles);
    t.push_back(Dallas);
    t.push_back(Minnesota);
    t.push_back(Denver);

    nba game(t);
    game.games();
    cout<<"\n";
    /***************** The top 5 teams ****************/
    cout<<"***************** The top 5 teams ****************\n\n";
    vector <Team> res = game.leaders(5);
    for (size_t i = 0; i < 5; i++)
    {
        cout<<i+1<<") "<<res[i]<<endl;
    }
    cout<<"\n\n";

     /***************** The longest winning streak****************/
    cout<<"***************** The longest winning streak ****************\n\n";
    Team longest = game.The_longest_run_of_victories();
    cout<<longest.get_name()<<"with " <<longest.wins<<" wins in a row!!!"<<endl;
    cout<<"\n\n";

    // cout<<game;   

}