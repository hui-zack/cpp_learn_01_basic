## Deque简介 
    
    说明: 双端数组, 可以对头尾进行插入和删除操作
    
    deque与vector区别:
        vector对于头部的插入效率低, 数据量越大其效率越低
        deque相对而言, 在头部位置插入删除的效率比vector高
        vector访问元素时的速度会比deque快, 这和内部实现有关

    结构图:
        push+front()                insert()                push_back()
            --------------------------------------------------
          front()                                          back()
          begin()                                               end()          
        pop_front()                                         pop_back()

    deque原理:
        deque内部有一个中控器, 维护每段缓存区中的内容, 缓存区中存放真实数据
        中控器维护的时每个缓冲区的地址, 使得使用deque时象一片连续的地址空间


## Deque构造
.   [1-1 使用默认构造创建空的deque容器](./_01_dequeConstructer/_01_dirNameDemo.cpp)
.   [1-2 使用区间构造deque<T>(deq.begin(), deq.end()), 将deq的\[begin, end)区间的元素拷贝到新deque对象](./_01_dequeConstructer/_01_dirNameDemo.cpp)
.   [1-3 使用n个ele元素创建deque对象](./_01_dequeConstructer/_01_dirNameDemo.cpp)
.   [1-4 拷贝构造deque对象](./_01_dequeConstructer/_01_dirNameDemo.cpp)

    deque<T> deq                            // 默认构造的使用方法
    deque<T>(begin, end);                   // 将[begin, end)区间的元素拷贝到本身创建对象
    deque<eleType>(n, ele);                 // 使用n个ele元素创建对象
    deque<T>(const deque &deq);             // 拷贝构造    

## Deque的整体赋值
.   [2-1 使用=号赋值deque对象](./_02_dequeAssign/_01_dequeAssign.cpp)
.   [2-2 将deq对象\[begin, end)区间中的数据拷贝赋值给新deque对象](./_02_dequeAssign/_01_dequeAssign.cpp)
.   [2-3 将n个ele拷贝构造到新deque对象](./_02_dequeAssign/_01_dequeAssign.cpp)

    deque& operator=(const deque &deq);     // 使用=号赋值deque对象
    assign(beg, end);                       // 将deq对象[begin, end)区间中的数据拷贝赋值给新deque对象
    assign(n, ele);                         // 将n个ele拷贝构造到新对象

## Deque的长度
.   [3-1 判断容器是否为空](./_03_SizeOfDeque/_01_sizeOfDeque.cpp)
.   [3-2 获取容器中元素的个数](./_03_SizeOfDeque/_01_sizeOfDeque.cpp)
.   [3-3 重新指定容器的长度, 容器变长, 则以默认值填充新位置, 变短, 超出的元素被删除](./_03_SizeOfDeque/_01_sizeOfDeque.cpp)
.   [3-4 重新指定容器的长度, 容器变长, 则以ele填充新位置, 变短, 超出的元素被删除](./_03_SizeOfDeque/_01_sizeOfDeque.cpp)

    deque没有容量的概念
    ----
    长度和容量的获取判断方法:
        deque.empty();                              // 判断容器是否为空
    修改size的方法:
        deque.size();                               // 获取容器中元素的个数
        deque.resize(int newLength);                // 重新指定容器的长度, 容器变长, 则以默认值填充新位置, 变短, 超出的元素被删除
        deque.resize(int newLength, T newEle);      // 重新指定容器的长度, 容器变长, 则以newEle填充新位置, 变短, 超出的元素被删除

## Deque元素的插入和删除
[两端插入和删除元素]
    [4-1-1 在容器尾部插入元素](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)
    [4-1-2 删除容器尾部的元素](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)
    [4-1-2 删除容器尾部的元素](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)
    [4-1-4 删除容器头部的元素](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)

[指定位置插入和删除元素]
    [4-2-1 在迭代器pos位置(相当于下标)插入一个ele元素的拷贝, 返回新元素的配置](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)
    [4-2-2 删除迭代器pos位置(相当于下标)处的元素](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)
    [4-2-3 在迭代器pos位置(相当于下标)处拷贝插入deq对象\[beg, end)区间的元素到本身对象, 无返回值](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)
    [4-2-4 删除自身\[beg, end)区间的元素](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)
    [4-2-5 在迭代器pos位置(相当于下标)处插入n个ele元素的拷贝, 无返回值](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)
    [4-2-6 删除所有元素](./_04_dequeInsertDeleteEle/_04_dequeInsertDeleteEle.cpp)


    两端插入和删除元素:
        deque.push_back(T ele)                  // 在容器尾部插入元素
        deque.pop_back(T ele)                   // 删除容器尾部的元素

        deque.push_front(T ele)                 // 在容器头部插入元素
        deque.pop_front(T ele)                  // 删除容器头部的元素

    指定位置插入和删除元素:
        int insert(auto pos, T ele)                          // 在迭代器pos位置(相当于下标)插入一个ele元素的拷贝, 返回新元素的配置
        erase(auto pos)                                      // 删除迭代器pos位置(相当于下标)处的元素

        insert(auto pos, auto dep.begin(), auto dep.end())   // 在迭代器pos位置(相当于下标)处拷贝插入deq对象[beg, end)区间的元素到本身对象, 无返回值
        erase(auto selfDep.begin(), auto selfDeq.end())      // 删除自身[beg, end)区间的元素

        insert(auto pos, n , T ele)                          // 在迭代器pos位置(相当于下标)处插入n个ele元素的拷贝, 无返回值

        clear();                                             // 删除所有元素

## Deque获取元素
.   [5-1 at方法根据下标获取元素](./_05_dequeGetEle/_01_dequeGetEle.cpp)
.   [5-2 数组方式根据下标获取元素](./_05_dequeGetEle/_01_dequeGetEle.cpp)
.   [5-3 获取头部元素](./_05_dequeGetEle/_01_dequeGetEle.cpp)
.   [5-4 获取尾部元素](./_05_dequeGetEle/_01_dequeGetEle.cpp)

    at(int index);              // at方法根据下标获取元素
    operator[];                 // 数组方式根据下标获取元素
    front();                    // 获取头部元素
    back();                     // 获取尾部元素

## Deque排序
.   [6-1 包含算法库头文件](./_06_algoSortDeque/_01_dequeSort.cpp)
.   [6-2 使用algo库的sort算法对deque元素进行排序](./_06_algoSortDeque/_01_dequeSort.cpp)

    sort(auto selfBegin, auto selfEnd);     // 对deque容器的[beg, end)区间的元素进行排序

## 遍历deque的方式
.   [7-1 增强for循环遍历deque](./_07_foreachDeque/_01_foreachDeque.cpp)
.   [7-2-1 普通for循环下标遍历-不安全](./_07_foreachDeque/_01_foreachDeque.cpp)
.   [7-2-2 普通for循环迭代器遍历](./_07_foreachDeque/_01_foreachDeque.cpp)
.   [7-2-3 while+迭代器遍历](./_07_foreachDeque/_01_foreachDeque.cpp)
.   [7-2-4 foreach算法遍历, 外部实现元素操作函数](./_07_foreachDeque/_01_foreachDeque.cpp)

