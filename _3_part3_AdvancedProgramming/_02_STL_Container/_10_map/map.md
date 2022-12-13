[toc]
    [Map/multimap简介 ](#Map/multimap简介)
    [创建map对象](#创建map对象)
    [Map的整体赋值](#Map的整体赋值)
    [Map交换所有元素](#Map交换所有元素)
    [Map的size操作](#Map的size操作)
    [Map插入和删除元素](#Map插入和删除元素)
    [Map通过key获取value](#Map通过key获取value)
    [Map查找和统计](#Map查找和统计)
    [仿函数修改map的排序规则](#仿函数修改map的排序规则)
    [Map存放自定义数据类型](#Map存放自定义数据类型)
    [遍历map的方法](#遍历map的方法)

## Map/multimap简介 
    map的理解:
        map中的所有元素都是pair
        pair中的一个元素为key, 启动索引的作用, 第二个元素为value
        map中的所有元素都会根据元素的键值自动排序
    map的底层实现:
        map/multimap属于关联性容器, 底层结构使用二叉树实现
    map和multimap的区别:
        map不运行容器中有重复的key
        multimap允许容器中有重复的key

## 创建map对象
.   [1-1 使用无参构造创建map容器](./_01_mapConstructor/_01_mapConstructor.cpp)
.   [1-2 使用拷贝构造创建map容器](./_01_mapConstructor/_01_mapConstructor.cpp)

     map的构造方法
        map(keyT, valueT) mp;                       // 使用无参构造创建map容器    
        map(const map& mp);                         // 使用拷贝构造创建map容器

## Map的整体赋值
.   [2-1 使用=将map1的所有元素赋值给新map对象](./_02_mapAssign/_01_mapAssign.cpp)

    map的整体赋值:
        map& operator=(const map& mp);              // 使用=将mp的元素赋值给新map对象

## Map交换所有元素
.   [3-1 使用map的swap方法交换两个map的所有元素](./_03_mapSwap/_01_mapSwap.cpp)

    swap(map<keyT, valueT> mp);                     // 使用map的swap方法交换两个map的所有元素

## Map的size操作
.   [4-1 判断map是否为空](./_04_mapSIze/_01_mapSIze.cpp)
.   [4-2 获取map中元素的数量](./_04_mapSIze/_01_mapSIze.cpp)

    empty();                                        // 判断map是否为空
    size();                                         // 获取map中元素的数量

## Map插入和删除元素
[插入元素]
    [5-1-1 使用make_pair自动创建pair对象向map插入元素](./_05_mapInsertAndDelete/_01_mapInsertAndDelete.cpp)
    [5-1-2 创建pair匿名对象向map插入元素](./_05_mapInsertAndDelete/_01_mapInsertAndDelete.cpp)
    [5-1-3 使用map的静态方法value_type插入元素(该方法指定自动创建pair)](./_05_mapInsertAndDelete/_01_mapInsertAndDelete.cpp)
[删除元素]
    [5-2-1 根据key值删除元素](./_05_mapInsertAndDelete/_01_mapInsertAndDelete.cpp)
    [5-2-2 根据key值删除元素](./_05_mapInsertAndDelete/_01_mapInsertAndDelete.cpp)
    [5-2-3 根据迭代器区间删除元素](./_05_mapInsertAndDelete/_01_mapInsertAndDelete.cpp)
    [5-2-4 删除所有元素](./_05_mapInsertAndDelete/_01_mapInsertAndDelete.cpp)

    插入元素
        insert(make_pair(key, value))                       // 使用make_pair自动创建pair对象向map插入元素
        insert(pair<keyT, valueT>(key, value))              // 创建pair匿名对象向map插入元素
        insert(map<keyT, valueT>::value_type(key, value))   // 使用map的静态方法value_type插入元素(该方法指定自动创建pair)
    删除元素
        erase(keyT key);                                    // 根据key值删除元素
        erase(auto pos);                                    // 删除迭代器pos位置元素, 返回下一个元素的迭代器
        erase(auto selfMap.begin(), auto selfMap.end());    // 删除[beg, end)区间的元素
        clear();                                            // 删除所有元素

    使用map[key] = value也能进行插入数据, 但这种方式如果key不存在会自动创建一个key, 并插入一个value类型的默认值, 不推荐使用
    
## Map通过key获取value
.   [6-1 使用map\[key\]获取对应的value](./_06_mapGetValue/_01_mapGetValue.cpp)

    map[key]                                                // 使用map[key]获取对应的value

## Map查找和统计
.   [7-1 查找key是否存在, 若存在, 返回该键的迭代器, 若不存在, 返回set.end()](./_07_mapFindAndCount/_01_mapFindAndCount.cpp)
.   [7-2 统计key的元素个数](./_07_mapFindAndCount/_01_mapFindAndCount.cpp)

    map<keyT,valueT>::iterator find(keyT key);              // 查找key是否存在, 若存在, 返回该键的迭代器, 若不存在, 返回set.end();
    int cout(keyT key);                                     // 统计key的元素个数

## 仿函数修改map的排序规则
.   [8-1 编写仿函数修改map的排序规则](./_08_mapchangeSortRule/_01_dirNameDemo.cpp)
.   [8-2 使用仿函数创建map, 修改其排序规则](./_08_mapchangeSortRule/_01_dirNameDemo.cpp)
    
## Map存放自定义数据类型
.   [9-1 编写自定义数据类型Camera](./_09_mapSaveCustomType/_01_mapSaveCustomType.cpp)
.   [9-2 map保存自定义数据类型创建对象](./_09_mapSaveCustomType/_01_mapSaveCustomType.cpp)

    与set不同, map无需自定义比较规则(set存放自定义数据类型需要编写自定义类型的排序仿函数重写操作符() )

## 遍历map的方法
.   [10-1 使用增强for循环遍历map](./_10_foreachMap/_01_foreachMap.cpp)
.   [10-2 使用普通for循环遍历map](./_10_foreachMap/_01_foreachMap.cpp)
.   [10-3 使用while循环遍历map](./_10_foreachMap/_01_foreachMap.cpp)
.   [10-4 使用algo的for_each算法遍历map, 自定义操作函数foreachMapFunc](./_10_foreachMap/_01_foreachMap.cpp)