//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
    int count=0;
    float sum=0;
    float sum2=0;
    float Mean;
    string text;
    ifstream score("score.txt");
    while(getline(score,text)){

    
    cout<<text<<"\n";
    sum += atof(text.c_str());
    sum2 += pow(atof(text.c_str()),2);
    count++;
    }
    



Mean=sum/count;
cout<<"Number of data = "<< count <<"\n";
cout<<"Meam = "<< Mean<<'\n';
cout<<"Standard deviation = "<< sqrt((sum2/count)-pow(Mean,2))<<'\n';
score.close();
return 0;
}
