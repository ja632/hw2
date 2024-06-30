#include<iostream>
#include<fstream>
#include"BMI.h"
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

BMI::BMI(){                              //constructor -> initial private data
   qwe = 0;
}
void BMI::cal_bmi(){                     // calculate bmi
    int size = height.size();
    int count = 0;
    double data,heiht_tranfer;
    cout <<size<<endl;
    for(int i = size - 1;i >= 0 ;i--){
        if(mass.at(i)!= 0 || height.at(i)!=0){
            heiht_tranfer = static_cast<double> (pow(height.at(count),2)) / 10000;
            data = static_cast<double> (mass.at(count))/heiht_tranfer ;
            bmi.push_back(data);
            count = count + 1;
            cout <<heiht_tranfer<<endl;
            }
        else{
            cout <<"file have error signal"<<endl;
        }
        cout <<"test4"<<endl;
        }
    cout <<"test2"<<endl;
}
void BMI::setMember_data(fstream &file){    // please put BMI file
    int data_height,data_mass;
	while(file >> data_height >> data_mass){
        if(data_height == 0 && data_mass ==0){
            cout << "data input finish" << endl;
        }
        else{
        	height.push_back(data_height);
        	mass.push_back(data_mass);
		}
    }
}
/*
vector<int> BMI::getMember_data(){

    return height ;
}*/

vector<double> BMI::get_bmi(){          //get file bmi
    return bmi;
}

vector<string>BMI:: judge_standard(){   //get file bmi review
    vector<string> review;
    string data;
    for(int i = 0;i<bmi.size();i++){
       if(bmi.at(i)<15){
        data = "Very severely underweight";
        review.push_back(data);
       }
       else if(bmi.at(i)> 15 && bmi.at(i)<16){
        data = "Severely underweight";
        review.push_back(data);
       }
       else if(bmi.at(i)> 16 && bmi.at(i)<18.5){
        data = "Underweight";
        review.push_back(data);
       }
       else if(bmi.at(i)> 18.5 && bmi.at(i)<25){
        data = "Normal";
        review.push_back(data);
       }
       else if(bmi.at(i)> 25 && bmi.at(i)<30){
        data = "Overweight";
        review.push_back(data);
       }
       else if(bmi.at(i)> 30 && bmi.at(i)<35){
        data = "Obese Class I (Moderately obese)";
        review.push_back(data);
       }
       else if(bmi.at(i)> 35 && bmi.at(i)<40){
        data = "Obese Class II (Severely obese)";
        review.push_back(data);
       }
       else{
        data = "Obese Class III (Very severely obese) ";
        review.push_back(data);
       }
    }

    return review;
}
