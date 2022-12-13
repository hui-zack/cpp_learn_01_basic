[toc]
    [List简介](#List简介)  
    [List创建对象](#List创建对象)  
    [List的整体赋值操作](#List的整体赋值操作)  
    [List的长度操作](#List的长度操作)  
    [List的长度操作](#List的长度操作)
    [List的插入和删除](#List的插入和删除)
    [List获取元素](#List获取元素)
    [list的反转和排序](#list的反转和排序)
    [list遍历](#list遍历)

## List简介
    
    List理解:
        list无法使用algo算法库(所有不支持随机访问的容器, 都不支持使用标准算法(algo库)), 但可以使用algo的for_each来遍历
        list是由一个一个不连续的结点(内存块)组成的, 不支持随机访问
       
        结点: 包含两个部分, 数据域和指针域
        STL中的列表是一个双向循环的列表
        list链表的存储方式并不是连续的内存空间, 因此链表list中的迭代器只支持前移和后移, 是一个双向迭代器
        list只支持迭代器访问(而且list的迭代器只能++, 不能+n)
        
    优点:
        使用动态存储分配, 不会造成内存浪费和溢出
        对任意位置的元素进行插入和删除操作时无需移动大量元素, 性能高 
    缺点:
        list的遍历速度较慢
        占用空间(数据域+指针域)比数组大
        
## List创建对象
.   [1-1 使用无参构造创建list](./_01_listConstructor/_01_listConstructor.cpp)
.   [1-2 使用区间拷贝将lst对象\[beg, end)区间的元素拷贝给新对象](./_01_listConstructor/_01_listConstructor.cpp)
.   [1-3 使用n个ele元素创建List](./_01_listConstructor/_01_listConstructor.cpp)
.   [1-4 使用拷贝构造赋值lst的所有元素到新list](./_01_listConstructor/_01_listConstructor.cpp)

    list<T> lst;                                    // 使用无参构造创建list
    list<T>(auto lst.begin(),auto lst.end());       // 使用区间拷贝将lst对象[beg, end)区间的元素拷贝给新对象
    list<T>(int n, T ele);                          // 使用n个ele元素创建List
    list(const list &lst);                          // 使用拷贝构造赋值lst的所有元素到新list


## List的整体赋值操作
.   [2-1 使用assign将lst对象\[beg, end)区间的元素赋值给自身](./_02_listAssign/_01_listAssign.cpp)
.   [2-2 使用assign将n个ele元素赋值给自身对象](./_02_listAssign/_01_listAssign.cpp)
.   [2-3 使用=号将lst的所有元素赋值给自身对象](./_02_listAssign/_01_listAssign.cpp)

    list.assign(auto lst.begin(), auto lst.end())   // 使用assgin将lst对象[beg, end)区间的元素赋值给自身
    list.assign(int n, T ele)                       // 使用assgin将n个ele元素赋值给自身对象
    list& operator=(const list& lst);               // 使用=号将lst的所有元素赋值给自身对象


## List的元素互换    
.   [3-1 使用swap方法于lst对象交换所有元素](./_03_listSwap/_01_listSwap.cpp)

    list.swap(const list<T>& lst);                 // 使用swap方法于lst对象交换所有元素

## List的长度操作
.   [4-1 判断list是否为空](./_04_listSize/_01_listSize.cpp)
.   [4-2 获取list的长度](./_04_listSize/_01_listSize.cpp)
.   [4-3 重新指定list长度为num, 若容器边长, 使用默认值填充新位置, 若容器变短, 删除超出的元素](./_04_listSize/_01_listSize.cpp)
.   [4-4 重新指定list长度为num, 若容器边长, 使用ele填充新位置, 若容器变短, 删除超出的元素](./_04_listSize/_01_listSize.cpp)

    list.empty();                   // 判断list是否为空
    list.size();                    // 获取list的长度
    list.resize(int num);           // 重新指定list长度为num, 若容器边长, 使用默认值填充新位置, 
                                    // 若容器变短, 删除超出的元素
    list.resize(int num, T ele);    // 重新指定list长度为num, 若容器边长, 使用ele填充新位置, 
                                    // 若容器变短, 删除超出的元素

## List的插入和删除
[两端插入和删除]
    [5-1-1 在尾部插入元素](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
    [5-1-2 删除尾部的元素](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
    [5-1-3 在头部插入元素](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
    [5-1-4 删除头部的元素](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
[指定位置插入元素]
    [-2-1 在迭代器的pos位置插入ele元素的拷贝, 返回新元素的位置](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
    [5-2-2 在迭代器的pos位置插入n个ele元素的拷贝, 无返回值](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
    [5-2-3 在迭代器的的pos位置插入lst对象\[beg, end)区间的元素](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
[删除元素]
    [5-3-1 删除容器中所有和ele匹配的元素](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
    [5-3-2 删除迭代器的pos位置的元素](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
    [5-3-3 删除pos位置自身\[beg, end)区间的元素](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)
    [5-3-4 删除所有数据](./_05_listInsertAndDelete/_01_listInsertAndDelete.cpp)

    list只支持迭代器访问(而且list的迭代器只能++, 不能+n)

    两端插入和删除
        push_back(T ele)            // 在尾部插入元素
        pop_back(T ele)             // 删除尾部的元素
        
        push_front(T ele)           // 在头部插入元素
        pop_front(T ele)            // 删除头部的元素

    指定位置插入元素
        insert(auto pos, T ele);            // 在迭代器的pos位置插入ele元素的拷贝, 返回新元素的位置
        insert(auto pos, int n, T ele);     // 在迭代器的pos位置插入n个ele元素的拷贝, 无返回值
        insert(auto pos, auto lst.begin(), auto lst.end()); 
                                            // 在迭代器的的pos位置插入lst对象[beg, end)区间的元素
    删除元素
        remove(T ele)                       // 删除容器中所有和ele匹配的元素
        erase(auto pos);                    // 删除迭代器的pos位置的元素
        erase(auto auto, selfList.begin(), auto  selfList.end()
                                            // 删除pos位置自身[beg, end)区间的元素
        clear();                            // 删除所有数据

## List获取元素
.   [6-1 获取第一个元素](./_06_listGetEle/_01_listGetEle.cpp)
.   [6-2 获取最后一个元素](./_06_listGetEle/_01_listGetEle.cpp)

    不使用迭代器时, list只能获取首尾两个元素
        由于底层为链表, 并非连续的地址空间, 因此无法随机访问
    list只支持迭代器访问(而且list的迭代器只能++, 不能+n)

    front();        // 获取第一个元素
    back();         // 获取最后一个元素

## list的反转和排序
[反转]
    [1-7-2-1 编写降序规则函数](./_07_listReverseAndSort/_01_listRevereseAndSort.cpp)
[排序-升序]
    [7-2-1 list排序, sort默认升序序列](./_07_listReverseAndSort/_01_listRevereseAndSort.cpp)
[排序-降序]
    [1-7-2-2 编写降序规则函数](./_07_listReverseAndSort/_01_listRevereseAndSort.cpp)
    [7-2-2-2 list排序, sort降序调用自定义降序规则](./_07_listReverseAndSort/_01_listRevereseAndSort.cpp)


    list的反转和排序不依赖algo算法
        所有不支持随机访问的容器, 都不支持使用标准算法(algo库)
        所有不支持随机访问的容器, 会提供自己的算法
    反转:
        reveres();                  // 反转list
    排序:
        sort();                     // 对列表排序, sort默认升序序列 
        sort(compareFunc);          // 对列表排序, sort降序需要自己写比较规则


## list遍历
.   [8-1 增强for循环遍历](./_08_forEachList/_01_foreachList.cpp)
.   [8-2 普通for循环遍历](./_08_forEachList/_01_foreachList.cpp)
.   [8-3 while循环遍历](./_08_forEachList/_01_foreachList.cpp)
.   [8-4 使用foreach算法遍历list, 需要自定义操作函数](./_08_forEachList/_01_foreachList.cpp)
