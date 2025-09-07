#include <iostream>
#include <cctype>
#include <iomanip>
#include <limits>
using namespace std;

int main(){

    /* while */
    // int i = 1;
    // int sum(0);
    // while(i <= 10){
    //     cout << i << endl;        
    //     sum += i++;    
    // }
    // cout << "Sum is " << sum << endl;

    // char ch = 0;
    // int count = 0;
    // double temperature = 0.0L;
    // double average = 0.0L;

    /* do while */
    // do
    // {
    //     cout << "Enter a temperature reading : ";
    //     cin >> temperature;

    //     average += temperature;
    //     count++;

    //     cout << "Do you want to enter another? (y/n) : ";
    //     cin >> ch;
    //     cout << endl;
    // } while (tolower(ch) == 'y');   // ch == 'y' || ch == 'Y'

    // average /= count;
    // cout << "Average temperature is " << average
    //      << endl;    

    /* for loop */
    // int sum = 0;
    // int count = 0;

    // cout << "How many integers do you want to sum? ";
    // cin >> count;

    // for(int i = 1; i <= count; i++){
    //     sum += i;
    // }

    // cout << endl;
    // cout << "The sum of the integers from 1 to " << count << " is " << sum
    //      << endl;

    /* float for loop */
    // const double pi = 3.14159265;
    // for(double radius = .2; radius <= 3.0; radius += .2){
    //     cout << "radius = " << setw(12) << radius
    //          << " area = " << setw(12) << pi * radius * radius
    //          << " delta to 3.0 = " << ((radius + .2) - 3.0)
    //          << endl;
    // }

    /* 多個變數初值化 */
    // int count = 0;
    // cout << endl << "What upper limit would you like? ";
    // cin >> count;

    // cout << endl
    //      << "integer"
    //      << "    sum"
    //      << "        factorial"
    //      << endl;
    
    // for(long n = 1, sum = 0, factorial = 1;n <= count; n++){
    //     sum += n;           // Accumulate sum to current n
    //     factorial *= n;     // Calculate n!
    //     cout << setw(4) << n << "   "
    //          << setw(7) << sum << " "
    //          << setw(15) << factorial
    //          << endl;
    // }

    /* 巢狀迴圈 */
    /* break的使用 */
    // int table = 0;
    // const int table_min = 2;
    // const int table_max = 12;
    // char ch = 0;
    // const int input_tries = 3;

    // do
    // {
    //     for(int count = 1; ;count++){
    //         cout << endl
    //             << "What size table would you like ( "
    //             << table_min << " to " << table_max << " )? ";
    //         cin >> table;
    //         cout << endl;
        
    //         // Make sure table size is within the limits
    //         // if( (table < table_min) || (table > table_max) ){
    //         //     // cout << "Invalid table size entered. Program terminated. " << endl;
    //         //     break;
    //         if( (table >= table_min) && (table <= table_max) ){
    //             break;
    //         }else if(count < input_tries){
    //             cout << "Invalid input, try againe!";
    //         }else{
    //             cout << "Invalid table size entered, for the third times. " 
    //                  << "\nSorry, only three goes, program terminated"
    //                  << endl;
    //             exit(1);
    //         }
    //     }

    //     // Create the top line of the table
    //     cout << "     |";
    //     for(int i = 1; i <= table ;i++){
    //         cout << " " << setw(3) << i << " |";
    //     }
    //     cout << endl;
    //     // Create the separator row 
    //     for(int i = 0; i <= table; i++){
    //         cout << "------";    
    //     }
    //     cout << endl;
    //     // Iterate over the row
    //     for(int i = 1; i<= table; i++){
    //         cout << " " << setw(3) << i << " |";    // Start the row
    //         // Output the values in a row
    //         for(int j = 1; j <= table; j++){
    //             cout << " " << setw(3) << i*j << " |";  // One for each column
    //         }
    //         cout << endl;
    //     }

    //     // Check if another table is required
    //     cout << endl << "Do you want another table (y or n)? ";
    //     cin >> ch;
    //     cout << endl;
    // } while (tolower(ch) == 'y');
    
    /* continue */

    // // Output the column headings
    // cout << endl
    //      << setw(13) << "Character "
    //      << setw(13) << "Hexadeciaml "
    //      << setw(13) << "decimal "
    //      << endl;
    // cout << uppercase;

    // unsigned char ch = 0;

    // // Output characters and corresponding codes
    // do
    // {
    //     if(!isprint(ch)){   // if it does not print
    //         continue;
    //     }

    //     cout << setw(7) << ch
    //          << hex
    //          << setw(13) << static_cast<int>(ch)
    //          << dec
    //          << setw(13) << static_cast<int>(ch)
    //          << endl;
    // } while (ch++ < numeric_limits<unsigned char>::max());    

    /* Ex 5.1 p176 */
    // const int num = 30;
    // cout << setw(7) << "number" << " |" << setw(7) << "square" << " |" << endl;   
    // for(int i = 1; i < 30; i++){
    //     if( (i % 2) != 0){
    //         cout << setw(7) 
    //              << i 
    //              << " |";
    //         cout << setw(7)
    //              << i*i
    //              << " |"
    //              <<endl;
    //     }
    // }

    /* Ex 5.2 */
    // int count = 0;
    // const int cnt_max = 30;
    // int input_num = 0;
    // while(count < cnt_max){
    //     count += 1;
    //     cout << "\nPlease enter 30 integers : ";
    //     cin >> input_num;

    //     bool div3 = (input_num%3 == 0);
    //     bool div5 = (input_num%5 == 0);

    //     if (div3 && div5) {
    //         cout << "The input number " << input_num << " is divisible by both 3 and 5." << endl;
    //     }
    //     else if (div3) {
    //         cout << "The input number " << input_num << " is divisible by 3." << endl;
    //     }
    //     else if (div5) {
    //         cout << "The input number " << input_num << " is divisible by 5." << endl;
    //     }
    //     else {
    //         cout << "The input number " << input_num << " is not divisible by 3 or 5." << endl;
    //     }
    // }

    /* Ex 5.3 */
    // char ch = 0;
    // int count = 0;   // 計算字元數（不含空白）

    // cout << "This program counts the number of characters you enter (excluding spaces)." << endl;
    // cout << "Enter characters (program stops when you type '#'):" << endl;
    // do
    // {
    //     cin >> noskipws >> ch;   // 不跳過空白，連空白與換行都讀進來

    //     if (ch == '#') {
    //         cout << "\n'#' detected. End program." << endl;
    //         break;               // 遇到 # 立即停止
    //     }

    //     if (ch != ' ' && ch != '\n' && ch != '\t') {
    //         count++;             // 只計算非空白字元
    //     }
    // } while (ch != '#');
    
    // cout << "Total characters entered (excluding spaces): " << count << endl;

    /* Ex 5.4 重點題目，太容易進無限迴圈!!!! */
    // typedef unsigned char unch; 
    // int num = 0;
    // int sum = 0;
    // char ch = 0;   // 需要先轉成unsigned再做判斷!!!
    // cout << "This program adds up integers you enter." << endl;
    // do{
    //     /* 這邊cin要是輸入的是字元，則會進入無窮迴圈 */
    //     // cout << "Please enter an integer : ";
    //     // cin >> num;
    //     // 讀整數：失敗就清錯並重來
    //     while (true) {
    //         cout << "Please enter an integer: ";
    //         if (cin >> num) break;
    //         cout << "Invalid integer. Try again.\n";
    //         cin.clear();
    //         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //     }
    //     sum += num;

    //     cout << " Do you want to keep to enter integers? ('y': keep, 'n' : quit): ";
    //     cin >> ch;
    //     while( (tolower(static_cast<unch>(ch)) != 'y') && (tolower(static_cast<unch>(ch)) != 'n') ){
    //         cout << "Invalid input! Please enter 'y' or 'n': ";
    //         cin >> ch;
    //     } 
    // }while( tolower(static_cast<unch>(ch)) == 'y' );

    // cout << endl << "The total sum is " << sum;

    /* Ex 5.5 自行想，寫超廢的 */
    // typedef unsigned char unch; 
    // unch response = 0;  //上下限判斷
    // unch is_ans = 0;    //是否為答案判斷 
    // int max = 100;
    // int min = 1;
    // int count = 0;
    // 
    // cout << "Please enter a number between 1 and 100, and I guess it. " << endl;
    // cout << "Is the " << ((max-min)/2 + min) <<" your answer? ";
    // cin >> is_ans;
    // while(tolower(is_ans) != 'y'){
    //     cout << ((max-min)/2 + min) << " is higher than your answer, right? ";
    //     cin >> response;
    //     while(tolower(response) == 'y'){ //答案低於(max-min)/2 + min時 
    //         count += 1;   
    //         max = ((max-min)/2 + min); 
    //         cout << ((max-min)/2 + min) << " is higher than your answer, right? ";
    //         cin >> response;
    //     }
    //     cout << "Is the " << ((max-min)/2 + min) <<" your answer? ";
    //     cin >> is_ans;
    //     if(tolower(is_ans) != 'y'){
    //         min = ((max-min)/2 + min);
    //     }
    // }
    // cout << endl  << "Your answer is " << ((max-min)/2 + min) << " ! ";

    /* Ex5.5 GPT版本，下取中點 */
    // int low = 1, high = 100;     // 搜尋範圍 [low, high]
    // char ans;
    // int questions = 0;

    // cout << "Think of an integer between 1 and 100.\n"
    //      << "I will ask questions of the form: \"Is your number greater than X?\" (y/n)\n";

    // while (low < high) {
    //     int mid = low + (high - low) / 2;  // 避免溢位的中點
    //     cout << "Is your number greater than " << mid << "? (y/n): ";
    //     cin >> ans;

    //     // 只允許 y/n（大小寫皆可）；不合法就反覆重問
    //     ans = static_cast<char>(tolower(static_cast<unsigned char>(ans)));
    //     while (ans != 'y' && ans != 'n') {
    //         cout << "Please answer with 'y' or 'n': ";
    //         cin >> ans;
    //         ans = static_cast<char>(tolower(static_cast<unsigned char>(ans)));
    //     }

    //     ++questions;

    //     if (ans == 'y') {
    //         // 數字在 (mid, high]，所以下界變成 mid+1
    //         low = mid + 1;
    //     } else {
    //         // 數字在 [low, mid]，所以上界變成 mid
    //         high = mid;
    //     }
    // }

    // cout << "\nYour number is " << low << "! "
    //      << "(found in " << questions << " questions)\n";

    /* Ex 5.5 重改 ，上取中點 */
    typedef unsigned char unch; 
    unch response = 0;  
    int max = 100;
    int min = 1;
    int count = 0;
    
    cout << "Please enter a number between 1 and 100, and I guess it. " << endl;
    while(min < max){ 
        int mid = 0;

        mid = ((max-min + 1)/2 + min);  //上取中點，問句可以決定

        // 1. 根據回答決定區間，會知道 mid(取代max) > ans >= mid(取代min)。  
        // 再來用[x, x+1]去決定上取中點(mid = low + (high - low + 1)/2) 還下取中點 (mid = low + (high - low)/2)
        cout << mid << " is greater than your answer, right? "; 
        cin >> response;
        
        if(tolower(response) == 'y'){
            max = mid - 1;  // [low, mid)，所以用mid 取代max  嚴格大於 (> mid) 所以會有半開區間
        }else{
            min = mid;  // [mid, high]，所以用mid取代min (<= mid)
        }   
        count += 1; 
        cout << " Max = " << max << endl;
        cout << " Mid = " << mid << endl;
        cout << " Min = " << min << endl;
    }
    cout << endl  << "Your answer is " << min << " ! ";

    return 0;
}