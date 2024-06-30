#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;


class BMI{
    public:
        BMI();
        void setMember_data(fstream& file); //它試圖複製或傳遞 std::fstream 或類似的 I/O 流物件的時候發生的。

                                            //一般來說，這種錯誤通常是由於使用不當的複製操作引起的。請確保你的程式碼中沒有對 I/O 流物件進行多餘的複製，或者確保複製操作的地方是合理的。

                                            //在你的 setMember_data 函數中，你應該傳遞 fstream 的引用而不是直接複製它。
                                            /*It occurs when trying to copy or pass a std::fstream or similar I/O stream object.

                                            Generally speaking, this error is usually caused by improper use of copy operations. Please make sure that your code does not make unnecessary copies of I/O stream objects, or that the places where the copies are made are reasonable.

                                            In your setMember_data function, you should pass a reference to fstream instead of copying it directly.*/
        // vector<int> getMember_data();
        void cal_bmi();
        vector<double> get_bmi();
        vector<string> judge_standard();
    private:
        vector<int> height;
        vector<int> mass ;
        vector<double> bmi;
        int qwe;
        

};
