#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>
using namespace std;

int count1 = 100;   //Global version of count1

int main(){
    /* 明確轉換 casting */
    // const long feet_per_yard = 3;
    // const long inches_per_foot = 12;

    // double yards(0.0L);
    // long yds = 0;
    // long ft = 0;
    // long ins = 0;

    // cout << "Enter a length in yards as a decimal: ";
    // cin >> yards;

    // // Get the length as yards, feet, and inches
    // yds = static_cast<long>(yards); //保留碼的整數位數
    // ft = static_cast<long>((yards - yds) * feet_per_yard);  //將碼的小數位數轉換成英尺
    // ins = static_cast<long>(yards * feet_per_yard * inches_per_foot) % inches_per_foot; //將英尺的小數位數轉換成英吋

    // cout << yards << " yards convert to "
    //      << yds << " yards "
    //      << ft << " feet "
    //      << ins << " inches"
    //      << endl;
    
    /* 型態大小、找出範圍和二進制值 */
    // cout << "Size of type char is " << sizeof(char) << "byte" << endl;
    // cout << "Size of type short is " << sizeof(short) << "byte" << endl;
    // cout << "Size of type int is " << sizeof(int) << "byte" << endl;  
    // cout << "Size of type unsigned int is " << sizeof(unsigned int) << "byte" << endl;  
    // cout << "Size of type signed int is " << sizeof(signed int) << "byte" << endl;
    // cout << "Size of type float is " << sizeof(float) << "byte" << endl;
    // cout << "Size of type double is " << sizeof(double) << "byte" << endl;
    // cout << "Size of type long double is " << sizeof(long double) << "byte" << endl;

    // cout << "Max value of type short is " << numeric_limits<short>::max() << endl;
    // cout << "Min value of type short is " << numeric_limits<short>::min() << endl;

    // cout << "Digits of number is " << numeric_limits<short>::digits << endl;

    /* 位元移位運算子 */
    // unsigned int number = 16387U;
    // unsigned int result = number << 2; // shift left 2 bit position
    // cout << "Result number is " << result << endl; 
    // result = number >> 2; // shift right 2 bit position
    // cout << "Result number is " << result << endl; 
    // number <<= 2;   // 直接修改number值, number = nubmer << 2;
    // cout << "assignment operator result " << number << endl;   

    // unsigned char ch = 125;
    // unsigned char res = ch << 2;
    // cout << "Result number is " << res << endl; 

    /* 位元邏輯運算 */
    // unsigned int font = 0x064C;     // Sytle 6 , italic, 12 point
    /* mask(遮罩) 定義有興趣的位元為1其餘為0，使用AND確定其設定情況 */
    // unsigned int size_mask = 0x1F;      //mask 0000 0000 0001 1111 to select size
    // unsigned int size = font & size_mask;   //字體大小設定

    // unsigned int style_mask = 0xFF00;       //mask 1111 1111 0000 0000
    // unsigned int style = (font & style_mask) >> 8;

    /* AND除了可以作遮罩使用，也可以用於關閉位元 */
    // unsigned int italic = 0x40U     //seventh bit from the right
    // unsigned int bold = 0x20U       //sixth bit from the right

    // font |= bold;   //Set bold
    // font |= bold | italic //同時設定粗體和斜體

    // font &= ~italic;    //turn off italic
    // font &= ~bold & ~italic;    //turn off bold and italic

    /* 位元互斥或的使用 */
    // unsigned long red = 0xFF0000UL;  //純紅色
    // unsigned long green = 0xFF00UL;  //純綠色
    // unsigned long blue = 0xFFUL;     //純藍色
    // unsigned long white = 0xFFFFFFUL;//純白色

    // unsigned long mask = red ^ white;   //mask for switching color
    // unsigned long draw_color = red;     //drawing color

    // draw_color ^= mask; //Switch the drawing color, white
    // draw_color ^= mask; //Switch the drawing color, red 輪替使用

    // unsigned long red = 0xFF0000UL;  //純紅色
    // unsigned long white = 0xFFFFFFUL;//純白色

    // cout << hex;    //set hexadecimal output format
    // cout.fill('0');  //set fill character for output，將填補字元射程括號內的字元

    // cout << "\nTry out bitwise AND and OR operaters.";
    // cout << "\nInitial value red   = "  << setw(8) << red;
    // cout << "\nComplement  ~red    = "  << setw(8) << ~red;

    // cout << "\nInitial value white   = "  << setw(8) << white;
    // cout << "\nComplement  ~white    = "  << setw(8) << ~white;

    // cout << "\n Bitwise AND red & white   = "  << setw(8) << (red & white); 
    // cout << "\n Bitwise OR red | white   = "  << setw(8) << (red | white); 

    // cout << "\n\nNow we can try out successive exclusive OR operations.";
    // unsigned long mask = red ^ white;

    // cout << "\n   mask = red ^ white   = " << setw(8) << mask;
    // cout << "\n   mask ^ red   = " << setw(8) << (mask ^ red);
    // cout << "\n   mask ^ white   = " << setw(8) << (mask ^ white);

    // unsigned long flags = 0xFF;     //flads variable
    // unsigned long bit1mask = 0x01;      // selects bit1
    // unsigned long bit6mask = 0x20;      // selects bit6
    // unsigned long bit20mask = 0x80000;      // selects bit20

    // cout << "\nNow use masks to select or set a particular flag bit.";
    // cout << "\nSelect bit 1 from flags    :" << setw(8) << (flags & bit1mask);
    // cout << "\nSelect bit 6 from flags    :" << setw(8) << (flags & bit6mask);
    // cout << "\nSelect off bit 6 from flags    :" << setw(8) << (flags &= ~bit1mask);
    // cout << "\nSelect on bit 20 from flags    :" << setw(8) << (flags |= bit20mask);
    // cout << endl;

    /* enumeration data type */
    // enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};  //此內變數稱為enumerator列舉元
    // enum {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} yesterday, tomorrow;  //不具名列舉，可直接宣告變數

    // Weekday today = Wednesday;

    // enum Weekday_type2 {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    // Weekday_type2 today_type = Wednesday;

    // enum Punctuation{Comma = ',', Exclamation = '!', Question = '?'};
    
    // enum{feetPerYard = 3, inchesPerFoot = 12, yardsPerMile = 1760};
    // cout << endl << "Feet in 5 miles = " << 5 * feetPerYard * yardsPerMile;

    // int day_value = today + 1;

    /* today = day_value; enum不可用int填值 */
    // today = static_cast<Weekday>(day_value);

    // enum Height{Bottom, Top =20}position;
    // position = static_cast<Height>(10); //宣告值只能落在0~20間!
    // cout << position <<endl;

    // typedef long BigOnes;
    // BigOnes mynum = 0;  //其結果與long mynum = 0相同。

    // int count1 = 10;
    // int count3 = 50;
    // cout << endl <<"Value of outer count1 = " << count1;
    // cout << endl <<"Value of global count1 = " << ::count1;

    // {   // New block scope starts here
    //     int count1 = 20;    // This hides the outer count1
    //     int count2 = 30;    
    //     cout << endl << "Value of inner count1 = " << count1;
    //     count1 += 3;    // This changes the inner count1
    //     count3 += count2;
    //     cout << endl <<"Value of global count1 = " << ::count1;
    // }   // and end here.

    // cout << endl
    //      << "Value of outer count1 = " << count1
    //      << endl
    //      << "Value of outer count3 = " << count3;
    // // cout << endl << count2   // Uncomment to get an error
    // cout << endl;

    /* Ex 3.1 */ 
    // int non_zero_int = 0;
    // cout << "Please enter a non-zero integer : ";
    // cin >> non_zero_int;

    // if(non_zero_int == 0){
    //     cout << "Can not enter zero!!! ";
    // }else{
    //     double reciprocal = 1/static_cast<double>(non_zero_int);
    //     cout << "The reciprocal is " << reciprocal << endl;
    // }

    /* Ex 3.2 */
    // int dec_num(0);
    // cout << "Enter an integer in decimal: ";
    // cin >> dec_num;
    // int result = dec_num ^ 1;   //1為作後一個位元
    
    // cout << "The decimal number after flipping the last bit is: " << result << endl;

    /* Ex 3.3 */
    const double inches_per_foot = 12.0L;
    double shelf_len(0L), shelf_dep(0L), box_length(0L);
    long boxes;

    cout << "Enter the shelf length (in feet), the shelf depth (in feet), and the side length of one box (in inches) : " << endl;
    cout << "Enter shelf length (feet) : ";
    cin  >> shelf_len;
    cout << "Enter shelf depth (feet) : ";
    cin  >> shelf_dep;
    cout << "Enter box side length (inches) : ";
    cin  >> box_length; 
    boxes =  static_cast<long>(
        floor((box_length * inches_per_foot / box_length) * (box_length * inches_per_foot / box_length) * (shelf_dep * inches_per_foot / box_length))   //floor()功能：回傳「小於或等於 x 的最大整數值」，需引用cmath
    );  

    cout << "Max boxes in 3D : " << boxes << endl;


    /* Ex 3.4 */
    // unsigned int k = 430U;
    // unsigned int i = (k >> 4) & ~(~0 << 3);
    // cout << i << endl;  // Ans : 2

    return 0;
}

