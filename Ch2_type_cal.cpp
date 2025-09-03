#include <iostream>
#include <iomanip>
using namespace std;

// int main()
// {
//     int count = 5;
//     // 遞增和遞減整數 : count = count + 1, count += 1, ++count
//     // ++count 和 --count為prefix(前置)形式
//     // total = ++count + 6  (count + 1後再+6 )
//     // total = --count + 6  (count - 1後再+6 )
//     int total = ++count + 6;
//     cout<< total 
//         << endl 
//         << count
//         << endl;
//     // count++ 和 count--為postfix(後置)形式
//     // total = count++ + 6  執行順序為 1. total = count + 6  2. ++count
//     count = 5;
//     int total1 = count++ + 6;
//     cout<< total1
//         << endl  
//         << count
//         << endl;
    
//     count = 5;
//     int total2 = 6 + (count++);
//     cout<< total2
//         << endl  
//         << count
//         << endl;
    
//     count = 5;
//     int total3 = (count++) + 6;
//     cout<< total3
//         << endl  
//         << count
//         << endl;
    
//     return 0;
// }



// int main(){
//     float flvalue1 = 0.1F;
//     float flvalue2 = 2.1F;
//     flvalue1 -= 0.09F;
//     flvalue2 -= 2.09F;
//     // cout << flvalue1 - flvalue2 <<endl;  // Ans: 7.45058e-0.09, 如果再乘10^10則答案是74.5，結論不要信任小數值的浮點表示法
//     cout << setprecision(14) << fixed;  //setprecision和 setw需include iomanip
//     cout << flvalue1 - flvalue2 <<endl; // Ans: 0.00000000745058

//     cout << setprecision(5) << scientific;
//     cout << flvalue1 - flvalue2 <<endl; // Ans: 7.45058e-09

//     return 0;
// }

// 字元處理
// int main(){
//     char letter = 'A';
//     char letter1 = 65;  // 使用ASCII碼查詢
//     cout << letter << endl;     // A
//     cout << letter1 <<endl;     // A 
//     letter += 2;
//     cout << letter << endl;     // C (67)

//     // 用unsigned儲存
//     unsigned char ch = 8U;  // 根據編譯器使用的8-位元字元，數值範圍0~255U
//     cout << ch << endl;     //
//     return 0;
// }


// int main(){
// //     char ch = 0;    //init
//     char ch(0);     //init
// //     int ch_value = 0;   //init
//     int ch_value(0);     //init
//     cout << "Enter a character: ";
//     cin >> ch;
//     ch_value = ch;  //自動轉換
//     cout << endl
//          << ch << " is " << ch_value;

//     ch_value = ++ch;
//     cout << endl
//          << ch << " is " << ch_value
//          << endl; 
//      // wchar_t wide_letter = L'\x0402';
//      wchar_t wide_letter = L'Z';
//      char letter('A');
//      cout << wide_letter << endl
//           << letter << endl;

//     return 0;
// }

/* p60. example1 */
// int main(){
//      float radius(0.F);
//      float pi = 3.14159F;
//      cout << "Enter Enter the circle radius(m): ";
//      cin >> radius;
//      // float circle = pi * radius * radius;
//      // cout << "The circle radius is : "<< circle << " m^2 " << endl;10
//      cout << "The circle radius is : "<< pi * radius * radius << " m^2 " << endl;

//      return 0;
// }

/* p60. example2 */
// int main(){
//      float radius(0.F);
//      float pi = 3.14159F;
//      int cir_prec(5);
//      cout << "Enter the circle radius(m): ";
//      cin >> radius;
//      cout << "Enter the result precision: ";
//      cin >> cir_prec;
//      cout << setprecision(cir_prec) << scientific;
//      // float circle = pi * radius * radius;
//      // cout << "The circle radius is : "<< circle << " m^2 " << endl;10
//      cout << "The circle radius is : "<< pi * radius * radius << " m^2 " << endl;

//      return 0;
// }

/* p60. example3 */
// int main(){
//      // double num1(0L), num2(0L), num3(0L), sum_of_squr(0L);
//      // cout << "Please enter three double numbers: ";
//      // cin >> num1 >> num2 >> num3;
     
//      // sum_of_squr = (num1 * num1) + (num2 * num2) + (num3 * num3);
//      // cout << "Sum of squrares = " << sum_of_squr << endl;

//      double a, b, c, sum;

//      cout << "Please enter three float point numbers: ";
//      cin >> a >> b >> c;

//      // 用一個敘述計算平方和
//      sum = a * a + b * b + c * c;

//      cout << "The sum of the squares of three numbers = " << sum << endl;
//      return 0;
// }

/* p60. example4 */
int main(){
//     int totalInches;    // 使用者輸入的總英吋數
//     int feet, inches;   // 換算後的英尺數與剩餘英吋數

//     cout << "Please enter an integer number of inches: ";
//     cin >> totalInches;

//     // 1 英尺 = 12 英吋
//     feet = totalInches / 12;   // 計算有幾英尺
//     inches = totalInches % 12; // 餘數就是剩下的英吋數

//     cout << totalInches << " inches = "
//          << feet << " feet " << inches << " inches" << endl;

     int user_inches(0);
     int feet(0), inches(0);

     cout << "Enter the integer number of inches: ";
     cin >> user_inches;

     feet = user_inches / 12;
     inches = user_inches % 12;

     cout << user_inches 
          << " inches = " 
          << feet
          << " feet " 
          << inches
          << " inches" << endl;
     return 0;
}