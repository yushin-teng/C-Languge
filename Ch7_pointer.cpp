#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
     // long number = 50L;
     // long *pnumber = &number;

     // cout << "The number's address is " << pnumber << endl;
     // cout << "The number is " << *pnumber;

     // long *pnumber;
     // long number1 = 55L;
     // long number2 = 99L;

     // pnumber = &number1; //初值化
     // *pnumber += 11;
     // cout << endl
     //      << "number1 = " << number1 // 66
     //      << " &number1 = " << pnumber    // number1's address
     //      <<endl;

     // pnumber = &number2;
     // number1 = *pnumber * 10;

     // cout << "number1 = " << number1    // 990
     //      << " pnumber = " << pnumber    // number2's address
     //      << " *pnumber = " << *pnumber  // 99
     //      << endl;

     // if( pnumber == 0 ){ // 也可以用 !pnumber 取代
     //      cout << endl << "pnumber is null. "; 
     // }

     // const char *pstar1 = "Mae West";
     // const char *pstar2 = "Arnold Schwarzenegger";
     // const char *pstar3 = "Lassie";
     // const char *pstar4 = "Slim Pickens";
     // const char *pstar5 = "Gerta Garbo";
     // const char *pstar6 = "Oliver Hardy";
     // const char *pstr = "Your lucky star is ";

     // int choice = 0;

     // cout << endl
     //      << "Pick a lucky star!"
     //      << " Enter a number between 1 and 6 : ";
     // cin >> choice;
     // cout << endl;

     // switch(choice){
     //      case 1:
     //           cout << pstr << pstar1;
     //           break;
     //      case 2:
     //           cout << pstr << pstar2;
     //           break;
     //      case 3:
     //           cout << pstr << pstar3;
     //           break;
     //      case 4:
     //           cout << pstr << pstar4;
     //           break;
     //      case 5:
     //           cout << pstr << pstar5;
     //           break;
     //      case 6:
     //           cout << pstr << pstar6;
     //           break;
     //      default:
     //           cout << "Sorry, you haven't got a lucky star.";
     //           break;
     // }
     // cout << endl;

     /* 指標陣列，必學 */
     // const char *pstars[] = {
     //                          "Mae West",
     //                          "Arnold Schwarzenegger",
     //                          "Lassie",
     //                          "Slim Pickens",
     //                          "Gerta Garbo",
     //                          "Oliver Hardy"
     //                     };  
     
     // const int starCount = sizeof(pstars) / sizeof(pstars[0]);    // Get array size，此題是 陣列總大小 ÷ 單一元素大小 = 陣列元素個數。
     // int choice = 0;                    
     // const char *pstr = "Your lucky star is ";
     // cout << endl
     //      << "Pick a lucky star!"
     //      << " Enter a number between 1 and "
     //      << starCount
     //      << " : ";
     // cin >> choice;
     // cout << endl;

     // if( (choice >= 1) && (choice <= starCount) ){
     //      cout << pstr << pstars[choice -1];
     // }else{
     //      cout << "Sorry, you haven't got a lucky star.";
     // }

     /* 指標對字串排序 */
     // string text;
     // const string separators = ",. \"\n";
     // const int max_words = 1000;
     // string words[max_words];
     // string *pwords[max_words];    // Array of pointers to the words

     // // Read the string to be searched from the keyboard
     // cout << endl << "Enter a string terminated by #:" << endl;
     // getline(cin, text, '#');

     // // Extract all the words from the text
     // int start = text.find_first_not_of(separators);
     // int end = 0;
     // int word_count = 0;

     // while( (start != string::npos) && (word_count < max_words) ){
     //      end = text.find_first_of(separators, start + 1);
     //      if(end == string::npos){
     //           end = text.length();
     //      }
     //      words[word_count] = text.substr(start, end - start);
     //      pwords[word_count] = &words[word_count];
     //      word_count++;

     //      // Find the first character of the next word
     //      start = text.find_first_not_of(separators, end + 1);
     // }

     // Sort the words in ascending sequence by direct insertion
     // int lowest = 0;

     // for(int i = 0; i < word_count -1; i++){
     //      lowest = i;

     //      // Check current against all the following words
     //      for(int j = i + 1; j < word_count; j++){
     //           if(*pwords[j] < *pwords[lowest]){
     //                lowest = j;
     //           }
     //      }
     //      if(lowest != i){
     //           string *ptemp = pwords[i];
     //           pwords[i] = pwords[lowest];
     //           pwords[lowest] = ptemp;
     //      }
     // }
     // // Output the words in ascending sequence
     // for(int i = 0; i < word_count; i++){
     //      cout << endl << *pwords[i];
     // }
     // cout << endl;

     // // Output up to six words to a line in groups starting with the same letter
     // char ch = (*pwords[0])[0];    // First letter of first word
     // int words_in_line = 0;    // Words in a line count
     // for(int i = 0; i< word_count; i++){
     //      if(ch != (*pwords[i])[0]){
     //           cout << endl;  // Start a new line
     //           ch = (*pwords[i])[0];    // Save the new first letter
     //           words_in_line = 0;
     //      }
     //      cout << *pwords[i] << " ";    // Every sixth word
     //      if(++words_in_line == 6){
     //           cout << endl;
     //           words_in_line = 0;
     //      }
     // }

     /* Calculating primes */
     // const int max = 100;
     // long primes[max] = {2, 3, 5};
     // int count = 3;
     // long trial = 5;
     // bool isprime = true;

     // do{
     //      trial += 2;
     //      int i = 0;

     //      // Try dividing the condidate by all the primes we have
     //      do{
     //           isprime = trial % *(primes + i) > 0;
     //      }while((++ i < count) && isprime); // False for exact division
          
     //      if(isprime){   // We got one
     //           *(primes + count++) = trial;   // so save it in primes array
     //      }
     // }while(count < max);
     
     // // Output primes 5 to a line
     // for(int i = 0; i < max; i ++){
     //      if(i % 5 == 0){
     //           cout << endl;
     //      }
     //      cout << setw(10) << *(primes + i);
     // }
     // cout << endl;

     

     return 0;
}