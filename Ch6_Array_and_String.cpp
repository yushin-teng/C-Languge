#include <iostream>
#include <cctype>
#include <iomanip>
#include <string>
#include <limits>
#include <algorithm>

using namespace std;

int main(){
    /* Array */
    // // int height[10]; //應避免使用神秘數字
    // const int height_max = 10;
    // int height[height_max];
    // int count = 0;
    // char reply = 0;

    // // input loop for heights. Read heights until we are done, or the array is full
    // do{
    //     cout << endl 
    //          << "Enter a height as an integral number of inches : ";
    //     cin >> height[count ++];

    //     // Check if another input is required
    //     cout << "Do you want to enter another ('y' or 'n')? ";
    //     cin >> reply;

    // }while(count < height_max && tolower(reply) == 'y');

    // // Indicate when array is full
    // if(count == height_max){
    //     cout << endl << "Maximum height count reached. " << endl;
    // }

    // // Calculate the average and display it
    // double average = 0.0;
    // for(int i = 0; i < count;i++){
    //     average += height[i];
    // }
    // average /= count;
    // cout << endl
    //      << "Average height is " << average << " inches. ("
    //      << count << " times.) "
    //      << endl;

    // // Calculate how many are above average height
    // int above_avg = 0;
    // for(int i = 0; i < count; i++){
    //     if(height[i] < average){
    //         above_avg ++;
    //     }
    // }
    
    // cout << "There "
    //      << (above_avg == 1 ? "is ": "are ")
    //      << above_avg << " height"
    //      << (above_avg == 1 ? " ": "s ")
    //      << "above average. "
    //      << endl;

    /* Initializer list */
    // const int size = 5;
    // int values[size] = {1, 2, 3}; //value[3] ,value[4]為初始化為0
    // // double junk[size];  //未初始化
    // double junk[size] = {0};
    
    // cout << endl;

    // for(int i = 0;i < size; i++){
    //     cout << " " << setw(12) << values[i];
    // }
    // cout << endl;

    // for(int i = 0; i < size; i++){
    //     cout << " " << setw(12) << junk[i];
    // }
    // cout << endl;

    /* Array elements sizeof() */
    // int values[] = {2, 3, 4, 5, 6, 7, 11, 13, 17, 19, 23, 29};

    // cout << endl
    //      << "There are "
    //      << sizeof values / sizeof values[0]    // 計算陣列個數
    //      << " elements in the array. "
    //      << endl;
    // int sum = 0;
    // for(int i = 0; i < (sizeof values / sizeof values[0]); sum +=values[i++])
    //     ; 
    // cout << "The sum of the array elements is " << sum << endl;

    /* string analysis */
    // const int maxlength = 100;
    // char text[maxlength] = {0};

    // cout << endl << " Enter a line of text : " << endl;

    // // Read a line of characters including spaces
    // cin.getline(text, maxlength);

    // cout << "You entered. " << endl << text << endl;

    // int vowels = 0;
    // int consonants = 0;
    // for(int i = 0; i < maxlength; i++){
    //     if(isalpha(text[i])){
    //         switch (tolower(text[i])){
    //             case 'a':
    //             case 'e':
    //             case 'i':
    //             case 'o':
    //             case 'u':
    //                 vowels += 1;
    //                 break;
    //             default:
    //                 consonants += 1;
    //                 break; 
    //         }
    //     }
    // }

    // cout << "Your input contained "
    //      << vowels << " vowels and "
    //      << consonants << " consonants."
    //      << endl;
    
    // cout << endl << " Enter a line of text : " << endl;
    // cin >> text;    //萃取運算子將空格視為輸入值的分隔號
    // cout << "You entered. " << endl << text << endl;

    /* Starting strings in an array */
    // char stars[][80] = {    // 由編譯器協助初始化
    //     "Robert Redford",
    //     "Hopalong Cassidy",
    //     "Lassie",
    //     "Slim Pickens",
    //     "Boris Karloff",
    //     "Mae West",
    //     "Oliver Hardy",
    //     "Sharon Stone"
    // };

    // int choice = 0;

    // cout << endl
    //      << "Pick a luck star! "
    //      << "Enter a number between 1 and "
    //      << sizeof (stars)/ sizeof (stars[0]) << " : "; 
    // cin >> choice;

    // if(choice >= 1 && choice <= sizeof(stars)/sizeof(stars[0])){
    //     cout << endl
    //          << "Your lucky star is " << stars[choice -1];
    // }else{
    //     cout << endl
    //          << "Sorry, you haven't got a lucky star. ";
    // }
    // cout << endl;

    /* Concatenating strings */
    // string first;
    // string second;

    // cout << endl << "Enter your first name: ";
    // cin >> first;

    // cout << endl << "Enter your second name: ";
    // cin >> second;

    // string sentence = "Your full name is ";
    // sentence += first + " " + second + ".";

    // cout << endl 
    //      << sentence
    //      << endl;
    // cout << "The string contains "
    //      << sentence.length()
    //      << " characters."
    //      <<endl;

    /* Accessing characters in a string */
    // string text;
    
    // cout << endl << "Enter a line of text : " << endl;
    // getline(cin, text); //原先是C-style string是寫cin.getline(text, max_length)，此處是string物件寫法，三個引數第三個可以輸入結束符號

    // int vowels = 0;
    // int consonates = 0;
    // for(int i = 0; i < text.length();i++){
    //     if(isalpha(text[i])){
    //         switch (text[i]){
    //             case 'a':
    //             case 'e':
    //             case 'i':
    //             case 'o':
    //             case 'u':
    //                 vowels++;
    //             default:
    //                 consonates++;
    //         }
    //     }
    // }
    // cout << endl << "Your input contained "
    //      << vowels << " vowels and "
    //      << consonates << " consonates. "
    //      << endl;
    
    /* Comparing strings */
    // const int max_names = 6;
    // string names[max_names];    // Array of names
    // int count = 0;
    // char answer = 0;

    // do
    // {
    //     cout << endl << "Enter a name : ";
    //     cin >> names[count++];

    //     cout << endl << "Do you want to enter another name ? ( y or n): ";
    //     cin >> answer;
    // }while((count < max_names) && (tolower(answer) == 'y'));

    // // Indicate when array is full
    // if(count == max_names){
    //    cout << endl << "Maximum name count reached." << endl; 
    // }

    // // Find the minimum and maximum names
    // int index_max = 0;
    // int index_min = 0;

    // for(int i = 0;i < count; i++){
    //     // if(names[i] > names[index_max]){    
    //     //     index_max = i;
    //     // }else if(names[i] < names[index_min]){
    //     //     index_min = i;
    //     // }
    //     /* compare函式判斷 */
    //     if( names[i].compare(names[index_max]) > 0){
    //         index_max = i;
    //     }else if(names[i].compare(names[index_min]) < 0){
    //         index_min = i;
    //     }
    // }

    // // Output tne minimum and maximum names
    // cout << endl
    //      << "The minimum name is " << names[index_min]
    //      << endl;
    // cout << endl
    //      << "The maximum name is " << names[index_max]
    //      << endl;
    // cout << "max : " << index_max << "; min : " << index_min;

    // string word = "banana";
    // cout << word.compare("apple") << endl;
    // cout << word.compare("computer") << endl;
    // cout << word.compare("barbecu") << endl;

    /* search character */
//     string sentence = "Manners maketh man";
//     string word = "man";

//     cout << sentence.find(word) << endl;
//     cout << sentence.find("Man") << endl;
//     cout << sentence.find("k") << endl;
//     cout << sentence.find("x") << endl;
// // Ans:
// // 15
// // 0
// // 10
// // 18446744073709551615  同 string::npos
//     cout << sentence.find("an", 1) << endl;
//     cout << sentence.find("an", 2) << endl;
//     cout << sentence.find("an", 3) << endl;

    /* The string to be searched */
    // string text = "Smith, where Jones had had \"had had\", had had \"had\"." "\"Had had\" had had the examiners' approval.";
    // string word = "had";

    // cout << endl << "The string is : " << endl << text << endl;
    // // Count the number of occurence of word in text
    // int count = 0;

    // for(int index = 0; (index = text.find(word, index)) != string::npos; index += word.length(), count++){
    //     cout << endl << index << endl;
    // }
    // cout << "Your text contained " 
    //      << count << " occurences of \""
    //      << word << "\"."
    //      << endl;

    // string separators = " ,.\"";
    // cout << text.find_first_of(separators)
    //      << endl;

    // int start = text.find_first_not_of(separators);
    // int end = 0;
    // int word_count = 0;

    // // Now find and output the words
    // while(start != string::npos){
    //     end = text.find_first_of(separators, start + 1);    //算到下一個分隔符號的index
    //     cout << end << endl;
    //     if(end == string::npos){
    //         end = text.length();
    //     }
    //     cout << start << endl;
    //     cout << text.substr(start, (end - start))   // output word(兩個分隔符號間的字串)
    //          << endl;
    //     word_count ++;
        
    //     start = text.find_first_not_of(separators, end + 1);
    // }
    // cout << "Your string contained " << word_count << " words." << endl;

    /* Replacing words in s string */
    // Read the string to be searched from the keyboard
    // string text;
    // cout << endl << "Enter a string terminated by # : " << endl;
    // getline(cin, text, '#');

    // // Get the word to be replaced
    // string word;
    // cout << endl << "Enter the word to be replaced : ";
    // cin >> word;

    // // Get the replacement
    // string replacement;
    // cout << endl << "Enter the replacement words: ";
    // cin >> replacement;

    // if(word == replacement){
    //     cout << endl
    //          << "The word and its replacement are the same." << endl;
    //     cout << "Operation aborted. " << endl;
    //     exit(1);
    // }

    // // Find the start of the first occurrence of word
    // int start = text.find(word);

    // // Now find and replace all occurrences of word
    // while(start != string::npos){
    //     text.replace(start, word.length(), replacement);
    //     start = text.find(word, start + replacement.length());
    // }

    // cout << endl
    //      << "Your string is now: " << endl
    //      << text << endl;

    /* Ex6.1 p228 */
    // const int max_input = 10;
    // string student_name[max_input] = {};
    // int score[max_input] = {0};
    // int avg  = 0;
    // int count = 0;

    // for(int i = 0; i < max_input; i ++){
    //     cout << "Please enter student's name (type 'end' to stop) : ";
    //     cin >> student_name[i];
    //     if( student_name[i] == "end"){
    //         break;
    //     }
    //     cout <<"Please enter this student's score : ";
    //     int s = 0;
    //     while(true){
    //         if (cin >> s && s >= 0 && s <= 100) {
    //             break;
    //         }
    //         // 清理壞輸入
    //         cout << "Invalid. Please enter a number between 0 and 100: ";
    //         cin.clear();
    //         cin.ignore(numeric_limits<std::streamsize>::max(), '\n');  
    //     }
    //     score[i] = s;
    //     avg += score[i];
    //     count++;
    // }
    // cout << endl <<"The exam average score = " 
    //      << avg / count << endl;
    
    // cout << " | " << left << setw(10) << "student";
    // cout << " | " << left << setw(10) << "score";
    // cout << "|" << endl;

    // cout << string(27,'-') << endl; //重複字串複製
    // for(int i = 0; i < count; i ++){
    //     cout << " | " << left << setw(10) << student_name[i];
    //     cout << " | " << left << setw(10) << score[i] << "|" << endl;
    // }
    // cout << string(27,'=') << endl; //重複字串複製


    /* Ex6.1 GPT */
    // const int MAX_STUDENTS = 10;   // 最多學生數
    // string names[MAX_STUDENTS];    // 存學生名字
    // int grades[MAX_STUDENTS];      // 存學生成績
    // int count = 0;                 // 實際輸入的學生數
    // int sum = 0;                   // 總分

    // cout << "Enter up to " << MAX_STUDENTS 
    //      << " student names and grades (type 'end' to stop):\n";

    // // 讀取學生資料
    // for (int i = 0; i < MAX_STUDENTS; i++) {
    //     cout << "Enter name of student " << (i + 1) << ": ";
    //     cin >> names[i];
    //     if (names[i] == "end") break;  // 若輸入 end 則停止輸入

    //     cout << "Enter grade for " << names[i] << " (0~100): ";
    //     cin >> grades[i];

    //     // 驗證成績範圍
    //     while (grades[i] < 0 || grades[i] > 100) {
    //         cout << "Grade must be between 0 and 100, re-enter: ";
    //         cin >> grades[i];
    //     }

    //     sum += grades[i];  // 累計總分
    //     count++;
    // }

    // // 計算平均
    // double average = (count > 0) ? static_cast<double>(sum) / count : 0.0;

    // cout << "\nAverage grade = " << fixed << setprecision(2) << average << endl;

    // // 輸出表格
    // cout << "\n=======================\n";
    // cout << left << setw(15) << "Name" << setw(10) << "Grade" << endl;
    // cout << "-----------------------\n";

    // for (int i = 0; i < count; i++) {
    //     cout << left << setw(15) << names[i] << setw(10) << grades[i] << endl;
    // }
    // cout << "=======================\n";

    /* Ex6.2 */
    // const int time_slots = 3;
    // const int weekday = 5;
    // float weather_date[weekday][time_slots] = {0};
    // float humidity_avg[time_slots] = {0};
    // string week_name[weekday] =  {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    // string dayparts[time_slots] = {"morning", "noon", "night"};

    // for(int i = 0; i < weekday; i++){      
    //     cout << "Please enter the humidity readings for " << week_name[i] << " :" << endl;
    //     for(int j = 0; j < time_slots; j ++){   
    //         cout << dayparts[j] << " :" ;
    //         cin >> weather_date[j][i];

    //         humidity_avg[j] += weather_date[j][i];    // 計算每周三個時段的平均濕度        
    //     }      
    // }
    
    // for(int i = 0; i < time_slots; i++){
    //     cout << "The " << dayparts[i] << " air humidity average is " << humidity_avg[i] / weekday << endl;
    // }
    // cout << humidity_avg[0];


    /* Ex6.2 GPT */
    // const int DAYS = 5;   // 星期一到星期五
    // const int TIMES = 3;  // 早 中 晚
    // float humidity[DAYS][TIMES]; 

    // string dayNames[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    // string timeNames[TIMES] = {"Morning", "Noon", "Evening"};

    // // 輸入濕度
    // for (int d = 0; d < DAYS; d++) {
    //     cout << "Enter humidity readings for " << dayNames[d] << ":\n";
    //     for (int t = 0; t < TIMES; t++) {
    //         cout << "  " << timeNames[t] << ": ";
    //         cin >> humidity[d][t];
    //     }
    // }

    // // 計算三個時段的平均
    // cout << fixed << setprecision(2);
    // cout << "\nAverage humidity by time of day:\n";

    // for (int t = 0; t < TIMES; t++) {
    //     float sum = 0.0f;
    //     for (int d = 0; d < DAYS; d++) {
    //         sum += humidity[d][t];
    //     }
    //     cout << setw(8) << timeNames[t] << ": " << (sum / DAYS) << "%" << endl;
    // }

    /* Ex6.3 */
    // string text = "Smith, where Jones had had \"had had\", had had \"had\"." "\"Had had\" had had the examiners' approval.";
    // string word = "had";

    // // 轉成小寫版本
    // string text_lower = text;
    // string word_lower = word;
    // /* solution1 */
    // transform(text_lower.begin(), text_lower.end(), text_lower.begin(), ::tolower);
    // transform(word_lower.begin(), word_lower.end(), word_lower.begin(), ::tolower);
    // /* solution2 */
    // // string content = {0};    不能這樣初始化，這是C-style string初值化方式
    // string content; // 這樣即是初值化，或用content = ""，初值化空字串
    // for(int i = 0; i < text.length(); i++){
    //     // content += tolower(text[i]);
    //     content += static_cast<char>(tolower(static_cast<unsigned char>(text[i])));
    // }
    // cout << content;

    // cout << endl << "The string is : " << endl << text << endl;
    // // Count the number of occurence of word in text
    // int count = 0;

    // for(int index = 0; (index = content.find(word_lower, index)) != string::npos; index += word_lower.length(), count++){
    //     cout << endl << index << endl;
    // }
    // cout << "Your text contained " 
    //      << count << " occurences of \""
    //      << word << "\"."
    //      << endl;

    // string separators = " ,.\"";
    // cout << text.find_first_of(separators)
    //      << endl;

    // /* Ex6.4 GPT */
    // string text = "Smith, where Jones had had \"had had\", had had \"had\"."
    //               "\"Had had\" had had the examiners' approval.";
    // string word = "had";

    // cout << "\nThe string is : \n" << text << endl;

    // // 轉成小寫版本
    // string text_lower = text;
    // string word_lower = word;
    // transform(text_lower.begin(), text_lower.end(), text_lower.begin(), ::tolower);
    // transform(word_lower.begin(), word_lower.end(), word_lower.begin(), ::tolower);

    // int count = 0;
    // for (size_t index = 0; (index = text_lower.find(word_lower, index)) != string::npos; 
    //      index += word_lower.length(), count++) {
    //     cout << "\nFound at index: " << index;
    // }

    // cout << "\nYour text contained " << count
    //      << " occurrences of \"" << word << "\" (case-insensitive)." << endl;

    /* Ex6.4 */
    // string content = "Now is the winter of our discontent";
    // string word;
    
    // cout << "The string is : "
    //      << content 
    //      << endl
    //      << "Please enter a word. If it appears in the sentence, the program will replace it with \"FOUND\" : ";
    // cin >> word;
    // int position = content.find(word);
    // if(content.find(word) != string::npos){
    //     int start =  content.find(word);
    //     content.replace(start, word.length(), "FOUND");
    //     cout << "The new sentence is " << endl << content;
    // }else{
    //     cout << "The word is not in the sentence.";
    // }

    /* Ex6.4 GPT */
    // 初值化字串
    // string text = "Now is the winter of our discontent";
    // cout << "Original string: " << text << endl;

    // // 提示使用者輸入單字
    // cout << "Enter a word to search: ";
    // string word;
    // cin >> word;

    // // 搜尋單字
    // size_t pos = text.find(word);

    // if (pos != string::npos) {
    //     // 找到後取代
    //     text.replace(pos, word.length(), "FOUND");
    //     cout << "Modified string: " << text << endl;
    // } else {
    //     cout << "The word \"" << word << "\" was not found." << endl;
    // }

    /* Ex6.5 */
    // string str1;
    // string str2;
    // cout << "Enter the first string : ";
    // getline(cin, str1);
    // cout << "Enter the second string : ";
    // getline(cin, str2);
    // cout << "The first string : " << str1 << endl
    //      << "The second string : " << str2 << endl;

    // string separators = " ,.\"";
    // int start = str1.find_first_of(str1);
    // int end = str1.find_first_of(separators);
    // string word1;
    // for(int i = 0; i < end; i++){
    //     if(i >= start){
    //         word1 += str1[i];
    //     }
    // }
    // cout << word1;

    /* Ex6.5 GPT solution1*/
    // string str1, str2;

    // // 提示使用者輸入
    // cout << "Please enter the first string: ";
    // cin >> str1;
    // cout << "Please enter the second string: ";
    // cin >> str2;

    // // 建立 str2 的反轉版本
    // string reversed = str2;
    // reverse(reversed.begin(), reversed.end());

    // // 判斷是否互為回文
    // if (str1 == reversed) {
    //     cout << "The two strings are palindromes of each other." << endl;
    // } else {
    //     cout << "The two strings are NOT palindromes of each other." << endl;
    // }

    /* Ex6.5 GPT solution2*/
    string str1, str2;
    cout << "Please enter the first string: ";
    cin >> str1;
    cout << "Please enter the second string: ";
    cin >> str2;

    bool isPalindrome = true;

    for (size_t i = 0; i < str1.size(); i++) {
        bool found = false;

        // 從 str2 的最後面往前找
        for (size_t j = 0; j < str2.size(); j++) {
            size_t idx = str2.size() - 1 - j; // 從尾端算
            if (str1[i] == str2[idx]) {
                str2.erase(idx, 1); // 刪掉該字元
                found = true;
                break;
            }
        }

        if (!found) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome && str2.empty()) {
        cout << "The two strings are palindromes of each other." << endl;
    } else {
        cout << "The two strings are NOT palindromes of each other." << endl;
    }

    return 0;
}