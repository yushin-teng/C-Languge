/*
資料陣列
Array可以儲存相同型態的數個資料項，可以是整數陣列或是字元陣列等。

陣列使用
陣列只是一些記憶體位置，每個可以儲存相同型態的一項資料，而且參考時都用相同的變數名稱
ex: double temperature[366];
有366個element，此陣列占了366個記憶體位置，每個位置可用來儲存double型態值。

參考陣列中的個別項目是用一班稱為索引(index)的整數。 一個項目的索引是他與陣列第一元素的距離(offset)
第一個元素的距離為0，所以其索引為0。
所以索引值為3的元素是陣列的第四個元素。

每個方格表示儲存陣列元素值得記憶體位置。

陣列的大小可為常數的整數運算式，但是編譯器必須可以求出整數常數才可以配置適當的記憶體，這意思是這種運算式只能含有文字，const和列舉元。

初值化陣列
int sample[5] = {0, 1, 2, ,3, 4}; 在大括弧中的所有初值稱為聚合初值串列(aggregate initializer list)或是初值串列(initializer list)
這些初值的個數不可以大於陣列的元素個數，但可以比較少。
若初始值個數比較少，則這些值會設定給第一個元素(索引值為 0)及之後的連續元素，而沒有初值的元素則會初值化為0。
但若不提供初值串列，則情況會有不同，此時陣列元素的值是一些無用的內容。
C++允許空的初值串列，此時陣列的所有元素都會初值化為0，我建議至少都要放一個初始值在此串列中。

double junk[size] = {0} 和 double junk[size] = {}皆會初始化陣列元素為0

用初始串列定義陣列大小
int values[] = {2, 3, 4};

計算陣列的元素個數
sizeof()運算子可取得變數占用的位元組數，也可以幫助你計算陣列的元素個數。
sizeof values / sizeof values[0] 計算陣列個數

字元陣列
char型態的陣列有雙重的特性。他可以只是單純的字元陣列，美個元素儲存'一個字元'，或是可以代表'一個字串'。
對於後者，字串的每個字元會儲存在不同的陣列元素中，而且字串結束時會用一個特殊的字串結束字元'\0'，這字元稱為空字元(null character)

字元字串稱為C-格式字串 C-style string，和標準函式庫定義的string型態成一對比。
string型態的物件不需要字串結束字元。
初值化字元陣列:
char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
若你提供的初始值少於陣列元素，則沒有明確出初始值的元素會初始化為0，也就是說所有位元為0的空字元，而不是字元'0'。

可以讓編譯器將陣列大小設為初始值的個數:
char vowels[] = {'a', 'e', 'i', 'o', 'u'};

可用文字字串宣告char型態的陣列並做初值化:
char name{10} = "Mae West";

函數getline()從cin串流讀入並儲存整行字元，包括空格。當遇到換行字元'\n'時就結束，就是你按下return鍵的時候。
getline()有兩個引數。
輸入會存在第一個引數所指定的位置，此例是陣列text。
第二個引數是你要儲存的最多字元數，此數字包過字串結束字元'\0'，這在輸入字串時會自動附加在字串末。

函數getline()可能有第三個引數，這可指定一個不是'\n'的字元來表示輸入結束。 ex: cin.getline(text, maxlength, '!');

多維陣列
只需一個索引值來選擇元素，這種陣列稱為一維陣列(one-dimensional array)，變動一個索引就可參考所有的元素。
亦可宣告兩個以上的索引值來參考元素的陣列，即為多維陣列(multidimensional array)
你可以用陣列名稱和括號中的單一索引值參考陣列的一整列 ex: carrots[0] 表示第一列資料
陣列名稱本身是指整個陣列，對此陣列你無法用此表示法顯示任何一列或整個陣列的內容。cout << carrots; 會輸出16進位值是陣列第一個元素的記憶體位置。
for(int i = 0; i < (sizeof(carrots)/sizeof(carrots[0])); i++){
     for(int j = 0; j < (sizeof(carrots[0])/sizeof(double)); j++){

     }
} 

三維陣列情況
假設：
double box[2][3][4];   // 三維：2 × 3 × 4

第一維大小：sizeof(box) / sizeof(box[0]) → 2
第二維大小：sizeof(box[0]) / sizeof(box[0][0]) → 3
第三維大小：sizeof(box[0][0]) / sizeof(box[0][0][0]) → 4

多維陣列的初值化
double carrots[3][4] = {
                       {2.5, 3.2, 3.7, 4.1},  // first row
                       {4.1, 3.2, 3.7, 4.1},  // second row
                       {2.5, 3.2, 3.7, 4.1}   // third row
                       };

多維字元陣列的初始化
用雙引號取代大括號的工作!
char starts[6][80] = {
                       "Robert Redford", 
                       "Hopalong Cassidy",
                       "Lassie",
                       "Slim Pickens",
                       "Boris Karloff",
                       "Oliver Hardy"
                     };

較佳的字串類別
標頭檔string定義string型態，使用上比空字元結束的字串更簡單
string型態由類別class定義 (class template)

類別的實體稱為物件；型態的實體稱為變數

宣告字串物件
string型態的物件其內容是char型態的字元字串，這可以是空字串。
string nyString;    // decalares an empty string，表示字串沒有字元，長度為0
可用字串文字宣告並初值化string物件:
string proverb = "Many a mickle makes a muckle."
儲存字串不需要字串結束字元。
可用string的物件函數length()取得string物件的長度
cout << proverb.length()
上面的'.'稱為成員存取運算子(member access operator)或點運算子(dot operator)

不能用單一字元初值化string物件，但可以用相同字源的數個實體(包括一個實體)初值化物件。
string sleeping(6,'z');
string物件sleeping會含有字串"zzzzzz"
不可以用string sleeping = 'z'作初值化。

初值化另一個string物件的方式就是利用現有的string物件。
string sentence = proverb;  或 string sentence(proverb);

在string物件中，可以指定索引值和指定字元個數作初值化 (p201)
***string sentence(proverb, 0, 13);

string物件的運作
連結字串 + 的其中一側必須是string物件才可以。

使用string物件的主要優點是我們不需要擔心字串的長度。

存取子字串
用函數substr()可取得string物件的子字串。指定字串開始的索引位置，以及長度-子字串的字元數目。

比較字串
可以用比較運算子(其屬於string物件的運算元)
> >= < <= == !=     (直接看例子)

compare函數
string物件的compare()函數呼叫
object_name.compare(other_object)  是比較字串序而不是長度!!!
🔑 重點
只看第一個不同的字元，誰比較小（ASCII 值小），整個字串就比較小。
若一樣長度都比完 → 一樣 → 回傳 0。
若前面都一樣，但字串長度不同 → 較短的字串比較小。

搜尋字串
find()，可以在字串中找出子字串或單一字元的索引位置。

特定字元集合的字元位置搜尋 (ex: , . ; : \"等) 使用find_first_of() 或 find_last_of()功能

向後搜尋字串
find是向前搜尋整個字串，rfind() (reverse find)是反向搜尋

修改字串
插入 : insert()可插入子字串 
取代 : replace()取代子字串

取代子字串
text.replace(start, end - start,"Gruntfuttock");
text.replace(start, end - start, name, 5, 12);  // name[5]開始的12個字元用做取代字元
test.replace(start, end - start, "Gruntfuttock, Amos", 12) //C-style字串前12個字元用做取代字元
test.replace(start, end - start, 3, '*')

從字串中移除字元
erase()
text.erase(0 ,6)    //移除0位置開始的6個字元
string word;
int index = text.fint(word);
if(index != string::npos){
     text.erase(index, word.length());
}

字串陣列
string word[] = {"xx", "yy", "the other"};
string word[10] = {"xx", "yy", "the other"};

string word[2][6] = 't'; //改變第三個元素的第七的字元!!!
cout << word[2];   顯示the otter

📊 與 int 的差異比較
特性	                 int	                                       size_t
是否可負數	    有號 (可負數)	                               無號 (不可負數)
範圍	          -2^31 ~ 2^31-1 (在 32-bit)	       0 ~ 2^32-1 (在 32-bit) / 0 ~ 2^64-1 (在 64-bit)
用途	              一般數值計算	                         記憶體大小、容器大小、索引
回傳場合	         罕見	                             sizeof、vector.size()、string.length()

*/