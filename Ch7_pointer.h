/*
何謂指標?
每個變數和文字都有記憶體位址(address)，那是資料儲存在電腦記憶體的位置。
程式所使用的函數必須放在記憶體的某處，所以函數也有一個記憶體位址。
指標是用來儲存記憶體位址的變數，儲存在指標的位址通常會應於一個變數所在的記憶體位置，亦可以是函數位。

為了利用儲存在該位址的內容，你必須確實知道他是什麼，而不只是他在哪裡。
指標是一個指向特定型態之資料項的指標。

宣告指標
long* ptr or long *ptr

指標使用
取址運算子(address-of operator) & ，一元運算子，可以取得變數儲存位置。
long number;
long *pnumber;
number = 123;
pnumber = &number;  //取址

&運算子取得任何形態變數的位址

指標的基本用途是存取指標所指之記憶體位置中的資料，需要使用'間接'運算子 '*'，將間接運算子用在指標上就是參考存在指標上之位址的內容。

為何使用指標?
1. 指標可處理存在陣列中的資料，通常會比陣列的表示法更快
2. 函數中廣泛的運用指標存取於函數之外的一大塊資料，諸如陣列等。
3. 最重要! 你會看到動態配置新變數的空間。也就是說在程式執行期間，這種功能可使程式視輸入來調整記憶體的使用。 因為你無法事先知道你要動態產生多少變數，唯一可用的方法就是使用指標。
 
初值化指標
若指標沒有初值化將比為初值化的一班變數和陣列更危險。  
初值化指標是比較好的觀念

NULL定義在標準函式庫中，其值為0
NULL只和C相容，在C++中使用0是良好習慣

可以初值化指標為char型態
char *pproverb = "A miss is as good as a mile.";此敘述將根據引號中的字元字串產生空字元結尾的字串文字(事實上是const char的陣列)，並將此字串文字的第一個字元的位址存在指標pproverb。
一般會使用const char *pproverb = "A miss is as good as a mile."作保護
cout << pnumber; 
會輸出指標pnumber所含的位址。
cout << pstar1;
會輸出"字串文字"!而非位址。 
這差異在於pnumber是數字型態的指標，而pstar1是'char指標'。
輸出串流cout處理'char指標'的變數有如空字元結尾字串，並以此顯示之。

所以用指標的好處是什麼? 使用指標可以避免陣列版本的記憶體浪費，每個字串所占用的位元組數恰可儲存其內容。 
但程式似乎有一點冗長，因此我們可用指標陣列改善之。

指標陣列不一定會節省記憶體 : 指標陣列會需要 1. 字串記憶體 2. 指標元素所需記憶體 
指標陣列較有效率。

常數指標和指向常數的指標
我們利用指向常數的指標(pointers to constants)來處理字串文字。

const char *pstars[] = {
                        "Mae West",
                        "Arnold Schwarzenegger",
                        "Lassie",
                        "Slim Pickens",
                        "Gerta Garbo",
                        "Oliver Hardy"
                    };  
在此宣告中，我們將指標陣列之元素所指的物件宣告為常數。編譯器會禁止對他們做直接的修改。 ex: pstars[0] = 'X'; 此會跳錯。
但是下面的敘述仍是合法的，將設定運算子右邊元素所含的位址複製到左邊的元素:
pstars[0] = pstars[0];

如果要禁用這種改變，可以使用如下描述:
const char* const pstars[] = {
                        "Mae West",
                        "Arnold Schwarzenegger",
                        "Lassie",
                        "Slim Pickens",
                        "Gerta Garbo",
                        "Oliver Hardy"
                    };  
用額外的const宣告常數指標(constant pointer)，現在指標和其所指的字串都宣告為常數，所以此陣列沒有任何內容可以修改了。

value 宣告為 const int，編譯器可能會把它放進唯讀區（Read-Only Segment），或直接在編譯階段內嵌（例如優化成常數）。
你透過 int* 嘗試修改這個記憶體，就會造成 未定義行為（Undefined Behavior）：
1. 在某些系統會 直接閃退 (segmentation fault)；
2. 在某些情況編譯器會 忽略修改（因為它假設這個值永遠不會變）；
3. 在某些編譯器下甚至 產生錯誤的執行結果。

👉 所以 C++ 標準禁止讓非 const 指標指向 const 物件，以防止這種潛在破壞。

宣告方式	         含義	                 改變指向的值？	        能改變指標本身？
int* p	            一般指標	               ✅ 可修改	            ✅ 可修改
const int* p	    指向常數的指標	           ❌ 不可修改	         ✅ 可修改
int* const p	    常數指標	               ✅ 可修改	            ❌ 不可修改
const int* const p	常數指標指向常數	        ❌ 不可修改	         ❌ 不可修改

指標運算
兩個指標的差: 兩個位址之差是以元素個數為單位，而不是位元組。

採用陣列名稱的指標表示法
*(primes + 1)
 
多維陣列和指標
double beans[3][4];
double* pbeans = &beans[0][0];  此敘述將指標設為double型態之陣列的第一個元素的位址。 亦可以將陣列第一列的位址設給指標 double* pbeans = &beans[0];

✅ 先看原本的陣列
double beans[3][4];
這是一個 3 列 × 4 欄 的連續記憶體空間：
| beans[0][0] | beans[0][1] | beans[0][2] | beans[0][3] |
| beans[1][0] | beans[1][1] | beans[1][2] | beans[1][3] |
| beans[2][0] | beans[2][1] | beans[2][2] | beans[2][3] |

記憶體是 一維連續存放的。

✅ 第一種寫法
double* pbeans = &beans[0][0];
📌 意義
pbeans 是 指向 double 的指標。
它指向整個矩陣的 第一個元素。
🎯 你可以把它想成「把 2D 陣列攤平成一條線」
*(pbeans + 0) == beans[0][0]
*(pbeans + 1) == beans[0][1]
*(pbeans + 4) == beans[1][0]
*(pbeans + 8) == beans[2][0]
❗ 缺點
pbeans 不知道行寬是 4，你必須自己計算 index。
如果你要取得 beans[r][c]：
*(pbeans + r * 4 + c);

✅ 第二種寫法
double (*pbeans)[4] = beans;
📌 意義
pbeans 是「指向含 4 個 double 的陣列」的指標。
也就是說：
pbeans 指向一「列」
*pbeans 就代表那一列（長度 4 的陣列）
🎯 存取方式
pbeans[0][0] == beans[0][0]
pbeans[1][2] == beans[1][2]
✅ 好處
自動知道每一列長度是 4，不需要你手動計算 offset。
維持 2D 陣列語意清晰。
🔥 直接比較差異重點
寫法	                           型別	             意義	             優點	                       缺點
double* pbeans = &beans[0][0];	指向 double	        把矩陣視為一條線	靈活、適合作記憶體搬移	        不知道行寬，存取要自己算
double (*pbeans)[4] = beans;	指向「double[4]」	指向每一列的陣列	 可用 pbeans[r][c]直接取	   型別較不直觀
✅ 最重要的一句話總結
double* 是 指向第一個元素（一維視角），
double (*)[4] 是 指向每一列（二維視角），會幫你保留「每行有 4 個元素」的資訊。

beans[i][j] : 使用 *((*beans + i) + j)取位址。  


*/