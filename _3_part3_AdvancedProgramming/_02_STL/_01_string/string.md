[toc]
    [了解string](#了解string)
    [字符串string的构造函数](#字符串string的构造函数)
    [字符串string的赋值操作](#字符串string的赋值操作)
    [字符串string的拼接操作](#字符串string的拼接操作)
    [字符串string的查找](#字符串string的查找)
    [字符串string的替换](#字符串string的替换)
    [字符串比较](#字符串比较)
    [](#)

## 了解string
    
    string是一个类, 内部封装了char[]*, 通过类管理着这个字符数组

    string内部封装了很多方法, 如: 
        查找 find 
        拷贝 copy
        删除 delete 
        替换 replace
    
    string管理char* 所分配的内存, 不用担心复制越界和取值越界等

## 字符串string的构造函数
[创建字符串的方法]
    [1-1 创建空字符串](./_01_createString/_1_createString.cpp)
    [1-2 根据char* 初始化字符串](./_01_createString/_1_createString.cpp)
    [1-3 根据字符串初始化字符串](./_01_createString/_1_createString.cpp)
    [1-4 根据单个字符初始化字符串](./_01_createString/_1_createString.cpp)

    string的构造函数
        string();                        创建空字符串, 如: string str
        string(const char* s)            使用字符串s初始化
        string(const string& str)        拷贝构造
        string(int n, char c)            使用n个字符c初始化字符串

## 字符串string的赋值操作
[使用=运算符赋值字符串]
    [2-1-1 把char*字符串赋值str](./_02_stringAssign/_1_stringAssign.cpp)
    [2-1-2 把string字符串s1赋值给str](./_02_stringAssign/_1_stringAssign.cpp)
    [2-1-3 把单个字符赋值给字符串](./_02_stringAssign/_1_stringAssign.cpp)

[使用string类的assign赋值字符串]
    [2-2-1 把char*字符串赋值str](./_02_stringAssign/_1_stringAssign.cpp)
    [2-2-2 把string字符串s2赋值给str](./_02_stringAssign/_1_stringAssign.cpp)
    [2-2-3 把char*字符串的前n个字符赋值给str](./_02_stringAssign/_1_stringAssign.cpp)
    [2-2-4 把n个相同字符赋值给str](./_02_stringAssign/_1_stringAssign.cpp)

    string的赋值函数
        string& operqtor=(const char* s);               将char*字符串赋值到当前字符串
        string& operqtor=(const string& s);             把字符串s赋值给当前字符串    
        string& operqtor=(const char s);                把字符赋值给当前字符串

        string& assign(const char* s);                  把char*字符串赋值给当前字符串
        string& assign(const string &s);                把字符串s赋值给当前字符串
        string& assign(const char* s, int n);           把s的前n个字符赋值给当前字符串
        string& assign(int n, char c);                  把n个字符c赋值给当前字符串               

## 字符串string的拼接操作
[使用+=运算符对string进行拼接/追加] 
    [3-1-1 +=拼接char*字符串](./_03_stringAppend/_1_stringAppend.cpp)
    [3-1-2 +=拼接string字符串](./_03_stringAppend/_1_stringAppend.cpp)
    [3-1-3 +=拼接字符](./_03_stringAppend/_1_stringAppend.cpp)
[使用append对string进行拼接/追加]
    [3-2-1 append拼接char*字符串](./_03_stringAppend/_1_stringAppend.cpp)
    [3-2-2 append拼接string字符串](./_03_stringAppend/_1_stringAppend.cpp)
    [3-2-3 append拼接char*字符串的前n个字符](./_03_stringAppend/_1_stringAppend.cpp)
    [3-2-4 append拼接string字符串pos开始的n个字符](./_03_stringAppend/_1_stringAppend.cpp)

    string& operator+=(const char* str);                拼接char*字符串 
    string& operator+=(const string& str);              拼接string字符串
    string& operator+=(const char c);                   拼接字符
   
    string& append(const char *s);                      拼接char*字符串
    string& append(const string& s);                    拼接string字符串
    string& append(const char* s, int n);               拼接char*字符串的前n个字符
    string& append(const string& s, int pos, int n)     拼接string字符串pos下标开始的n个字符

## 字符串string的查找
[从前往后查找]
    [4-1-1 在pos下标开始及之后的区域, 查找char*字符串第一次出现的下标](./_04_stringFind/_1_stringFind.cpp)
    [4-1-2 在pos下标开始及之后的区域, 查找string字符串str第一次出现的下标](./_04_stringFind/_1_stringFind.cpp)
    [4-1-3 在pos下标开始之后n个字符的区域, 查找char*字符串第一次出现的下标](./_04_stringFind/_1_stringFind.cpp)
    [4-1-4 在pos下标开始及之后的区域, 查找字符c第一次出现的下标](./_04_stringFind/_1_stringFind.cpp)
[从后往前查找]
    [4-2-1 从pos下标开始及之前的区域, 查找char*字符串最后一次出现的下标](./_04_stringFind/_1_stringFind.cpp)
    [4-2-2 从pos下标开始及之前的区域, 查找string字符串str最后一次出现的下标](./_04_stringFind/_1_stringFind.cpp)
    [4-2-3 从pos下标开始之前n个字符的区域, 查找char*字符串s最后一次出现的下标](./_04_stringFind/_1_stringFind.cpp)
    [4-2-4 查找字符最后一次出现的下标](./_04_stringFind/_1_stringFind.cpp)

    int find(const char* s, int post = 0) const         在pos下标开始及之后的区域, 查找char*字符串第一次出现的下标
    int find(const string& str, int pos = 0) const      在pos下标开始及之后的区域, 查找string字符串str第一次出现的下标
    int find(const char* s, int pos, int n) const       在pos下标开始之后n个字符的区域, 查找char*字符串第一次出现的下标
    int find(const char c, int pos) const               在pos下标开始及之后的区域, 查找字符c第一次出现的下标

    int rfind(const char* s, int pos = npos) const      从pos下标开始及之前的区域, 查找char*字符串最后一次出现的下标
    int rfind(const string& str, int pos = npos) const  从pos下标开始及之前的区域, 查找string字符串str最后一次出现的下标
    int rfind(const char* s, int pos, int n) cosnt      从pos下标开始之前n个字符的区域, 查找char*字符串s最后一次出现的下标
    int rfind(const char c, int pos = 0) const          查找字符最后一次出现的下标

## 字符串string的替换
.   [5-1-1 从pos开始及n个字符的区域, 替换为char*字符串s](./_05_stringReplace/_1_stringReplace.cpp)
.   [5-1-2 从pos开始及n个字符的区域, 替换为string字符串str](./_05_stringReplace/_1_stringReplace.cpp)


    string& replace(int pos, int n, const char* s);     从pos开始及n个字符的区域, 替换为char*字符串s
    string& replace(int pos, int n, const string& str); 从pos开始及n个字符的区域, 替换为string字符串str


## 字符串比较
.   [6-1 与string字符串比较](./_06_stringCompare/_1_stringCompare.cpp)
.   [6-2 与char*字符串比较](./_06_stringCompare/_1_stringCompare.cpp)

    int compare(const string& s) const                  与string字符串比较
    int compare(const char* s) const                    与char*字符串比较
    以ASCII码的方式进行比较:    
        两个字符串相等, 返回0
        >, 返回1
        <, 返回2

## 字符串取字符
.   [7-1 使用运算符[]取下标index处的字符](./_07_stringAt/_07_stringAt.cpp)
.   [7-2 使用成员方法at(int index)取下标index处的字符](./_07_stringAt/_07_stringAt.cpp)

    char& operator[](int index);            使用运算符[]取下标index处的字符
    char& at(int index);                    使用成员方法at(int index)取下标index处的字符

## 字符串插入和删除
[字符串插入]
    [8-1-1 在pos下标前插入char*字符串s](./_08_stringInsert/_1_stringInsert.cpp)
    [8-1-2 在pos下标前插入string字符串str](./_08_stringInsert/_1_stringInsert.cpp)
    [8-1-3 在pos下标前插入n个字符c](./_08_stringInsert/_1_stringInsert.cpp)
[字符串删除]
    [8-2 删除pos下标开始及之后n个字符](./_08_stringInsert/_1_stringInsert.cpp)

    字符串插入:
        string& insert(int pos, const char* s);         在pos下标后插入char*字符串s
        string& insert(int pos, const string& str);     在pos下标后插入string字符串str
        string& insert(int pos, int n, char c);         在pos下标后插入字符c
    字符串删除:
        string& erase(int pos, int n = npos);           删除pos下标开始之后n个字符

## 字符串截取
[9-1 返回pos下标开始及之后的n个字符组成的字符串](./_09_stringSubstr/_1_stringSubstr.cpp)

    string substr(int pos = 0, int n = npos) const      返回pos下标开始及之后的n个字符组成的字符串

