[toc]
    [Stack简介](#Stack简介)
    [Stack的使用方法](#Stack的使用方法)

## Stack简介
    
    栈: 
        后进先出
        只能访问栈顶元素, 因此栈无法遍历

## Stack的使用方法
[构造函数]
    [1-1-1 使用无参构造创建栈对象](./_01_createStack/_01_createStack.cpp)
    [1-1-2 使用拷贝构造创建栈对象](./_01_createStack/_01_createStack.cpp)


[元素的插入删除获取]
    [1-2-1 栈添加元素-入栈](./_01_createStack/_01_createStack.cpp)
    [1-2-2 栈删除元素-出栈](./_01_createStack/_01_createStack.cpp)
    [1-2-3 返回栈顶元素-获取元素](./_01_createStack/_01_createStack.cpp)

[大小操作]
    [1-3-1 判断栈是否为空](./_01_createStack/_01_createStack.cpp)
    [1-3-2 获取栈元素个数](./_01_createStack/_01_createStack.cpp)

[整体赋值]
    [1-4-1 使用=号拷贝栈的所有元素](./_01_createStack/_01_createStack.cpp)

    构造函数:
        stack<T> stk;                       // 使用无参构造创建栈对象
        stack(cosnt stack &stk)             // 使用拷贝构造创建栈对象
    整体赋值:
        stack& operator=(const stack& stk)  // 使用=号拷贝栈的所有元素
    数据存取:
        push()              栈添加元素
        pop()               栈删除元素
        top()               返回栈顶元素
    大小操作:
        empty()             判断栈是否为空
        size()              获取栈元素个数
 
