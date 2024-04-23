# HW2 **BMI calculator**

## 題目
Farmer John wants to calculate BMIs for his family. Consider the following input file *file_in*:
170 68 
160 85 
162 43 
167 80 
192 58 
0 0 
There are multiple lines. Each line consists of two integers, representing height (in centimeter) and mass (in kilogram) for a family member of John. The input file ends up with two zeroes. Write a C++ program to read in *file_in* and create a file *file_out* with the following format: 
23.53 Normal 
33.2 Obese Class I (ModeratelyObese) 
16.38 Underweight 
28.69 Overweight 
15.73 Severely underweight

## 1介紹BMI function
``void  setMember_data(fstream&  file);``   
- 將檔案裏面的資料(身高)與(體重)讀取出來
``void  cal_bmi();``
- 計算讀取出來的BMI
``judge_standard()``
- 計算完BMI後，得知每個BMI的標準，並給予評價
## 2編譯程式
### 2.1使用Makefile
- Makefile可以可以將要在g++編譯器上打的指令進行打包，這樣可以減少每一次在terminal輸入指令的次數，也可以避免多次輸入打錯的風險。
- Makefile code
```Makefile
main: BMI.o main.o
	g++ -o BMI BMI.o main.o
	
BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp
	
main.o: main.cpp BMI.h
	g++ -c main.cpp

clean:
	rm BMI *.o
```
## 3執行程式
在terminal輸入``./BMI.exe``後，程式會將你事先準備好的檔案(.txt)，拿去運算，算完之後，會將算完的BMI跟評價傳回到另一個準備好的檔案(.txt)，在這個檔案可以看到執行結果。
