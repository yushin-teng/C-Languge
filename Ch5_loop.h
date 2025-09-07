// 迴圈是一種架構可以反覆執行相同的敘述直到符合特定的條件。在回圈內的敘述有時稱反覆敘述(iteration statement)
// 迴圈都有兩個基本元素 : 反覆執行的迴圈主體，由敘述或區塊敘述組成，以及迴圈條件可決定何時停止迴圈的執行。

// 迴圈條件有數種形式:
// 執行已知次數的迴圈
// 執行迴圈直到已知值超過另一值
// 執行迴圈直到鍵盤輸入特定的字元

// C++有三種不同的迴圈:
// while
// do while
// for

// while(condition){
//      loop statements to be executed repeatedly;
// }

// do{
//      loop statements to be executed repeatedly
// }while(condition);

// for( initializing_expression ; condition ; iteration_expression)
// {
//      loop statements
// }

// 別用浮點數來控制迴圈

// 逗點運算子
// 雖然逗點彷彿是分隔元，實際上它是二元運算子。

// 巢狀迴圈，最常見應用是處理陣列。

// 掠過迴圈反覆 : continue，有時候會有一些情況需要略過一次迴圈反覆，而繼續執行下一次的反覆使用。

// 中斷迴圈，採用break方式中斷

// 無窮迴圈 indefinite loop
// for( ; ; ){
//      // Statements that do something
//      // There needs to be some way of ending the loop in here
// }

// while(ture){
//      // Statements that do something
//      // There needs to be some way of ending the loop in here
// }

// 結束無窮迴圈的明顯方法是使用break敘述。

// 🔹 什麼是中點？
// 假設區間是 [low, high]
// 我們要找「中間的位置 mid」來問使用者問題。
// 但如果 high - low 是奇數，就會有「除以 2」產生小數的情況。
// 這時候就有 下取 (floor) 和 上取 (ceil) 兩種作法。

// 問句 「number > mid ?」
// 若答案是 Yes → low = mid + 1
// 若答案是 No → high = mid
// 必須用 下取中點，這樣在 [49,50] 時 mid=49，回答 Yes 就能把 low=50，收斂到正確答案。

// 問句 「mid > number ?」
// 若答案是 Yes → high = mid - 1
// 若答案是 No → low = mid
// 必須用 上取中點，這樣在 [49,50] 時 mid=50，回答 No 就能把 low=50，收斂到正確答案。


