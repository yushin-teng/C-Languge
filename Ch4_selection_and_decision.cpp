#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

int main(){
     // char letter = 0;

     // cout << endl
     //      << "Enter a letter : ";
     // cin >> letter;
     // cout << endl;

     // if(isupper(letter)){
     //      cout << "You entered a capital letter."
     //           << endl;
     //      cout << "Converting to lower case we get "
     //           << static_cast<char>(tolower(letter)) << endl;
     //      return 0;
     // }

     // if(islower(letter)){
     //      cout << "you enter a small letter."
     //           << endl;
     //      cout << "Converting to upper case we get "
     //           << static_cast<char>(toupper(letter)) << endl;
     //      return 0;
     // }  
     // cout << "You did not enter a letter. "

     // long number = 0;
     // cout << "Enter an integer less than 2 billion : ";
     // cin >> number;
     // cout << endl;

     // if(number % 2L == 0){
     //      cout << " Your number is even."
     //           << endl;
     // }else{
     //      cout << " Your number is odd."
     //           << endl;
     // }

     // int age = 0;
     // int income = 0;
     // int balance = 0;    //current bank balance

     //Get the basic data
     // cout << "Please enter your age in years: ";
     // cin >> age;
     // cout << endl;
     
     // cout << "Please enter your annual income in dollars: ";
     // cin >>income;
     // cout << endl;

     // cout << "What is your current annual balance in dollars: ";
     // cin >> balance;
     // cout << endl;

     // if((age >= 21) && ((income > 25000) || (balance > 100000))){
     //      int loan = 0;
     //      if( (2 * income) < (balance / 2) ){
     //           loan = 2 * income;
     //      }else{
     //           loan = balance / 2;
     //      }
     //      cout << "You can borrow up to $"
     //           << loan
     //           << endl;
     // }else{
     //      cout << "Sorry, we are out of cash today"
     //           << endl;
     // }

     /* Ex 4.1, p142 */
     // int num1 = 0, num2 = 0;

     // cout << "Please enter two positive integers: " << endl;
     // cin >> num1 >> num2;
     // if( (num1 <= 0) || (num2 <= 0) ){
     //      cout << "Invalid input. Both numbers must be greater than 0." << endl;
     // }
     // else
     // {
     //      int bigger_num = max(num1, num2);
     //      int small_num = min(num1, num2);

     //      if((bigger_num%small_num) == 0){   
     //           cout << small_num << " divids " << bigger_num << endl;
     //      }else{
     //           cout << small_num << " does not divids " << bigger_num << endl;
     //      }
     // }

     /* Ex 4.2 */
     // int number = 0;
     // cout << "Please enter an integer between 1 and 100: " ;
     // cin >> number;

     // if ((number >= 1) && (number <= 100)){
     //      if(number < 50){
     //           cout << number << " is less than 50." << endl; 
     //      }else if(number > 50){
     //           cout << number << " is greater than 50." << endl;
     //      }else{
     //           cout << number << " is equal to 50." << endl;
     //      }          
     // }else{
     //      cout << "Invalid input. The number is out of range!" << endl;
     // }

     /* Ex 4.3 */
     // char ch(0);
     // cout << "Please enter a single charator : ";
     // cin >> ch;



     // if( isalpha(static_cast<unsigned char>(ch) ) ){
     //      cout << "The binary code of " << ch << " is: ";
     //      for (int i = 7; i >= 0; i--){ //逐位檢察!!! 重要
     //           unsigned char mask = 1 << i;  //建立遮罩
     //           cout << ((ch & mask) ? '1' :'0');
     //      }
     // }else{
     //      cout << "This input is not a letter." << endl;
     // }

//      //檢查是否為字母
//     if (!isalpha(static_cast<unsigned char>(ch))) {
//         cout << "The input is not a letter." << endl;
//         return 0;  // 結束程式
//     }

//     cout << "The binary code of '" << ch << "' is: ";

//     // 逐位檢查並輸出二進位碼 (假設 char 8 bits)
//     for (int i = 7; i >= 0; --i) {
//         unsigned char mask = 1 << i;  // 建立遮罩
//         cout << ((ch & mask) ? '1' : '0');
//     }
//     cout << endl;

     /* Ex 4.4 */
     /* 錯誤寫法 %只能使用在整數
     float money(0.F);
     cout << "Please enter an amount between $1 and $10 (can be float): ";
     cin >> money;

     const float dollar_to_cents = 100.F;    //1分
     const float twenty_five_cents = 25.F;   //2角5分
     const float ten_cents = 10.F; //1角
     const float five_cents = 5.F; //5分

     money *= dollar_to_cents;
     int quarters = static_cast<int>(money/twenty_five_cents);
     int dimes = static_cast<int>((money%twenty_five_cents)/ten_cents);
     int nickels = static_cast<int>(((money%twenty_five_cents)%ten_cents)/five_cents);
     int pennies = static_cast<int>(((money%twenty_five_cents)%ten_cents)%five_cents);
     
     if(money > 10.F || money < 1.F){
          cout << "Invalid input. Amount must be between $1 and $10." << endl;
     }else{
          cout << "The cash " << quarters << " quarters "
               << dimes << " dimes "
               << nickels << " nickels "
               << pennies << " pennies " << endl; 
     }
     */

     //GPT解答
     double money; // 使用者輸入 (美元)
     cout << "Please enter an amount between $1 and $10 (can be float): ";
     cin >> money;

     // 檢查輸入範圍
     if (money < 1.0 || money > 10.0) {
     cout << "Invalid input. Amount must be between $1 and $10." << endl;
     return 0;
     }

     // 轉換成整數「分」(避免浮點誤差用四捨五入)
     int cents = static_cast<int>(round(money * 100));

     // 計算硬幣數量
     int quarters = cents / 25;  // 25 cents
     cents %= 25;

     int dimes = cents / 10;     // 10 cents
     cents %= 10;

     int nickels = cents / 5;    // 5 cents
     cents %= 5;

     int pennies = cents;        // 1 cent

     // 輸出結果（單複數判斷）
     if (quarters > 0){
          cout << quarters << " " << (quarters == 1 ? "quarter" : "quarters") << endl;
     }

     if (dimes > 0){
          cout << dimes << " " << (dimes == 1 ? "dime" : "dimes") << endl;
     }

     if (nickels > 0){
          cout << nickels << " " << (nickels == 1 ? "nickel" : "nickels") << endl;
     }

     if (pennies > 0){
          cout << pennies << " " << (pennies == 1 ? "penny" : "pennies") << endl;
     }
    
     return 0;
}