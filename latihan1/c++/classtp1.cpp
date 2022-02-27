/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 1 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

#include <iostream>
#include <string>

using namespace std;

class teamdata{
    //membuat atribut private
	private:
        string team;
        string country;
        string est;
        string playername;

    public:
        teamdata(){
        }

        void setteam(string team){
            this->team = team;
        }
        void setcountry(string country){
            this->country = country;
        }
        void setest(string est){
            this->est = est;
        }
        void setplayer(string playername){
            this->playername = playername;
        }

        string getteam(){
            return team;
        }
        string getcountry(){
            return country;
        }
        string getest(){
            return est;
        }
        string getplayer(){
            return playername;
        }

        ~teamdata(){
        }
};
