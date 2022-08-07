#include<iostream>
#include<fstream>
using namespace std;
struct s{
    string name;
    int noOfSkill;


};

struct skillname{
    string nameofskill;
    int level;
};
struct project{
 string name;
 int days;
 int score;
 int bestbefore;
 int numberofRole;
};
struct requiredskill{
    string nameofskill;
    int level;
};


int main(){
    int n,m;
    ifstream file1("input.txt");
    file1>>n>>m;
    int x,y;
    struct s cont[n];
    struct project proj[n];
    
    struct project projecttt[n];
    for(int i=0;i<n;i++){
        file1>>cont[i].name>>cont[i].noOfSkill;
       
        //cout<<cont[i].name<<" "<<cont[i].noOfSkill<<endl;
        struct skillname skill[cont[i].noOfSkill];
        for(int j=0;j<cont[i].noOfSkill;j++){
            file1>>skill[j].nameofskill>>skill[j].level;
            //cout<<skill[j].nameofskill<<" "<<skill[j].level<<endl;
        }

}
//cout<<"Projects"<<endl;
    for(int i=0;i<m;i++){
        file1>>projecttt[i].name>>projecttt[i].days>>projecttt[i].score>>projecttt[i].bestbefore>>projecttt[i].numberofRole;
      
        //cout<<projecttt[i].name<<" "<<projecttt[i].days<<" "<<projecttt[i].score<<" "<<projecttt[i].bestbefore<<" "<<projecttt[i].numberofRole<<endl;
        struct requiredskill reqskill[projecttt[i].numberofRole];
          
        for(int j=0;j<projecttt[i].numberofRole;j++){
            file1>>reqskill[j].nameofskill>>reqskill[j].level;
            //cout<<reqskill[j].nameofskill<<" "<<reqskill[j].level<<endl;
        }

}

ofstream out("output2.txt");


    
    
    
}
// out<<"WebServer"<<endl;
// out<<"Bob Anna"<<endl;
// out<<"Logging"<<endl;
// out<<"Anna"<<endl;
// out<<"WebChat"<<endl;
// out<<"Maria Bob"<<endl;
