    cout << "This program counts the number of characters you enter (excluding spaces)." << endl;
    cout << "Enter characters (program stops when you type '#'):" << endl;
    do
    {
        cin >> noskipws >> ch;   // 不跳過空白，連空白與換行都讀進來

        if (ch == '#') {
            cout << "\n'#' detected. End program." << endl;
            break;               // 遇到 # 立即停止
        }

        if (ch != ' ' && ch != '\n' && ch != '\t') {
            count++;             // 只計算非空白字元
        }
    } while (ch != '#');
    
    cout << "Total characters entered (excluding spaces): " << count << endl;