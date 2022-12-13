[toc]
    [Vector的构造方法](#Vector的构造方法)
    [Vector整体赋值操作](#Vector整体赋值操作)
    [Vector的容量和长度相关方法](#Vector的容量和长度相关方法)
    [Vector元素的插入和删除](#Vector元素的插入和删除)
    [Vector元素的插入和删除](#Vector元素的插入和删除)
    [Vector元素的获取](#Vector元素的获取)
    [Vector交换所有元素](#Vector交换所有元素)
    [遍历vector](#遍历vector)

## Vector的构造方法
.   [1-1 使用无参构造创建vector](./_01_vectorConstructor/_1_vectorConstructor.cpp)
.   [1-2 使用区间构造初始化vector](./_01_vectorConstructor/_1_vectorConstructor.cpp)
.   [1-3 使用重复元素构造初始化vector](./_01_vectorConstructor/_1_vectorConstructor.cpp)
.   [1-4 使用拷贝构造初始化vector](./_01_vectorConstructor/_1_vectorConstructor.cpp)


    vector构造函数:
        vector<T> v;                    默认构造
        vector(v.begin(), v.end())      将[v.begin(), v.end())区间拷贝构造新vector
        vector(n, elem)                 将n个elem拷贝并构造新vector
        vector(const vector &vec)       拷贝vec构造新vector

    vector的数据结构和数组非常类似, 也被称为单端数组,
    vector的动态扩展:
        并不是在原空间之后续借新空间, 而是重新申请更大的空间, 将数据拷贝过去, 并释放原空间

## Vector整体赋值操作
.   [2-1 使用=号运算符赋值给新vector](./_02_vectorAssign/_1_vectorAssgin.cpp)
.   [2-2 通过assign(beg, end)方法赋值给新vector](./_02_vectorAssign/_1_vectorAssgin.cpp)
.   [2-3 通过assign(int n, T element)方法赋值给vector容器](./_02_vectorAssign/_1_vectorAssgin.cpp)

    vector& operator(const vector & vec);       重载等号操作符
    assign(beg, end);                           将[beg, end)区间中的数据拷贝赋值给本身
    assign(n, elem);                            将n个elem拷贝赋值给本身

## Vector的容量和长度相关方法
[尺寸容量的获取判断方法]
.   [3-1-1 使用isEmpty()方法判断vector是否为空](./_03_capacitySizeMethodOfVector/_1_capacitySizeMethodOfVec.cpp)
.   [3-1-2 使用capacity()方法获取容器容量(申请的地址大小)](./_03_capacitySizeMethodOfVector/_1_capacitySizeMethodOfVec.cpp)
.   [3-1-3 使用size()方法获取vector元素长度](./_03_capacitySizeMethodOfVector/_1_capacitySizeMethodOfVec.cpp)

[修改size的方法]
.   [3-2-1 使用resize(int newSize)方法修改容器size](./_03_capacitySizeMethodOfVector/_1_capacitySizeMethodOfVec.cpp)
.   [3-2-2 使用resize(int newSize, T newValue)修改容器size, 并使用newValue填充数据](./_03_capacitySizeMethodOfVector/_1_capacitySizeMethodOfVec.cpp)

[修改capacity的方法]
.   [3-3-1 使用reserve(int capacity)扩充容器容量(只能扩充)](./_03_capacitySizeMethodOfVector/_1_capacitySizeMethodOfVec.cpp)
.   [3-3-2-1 使用shrink_to_fit()的方式缩减容器容量](./_03_capacitySizeMethodOfVector/_1_capacitySizeMethodOfVec.cpp)
.   [3-3-2-2 使用匿名对象+swap(vector<T> vec)的方式缩减容器容量](./_03_capacitySizeMethodOfVector/_1_capacitySizeMethodOfVec.cpp)

    长度和容量的获取判断方法:
        boolean empty();                判断容器是否非空
        int capacity();                 获取容器的容量
        int size();                     获取容器中元素的个数
    修改size的方法:
        .resize(int num);               重新指定容器的长度, 若容器变长, 重新申请地址, 容器变短, 超出的元素被删除
        .resize(int num, T elem);       重新指定容器的长度, 若容器变长, 重新申请地址, elem填充新位置, 容器变短, 超出的元素被删除
    修改capacity的方法:
        .reserve(int capacity);         扩充元素容量(只能用来扩充不能用来缩减, 缩减使用匿名对象+swap()的方式)
        .shrink_to_fit();               使用shrink_to_fit()的方式缩减容器容量
        vector<int>(vec).swap(vec);     使用匿名对象+swap(vector<T> vec)的方式缩减容器容量
        

## Vector元素的插入和删除
[vector插入元素]
    [4-1-1 在尾部插入元素](./_04_vectorInsertDeleteEle/_1_vectorInsertDelete.cpp)
    [4-1-2 迭代器向指定下标pos前插入元素](./_04_vectorInsertDeleteEle/_1_vectorInsertDelete.cpp)
    [4-1-3 迭代器向指定下标pos前插入count个ele元素](./_04_vectorInsertDeleteEle/_1_vectorInsertDelete.cpp)
[vector删除元素]
    [4-2-1 删除最后一个元素](./_04_vectorInsertDeleteEle/_1_vectorInsertDelete.cpp)
    [4-2-2 删除迭代器指向的元素](./_04_vectorInsertDeleteEle/_1_vectorInsertDelete.cpp)
    [4-2-3 删除迭代器从\[start, end)之间的元素](./_04_vectorInsertDeleteEle/_1_vectorInsertDelete.cpp)
    [4-2-4 删除容器中所有元素](./_04_vectorInsertDeleteEle/_1_vectorInsertDelete.cpp)


    插入元素:
        push_back(T element)                            在尾部插入元素
        insert(const_iterator pos, T ele)               迭代器向指定下标pos前插入元素
        insert(const_iterator pos, int count, T ele)    迭代器向指定下标pos前插入count个ele元素
    删除元素
        pop_back()                                      删除最后一个元素
        erase(const_iterator pos)                       删除迭代器指向的元素
        erase(const_iterator start, const_iterator end) 删除迭代器从[start, end)之间的元素
        clear()                                         删除容器中所有元素


## Vector元素的获取
.   [5-1 返回下标index处的元素](./_05_vectorGetEle/_1_vectorGetEle.cpp)
.   [5-2 返回下标index处的元素](./_05_vectorGetEle/_1_vectorGetEle.cpp)
.   [5-3 返回第一个元素](./_05_vectorGetEle/_1_vectorGetEle.cpp)
.   [5-4 返回最后一个元素](./_05_vectorGetEle/_1_vectorGetEle.cpp)


    .at(int index);                  返回下标index处的元素
    .operator[index];                返回下标index处的元素
    .front();                        返回第一个元素
    .back();                         返回最后一个元素

## Vector交换所有元素
.   [6 6-1 使用swap()交换元素](./_06_vectorSwapAllEles/_1_vectorSwapAllEles.cpp)

    swap(vector<T> vec)             使用swap(vec)交换元素和容量(本质上是交换了指针) 

## 遍历vector
.   [1-7-1 增强for循环遍历](./_07_foreachVector/_1_foreachVertor.cpp)
.   [1-7-2 普通for循环遍历](./_07_foreachVector/_1_foreachVertor.cpp)
.   [1-7-3 while循环遍历](./_07_foreachVector/_1_foreachVertor.cpp)
.   [for_each遍历, 需要声明算法头文件, 自定义元素操作函数](./_07_foreachVector/_1_foreachVertor.cpp)
    
    容器: vector
    算法: for_each
    迭代器: vector<int>::iterator
