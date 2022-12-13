## 算法库概述
    STL的算法部分主要有三个库:
        <algorithm>         该文件体积最大, 包含功能有: 比较, 交换, 查找, 遍历, 数字, 修改等 
        <functional>        该文件定义了一系列的内建函数对象(仿函数), 用于简化使用algorithm时的代码编写
        <numeric>           该文件体积最小, 只包含几个在序列上面进行简单数学运算的模板函数

## 遍历算法_for_each
.   [1-1 for_each遍历容器-使用普通函数定义遍历规则](./_01_algo__foreach/_01_algo_for_each.cpp)
.   [1-1 for_each遍历容器-使用函数对象(伪函数)定义遍历规则](./_01_algo__foreach/_01_algo_for_each.cpp)

    所在库文件<algorithm>

    所有具有迭代器的容器都可以使用for_each来遍历, 遍历方式完全一致

    void for_each(iterator beg, iterator end, funcObject)                
        // -- 遍历容器算法 --
        // beg: 开始迭代器
        // end: 结束迭代器
        // funcObject: 函数对象(仿函数, 一元谓词无返回值)

## 拷贝算法_transform
[拷贝vector元素到新vector]
.   [2-1 使用transform 拷贝vector元素到新vector](./_02_algo__transform/_02_algo__transform.cpp)
[拷贝list元素到新list]
.   [2-2 使用transform拷贝list元素到新list](./_02_algo__transform/_02_algo__transform.cpp)
    
    使用transform时必须resize输出容器的size!!!!
        目标容器的size必须>=源容器的size, 否则会拷贝失败且不会报错!!!

    所在库文件<algorithm>
    
    void transform<iterator srcCon.beg, iterator srcCon.end, iterator dstCon.beg, funcObject)               
        // - 元素拷贝算法 -
        // srcCon.beg - 源容器beg
        // srcCon.end - 源容器end  
        // dstCon.beg - 目标容器beg
        // funcObject - 函数对象(仿函数, 一元谓词返回元素修改值)

## 查找元素算法find
[find查找基本数据类型]
    [3-1 find查找intList元素](./_03_algo__find/_01_algo__find.cpp)

[find查找自定义数据类型]
    [3-2-1 自定义数据类型必须重载==操作符](./_03_algo__find/_01_algo__find.cpp)
    [3-2-2 find查找list中的自定义类型Camera](./_03_algo__find/_01_algo__find.cpp)

    iterator find(iterator beg, iterator end, value)
        // -- 按值查找算法, 找到返回迭代器位置, 找不到返回end位置 --
        // beg 开启迭代器
        // end 结束迭代器
        // value 查找的元素
