#include<iostream>
#include<fstream>
#include"BMI.h"
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;



int main(){

    fstream family_member,outfile ;
    BMI bmi;
    vector<double> data_bmi;
    vector<string> data_review;
    family_member.open("family_member.txt",ios::in);
    if(!family_member.is_open()) // check file deny open
    {
        cout <<"cannt open the memberfile" <<endl;
        exit(1); // 終止程式執行
    }
    bmi.setMember_data(family_member); 
    cout <<"file store in bmi data \\"<<endl;

    bmi.cal_bmi();              // calculate bmi
    cout << "finish1" << endl;
    data_bmi = bmi.get_bmi();   // get bmi data
    cout << "finish2" << endl;
    data_review = bmi.judge_standard(); // get bmi review
    cout << "finish3" << endl;
    outfile.open("judge_family_member.txt",ios::out);
    cout << "finish4" << endl;
    if(!outfile.is_open()){
        cout << "cannt open the judge_family_member" << endl;
        exit(1); // 終止程式執行
    }
    for(int i = 0;i<data_bmi.size();i++){
        outfile << data_bmi.at(i) << "\t" <<data_review.at(i) <<endl;
        }
    cout << "finish" << endl;
    return 0;
}

