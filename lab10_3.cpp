#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string num;
    int i=0;
    double sum=0, mean, sd,aa;
    while ( getline(score, num))
    {   
        
        sum += stod(num);
        aa += pow(stod(num),2);
        i++;
    }
    mean = sum/i;
    sd = sqrt((aa/i)-pow(mean,2));

    cout << "Number of data = "<<i<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<sd<<endl;
}