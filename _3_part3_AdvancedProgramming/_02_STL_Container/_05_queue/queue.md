[toc]
    [Queue的使用方法](#Queue的使用方法)

## Queue的使用方法
[构造函数]
    [1-1-1 使用无参构造创建对象](./_01_useQueue/_1_queueDemo.cpp)
    [1-1-2 使用拷贝构造创建对象](./_01_useQueue/_1_queueDemo.cpp)
[整体赋值操作]
    [1-2-1 使用=将que数据整体赋值给新对象](./_1_useQueue/_1_queueDemo.cpp)
[元素添加删除和获取]
    [1-3-1 队尾添加元素](./_01_useQueue/_1_queueDemo.cpp)
    [1-3-2 队头移除元素](./_01_useQueue/_1_queueDemo.cpp)
    [1-3-3 获取队头元素](./_01_useQueue/_1_queueDemo.cpp)
    [1-3-4 获取队尾元素](./_01_useQueue/_1_queueDemo.cpp)
[大小操作]
    [1-4-1 判断队列是否为空](./_01_useQueue/_1_queueDemo.cpp)
    [1-4-2 获取队列长度](./_01_useQueue/_1_queueDemo.cpp)

    构造函数:
        queue<T> que;                       // 使用无参构造创建对象
        queue<const queue &que);            // 使用拷贝构造创建对象

    整体赋值操作:
        queue& operator=(const queue &que)  // 使用=将que数据整体赋值给新对象
    元素添加删除和获取:
        push(T ele);                        // 队尾添加元素
        pop();                              // 队头移除元素
        front();                            // 获取队头元素
        back();                             // 获取队尾最后一个元素

    大小操作:
        empty();                            // 判断队列是否为空
        size();                             // 获取队列长度

    队列: 
        先进先出
        queue是一种先进先出的数据结构, 它有两个出口

    队列的特点:
        队列容器允许一端新增数据, 另一端移除数据
        队列中只有队头和队尾才可以被外界使用, 因此队列不允许有遍历行为
    
    入队和出队:
        入队: push
        出队: pop