/* 二分搜尋 (binary search)
🔹 Step 1: 問題背景
假設我們有區間 [low, high]
我們要問：「你的數字比 mid 大嗎？」
→ 根據回答去縮小 [low, high]。

🔹 Step 2: 下取中點 (floor)
公式：
mid = low + (high - low) / 2;
(high - low) / 2 用整數除法，自動往下取整。
所以 mid 偏左。
例子：
[1, 100] → (100-1)/2 = 49 → mid = 50
[49, 50] → (50-49)/2 = 0 → mid = 49 (偏左)

👉 如果問「number > mid ?」：
回答 Yes → low = mid + 1
回答 No → high = mid
在 [49, 50] 時：
mid = 49
如果答案是 50 → 回 Yes → low = 50 → 成功收斂
如果答案是 49 → 回 No → high = 49 → 成功收斂
✅ 所以「問 number > mid?」時，用 下取才安全。

🔹 Step 3: 上取中點 (ceil)
公式：
mid = low + (high - low + 1) / 2;
(high - low + 1) / 2 保證往上取整。
所以 mid 偏右。
例子：
[1, 100] → (100-1+1)/2 = 50 → mid = 51 (偏右)
[49, 50] → (50-49+1)/2 = 1 → mid = 50 (偏右)
👉 如果問「mid > number ?」：
回答 Yes → high = mid - 1
回答 No → low = mid
在 [49, 50] 時：
mid = 50
如果答案是 50 → 回 No → low = 50 → 成功收斂
如果答案是 49 → 回 Yes → high = 49 → 成功收斂
✅ 所以「問 mid > number?」時，用 上取才安全。

🔹 Step 4: 結論（搭配關係）
問句 「number > mid ?」
用 下取 mid
更新：Yes → low = mid + 1，No → high = mid
問句 「mid > number ?」
用 上取 mid
更新：Yes → high = mid - 1，No → low = mid

✅ 核心觀念：
問號方向不同 → 要選不同的 mid 公式
目標是「每次迴圈都至少收斂 1」，不會卡在 [x, x+1]。

為什麼 Yes 要設 low = mid + 1（而不是 low = mid）

使用者回答 Yes 代表：答案 > mid。
用集合語言：答案落在 (mid, high]。
這個半開區間要用整數的閉區間表示，就是 [mid+1, high]。
所以 必須 設 low = mid + 1。


1) 問句的語意

題目問的是：“Is your number greater than mid?”
這句話用數學寫法是：answer > mid（嚴格大於）。

使用者回答 Yes ⇒ 斷言為真：answer > mid

使用者回答 No ⇒ 斷言為假：NOT(answer > mid)
而 NOT(a > b) 的正確否定是 a ≤ b，不是 a < b。

真值規則

否定「大於」(>) → 「小於或等於」(≤)

否定「大於等於」(≥) → 「小於」(<)

否定「小於」(<) → 「大於或等於」(≥)

所以：

Yes：answer > mid

No ：answer ≤ mid

) 固定不變的前提（不然會亂）

我們永遠維持一個含端點的區間 [low, high]，代表「答案一定在這裡面」。

每一回合都取一個中點 mid 來發問，發問之後縮小區間，但仍讓答案留在新區間裡。

目標：區間長度 high - low 每回合至少減少 1（尤其在只剩兩個數時一定要縮小），這樣才保證收斂。

1) 問句 A：「你的數字比 mid 大嗎？」（number > mid ?）
(A-1) 根據語意推出「區間怎麼改」

回答 Yes（真的比 mid 大）：答案 ∈ (mid, high] → 新區間 = [mid + 1, high]

回答 No（不比 mid 大）：答案 ∈ [low, mid] → 新區間 = [low, mid]

這一步只有在理解問句意義之後，直接從集合語意得到的：

“> mid” → 左邊不含 mid，所以下界是 mid+1

“≤ mid” → 右邊含 mid，所以上界是 mid

(A-2) 為了保證縮小，該選哪種 mid？

看最極端也最危險的情況：只剩兩個數 [low, high] = [x, x+1]

下取中點（floor）：
mid = low + (high - low) / 2 = x + (1)/2 = x

若回答 Yes（答案是 x+1）：low = mid + 1 = x + 1 = high → 變成 [x+1, x+1] ✅ 縮小

若回答 No（答案是 x）：high = mid = x → 變成 [x, x] ✅ 縮小

上取中點（ceil）：
mid = low + (high - low + 1) / 2 = x + (2)/2 = x+1

若回答 No（答案 ≤ mid = x+1，兩個都可能）：high = mid = x+1 → 區間仍是 [x, x+1] ❌ 沒縮小（卡住）

結論(A)：問「number > mid?」時，必須用下取中點：

mid = low + (high - low) / 2;     // 下取
if (answer == 'y') low  = mid + 1;
else               high = mid;

2) 問句 B：「mid 比你的數字大嗎？」（mid > number ?）
(B-1) 根據語意推出「區間怎麼改」

回答 Yes（mid 確實比較大）：答案 ∈ [low, mid-1] → 新區間 = [low, mid-1]

回答 No（mid 不大於答案，即答案 ≥ mid）：答案 ∈ [mid, high] → 新區間 = [mid, high]

同樣是集合語意直接推：

“mid > number” → 右邊不含 mid，所以上界 mid-1

“mid ≤ number” → 左邊含 mid，所以下界 mid

(B-2) 為了保證縮小，該選哪種 mid？

看只剩兩個數 [low, high] = [x, x+1]

上取中點（ceil）：
mid = low + (high - low + 1) / 2 = x + (2)/2 = x+1

若回答 Yes（mid>x：答案必是 x）：high = mid - 1 = x → 變成 [x, x] ✅

若回答 No（答案 ≥ mid = x+1）：low = mid = x+1 → 變成 [x+1, x+1] ✅

下取中點（floor）：
mid = x

若回答 No（答案 ≥ mid = x）：low = mid = x → 仍是 [x, x+1] ❌ 沒縮小（卡住）

結論(B)：問「mid > number?」時，必須用上取中點：

mid = low + (high - low + 1) / 2; // 上取
if (answer == 'y') high = mid - 1;
else               low  = mid;

3) 你看到的「上取 / 下取」其實是為了「保證進步」

問句 A 的更新規則讓左端點會前進（low = mid + 1），所以 mid 必須靠左（下取）才保證在 [x, x+1] 前進。

問句 B 的更新規則讓右端點會前進（high = mid - 1），所以 mid 必須靠右（上取）才保證在 [x, x+1] 前進。

4) 一頁速查（問句／更新／中點）
問句	集合語意 ⇒ 新區間	中點應該用	為何
number > mid ?	y ⇒ (mid, high] → [mid+1, high]
n ⇒ [low, mid]	下取 low + (high-low)/2	在 [x,x+1] 時保證 low 或 high 會變
mid > number ?	y ⇒ [low, mid-1]
n ⇒ [mid, high]	上取 low + (high-low+1)/2	在 [x,x+1] 時保證 low 或 high 會變
5) 變體：如果你問「≥ / ≤」呢？

只要先用語意推到新區間，再看在 [x, x+1] 是否縮小，就能決定中點要靠左（下取）還是靠右（上取）。
方法完全一樣，不再贅述。


1️⃣ 問句固定下來
cout << mid << " is greater than your answer, right? ";


數學翻譯就是：
問 mid > ans ?

2️⃣ 根據回答決定區間

Yes → 代表 mid > ans，答案必定在 [low, mid-1]
→ 所以要更新 high = mid - 1

No → 代表 mid ≤ ans，答案必定在 [mid, high]
→ 所以要更新 low = mid

3️⃣ 為什麼要用「上取中點」？

關鍵在兩個元素的情況 [x, x+1]：

若用下取中點
mid = low + (high - low)/2 = x

答案 = x+1 → 回答 No → low = mid = x → 區間還是 [x, x+1] → 沒縮小，卡住 ❌

若用上取中點
mid = low + (high - low + 1)/2 = x+1

答案 = x+1 → 回答 No → low = mid = x+1 → 區間變 [x+1, x+1] ✅

答案 = x → 回答 Yes → high = mid - 1 = x → 區間變 [x, x] ✅

👉 因此，這種問法 必須用上取中點，才能確保區間縮小。

✅ 總結

你的理解是對的：

問題寫成 「mid > ans ?」

回答 Yes → high = mid - 1

回答 No → low = mid

中點必須用上取 (ceil mid)，才不會在 [x, x+1] 卡住。