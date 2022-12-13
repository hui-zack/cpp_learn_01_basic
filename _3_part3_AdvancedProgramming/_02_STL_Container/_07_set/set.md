[toc]
    [Set简介](#Set简介)
    [Set创建对象](#Set创建对象)
    [Set的整体赋值](#Set的整体赋值)
    [Set的元素交换](#Set的元素交换)
    [Set的大小操作](#Set的大小操作)
    [Set容器插入和删除元素](#Set容器插入和删除元素)
    [Set查找和统计元素](#Set查找和统计元素)
    [Set排序](#Set排序)
    [Set的遍历](#Set的遍历)
    [Set存放自定义数据类型](#Set存放自定义数据类型)

## Set简介

    set不支持随机访问元素, 无法使用algo库的算法, 但可以使用algo的for_each来遍历set

    所有元素在插入时自动排序
        set可以放入重复的元素
        multiset不可以放入重复的元素
    
    底层实现为二叉树
    
## Set创建对象
    
    所有元素在插入时自动排序, 
        set可以放入重复的元素
        multiset不可以放入重复的元素
    set<T> st;              // 使用无参构造创建set对象
    set(const set &st);     // 使用拷贝构造创建set对象


## Set的整体赋值
.   [2-1 使用=对set整体赋值](./_02_setAssign/02_setAssign.cpp)
    
    set<T>& operator=(const set<T> &mp);            // 使用=对set整体赋值

     set没有assign方法, 整体赋值只能通过=

## Set的元素交换
.   [使用set的swap方法交换两个set的所有元素](./_03_setSwap/_01_setSwap.cpp)
    
    set/multiset属于关联型容器, 底层基于二叉树实现

        set.swap(set<T> st>        //使用set的swap方法交换两个set的所有元素

## Set的大小操作
.   [4-1 获取set中元素的数量](./_04_setSize/_01_setSize.cpp)
.   [4-2 判断容器是否为空](./_04_setSize/_01_setSize.cpp)


    size();                 // 获取set中元素的数量
    empty();                // 判断容器是否为空

## Set容器插入和删除元素
[插入元素]
    [5-1-1 在set中插入元素](./_05_insertAndDeleteEle/_05_insertAndDeleteEle.cpp)
[删除元素]
    [5-2-1 删除值为10086的元素](./_05_insertAndDeleteEle/_05_insertAndDeleteEle.cpp)
    [5-2-2 删除迭代器pos位置的元素, 返回下一个元素的迭代器](./_05_insertAndDeleteEle/_05_insertAndDeleteEle.cpp)
    [5-2-3 清除迭代器\[begin, end)位置的元素, 无返回值](./_05_insertAndDeleteEle/_05_insertAndDeleteEle.cpp)
    [5-2-4 删除所有元素](./_05_insertAndDeleteEle/_05_insertAndDeleteEle.cpp)

    插入元素:
        insert(T ele);          // 往set中插入元素, 返回一个对组(multiset无返回值)

    删除元素:
        erase(T ele)                                                // 删除值为ele的元素
        erase(pos);                                                 // 清除迭代器pos位置的元素, 返回下一个元素的迭代器
        erase(auto selfSet.begin(), auto selfSet.end());              // 清除迭代器pos位置的元素, 返回下一个元素的迭代器
        clear();                                                    // 删除所有元素

## Set查找和统计元素
.   [6-1 判断t是否存在, 若存在, 返回该元素的迭代器, 若不存在, 返回set.end()](./_06_findAndCount/_01_findAndCount.cpp)
.   [6-2 统计t的元素个数](./_06_findAndCount/_01_findAndCount.cpp)


    set<T>::iterator find(T t)                      // 判断t是否存在, 若存在, 返回该元素的迭代器, 若不存在, 返回set.end()
    int count(T t)                                  // 统计t的元素个数

## Set排序
[修改set排序规则]
.   [7-1 编写仿函数设置set的排序规则](./_07_changeSetSortRule/_01_changeSetSortRule.cpp)
.   [7-2 使用仿函数创建set, 修改其排序规则](./_07_changeSetSortRule/_01_changeSetSortRule.cpp)


    set无法使用algo算法库的sort(其元素只能通过迭代器访问), 也没有实现sort方法
    set默认排序为从小到大, 要修改其排序规则必须在创建时就修改
        使用仿函数(仿函数是一个重载了()操作符的类)修改其排序规则

## Set存放自定义数据类型
.   [8-1 编写自定义数据类型Camera](./_08_setSaveCustomType/_01_setSaveCustomType.cpp)
.   [8-2 编写Camera的set仿函数设置排序规则](./_08_setSaveCustomType/_01_setSaveCustomType.cpp)
.   [8-3 创建Camera的set容器](./_08_setSaveCustomType/_01_setSaveCustomType.cpp)


## Set的遍历
.   [9-1 增强for循环遍历set](./_09_foreachSet/_01_foreachSet.cpp)
.   [9-2 普通for循环遍历set](./_09_foreachSet/_01_foreachSet.cpp)
.   [9-3 while循环遍历set](./_09_foreachSet/_01_foreachSet.cpp)
.   [9-4 使用for_each(beg, end, operaFunc)遍历set, 自定义操作函数](./_09_foreachSet/_01_foreachSet.cpp)

