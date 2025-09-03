// integer literal 整數文字，無小數點的整數，有最大值和最小值，這些數字視儲存每種整數型態的記憶體大小而定
// float point literal 浮點數字，含有小數點
// -負號為unary operator一元運算子
// 十進位數字(DEC, decimalis) : 324 = 3*10^2 + 2*10^1 + 4*10^0
// 二進位數字(binary): 7個位元 0~127 總共2^7個數字；8個位元可表示256或2^8個數字。  一般而言，若有n位元，則可表示有2^n個整數，從0~2^n - 1
// 16進位數字(HEX) : 0, 0, 0000；1, 1, 0001；2, 2, 0010；............；F, 15, 1111
// 負值的二進位數字 : signed number(有號數)，首先必須決定一個固定長度(即二進位數字的位數)，然後將最左一位的二進位數字視為正負位元(sign bit)。 note: 必須固定長度的原因是避免不曉得哪一位元是正負位元
// *負值二進位數字的2補數(two's complement)  +8: 0000 1000 >> 1. 將每位二進位數翻轉，此稱1的補數形式 : 1111 0111 2. 將此值加1即得2的補數形式 : 1111 1000。 即得到-8的二進位表示式
// 負數 → 先取正數的二進位表示，再進行「取反 +1」的動作，得到二補數。
// 十六進位值在數字之前要有0x或0X
// 八進位值在數字前要有0，ex: 0123 = 1*8^2 + 2*8^ + 3*8^0 = 83  (所以不要在十進位整數前放置0，編譯器會誤判為八進位)


// 整數運算的結果都是整數，所以整數除法會直接無條件捨去小數位數值。
// 若有巢狀括號會從最內層開始計算至外層
// 固定輸出格式: 設定整數輸出的欄寬(field width) setw() 稱為運作子(manipulator) 需載入標準頭檔 iomanip


// 變數variable是記憶體上的一個區塊。必須以字母或底線開頭，不能以數字開頭
// 整數變數，可用宣告敘述(declaration statement)
/*
int apples; // Definition for the variable apples, 未指定初值的話，該變數的記憶體內容可能是上次使用後留下的垃圾!
int cars = 10; // Definition for the variable apples, 可直接指定初值.
*/


// 整數變數型態可決定要配置多少記憶體，有四種基本的整數變數型態:
// char  1個位元組       1 byte  主要儲存字元
// short 2個位元組       2 bytes
// int   4個位元組       4 bytes
// long  4個或8個位元組  8 bytes

// short, int, long可儲存正負號，亦可寫成signed short, signed int和 signed long
// signed整數變數可儲存正負整數，unsigned整數變數只能儲存正值 : 16位元的有號整數 -32768 ~ 32767； 16位元的無號整數 0 ~ 65535

// 記憶體中的整數: 
// char           1byte    -128~127
// unsigned char  1byte    0U~255U
// short          2bytes   -32768~32767
// unsigned short 2bytes   0U~65535U
// int            4bytes
// unsigned int   4bytes
// long           8bytes
// unsigned long  8bytes

// 設定運算子(assignment operator)將運算結果存在變數中 total_fruit = apples + oranges
// op= 設定運算子: 一個運算子 + 一個'='， x *= 2 和 x = x*2 運算邏輯相同； x *= y+2 和 x = x*(y+2) 相同； x += 2 和 x = x + 2 相同
// op=中間並無空格存在，若有空格會發生錯誤

// const關鍵字，單位轉換 特定數學符號值等皆使用const宣告後使用，避免程式使用magic number，且避免使用過程中被惡意或誤修改

// 浮點值 float point有三部分: 正負號，假數(mantissa, 這是一個大於等於1且小於2，有固定數的值)和指數(exponent) : 假數*10^指數次方的有號數 假數 = 1.2345 指數 = 3 值 = 1.2345*10^3 = 1234.5  或寫成1.2345E3 (E前後不可有空格)
// 浮點資料型態
// float        單一精確度的浮點值
// double       雙精確度的浮點值
// long double  延伸精確度的浮點值
// 精確度(precision)此處是指"假數"中有效數字的位數
// float precision: 7, double precision: 15
// float 結尾用F來表示，double結尾用L來表示
// 浮點值處理問題: 1. 一些小數值沒有正確的轉換為浮點值。 2. 兩個幾乎相同的值的差值會損失精確度 3. 處理很大範圍的可能值可能導致錯誤，其中一個值為另一個10^8倍差異。