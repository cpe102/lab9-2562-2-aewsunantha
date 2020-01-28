//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream cheerbook;
    cheerbook.open("cheerbook.txt");
    ofstream dest("D:\\261102\\lab9-2562-2-aewsunantha\\cheerbook_copy.txt");
    string text;
    dest<<"-------------------- SOTUS ---------------------"<<"\n";
    while (getline(cheerbook,text)){
        dest<<text<<"\n";
       
    }
   dest<<"-------------------- SOTUS ---------------------";
   dest.close();
   return 0;
}
    