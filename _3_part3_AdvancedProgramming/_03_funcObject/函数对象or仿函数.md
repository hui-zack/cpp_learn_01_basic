## 函数对象的编写方法
.   [1-1 重载()元素符号, 使得Add类变成函数对象(函数式对象)](./_01_createFuncObject/_01_createFuncObject.cpp)
.   [1-2 像普通函数一样使用函数对象](./_01_createFuncObject/_01_createFuncObject.cpp)


    什么是函数对象?
        重载了()操作符的类, 其对象称为函数对象           // ()操作符也称函数调用操作符
        由于函数对象的调用方式类似于函数的待用, 也会把函数对象叫成仿函数
    函数对象的本质:    
        函数对象(仿函数), 是一个类的实例化对象, 并不是一个函数
    函数对象有什么用?
        函数对象在使用时, 可以像普通函数那样嗲用, 可以有参数, 可以有返回值
        函数对象有自己的属性
        函数对象可以作为参数传递

## 函数对象作为参数传递
.   [2-1 编写全局函数用于接收函数对象参数](./_02_funcObjectAsParam/_01_funcObjectAsParam.cpp)
.   [2-2 将函数对象传入接收函数](./_02_funcObjectAsParam/_01_funcObjectAsParam.cpp)

## 函数对象返回bool类型/一元谓词和二元谓词
[一元谓词的编写和使用]
    [3-1-1 编写一元谓词, 函数对象(仿函数)只有一个参数, 用于algo find_if算法](./_03_funcObjectReturnBool/_01_onePredicateAndTwoPredicate.cpp)
    [3-1-2 使用algo find_if算法查询第一个>5的数字迭代器位置](./_03_funcObjectReturnBool/_01_onePredicateAndTwoPredicate.cpp)
[二元谓词的编写和使用]
    [3-2-1 编写二元谓词, 函数对象(仿函数)有两个参数, 用于algo sort算法](./_03_funcObjectReturnBool/_01_onePredicateAndTwoPredicate.cpp)
    [3-2-2 使用algo sort算法对vector进行从大到小排序](./_03_funcObjectReturnBool/_01_onePredicateAndTwoPredicate.cpp)

    函数对象返回bool类型称为谓词
        如果仿函数有一个参数, 叫做一元谓词
        如果仿函数有两个参数, 叫做二元谓词

## 算术仿函数
.   [4-1 使用加法仿函数, 二元谓词](./_04_arithmeticIFunctor/_01_arithmeticFunctor.cpp)
.   [4-2 使用减法仿函数, 二元谓词](./_04_arithmeticIFunctor/_01_arithmeticFunctor.cpp)
.   [4-3 使用乘法仿函数, 二元谓词](./_04_arithmeticIFunctor/_01_arithmeticFunctor.cpp)
.   [4-4 使用除法仿函数, 二元谓词](./_04_arithmeticIFunctor/_01_arithmeticFunctor.cpp)
.   [4-5 使用取模仿函数, 二元谓词](./_04_arithmeticIFunctor/_01_arithmeticFunctor.cpp)
.   [4-6 使用取反仿函数, 一元谓词](./_04_arithmeticIFunctor/_01_arithmeticFunctor.cpp)
    
    编译器实现了一套算数仿函数(内建函数对象), 用于四则运算, 低版本的编译器需要导入库文件 #include <functional>
    
    除了negate是一元运算, 其他都是二元运算
        template<class T> T plus<T>(){}                     // 加法仿函数
        template<class T> T minus<T>(){}                    // 减法仿函数
        template<class T> T multiplies<T>(){}               // 乘法仿函数
        template<class T> T divides<T>(){}                  // 除法仿函数
        template<class T> T modulus<T>(){}                  // 取模仿函数
        template<class T> T negate<T>(){}                   // 取反仿函数

## 比较仿函数
[比较仿函数的基本使用]
    [5-1-1 使用=的关系仿函数](./_05_comparsionFunctor/_01_comparsionFunctor.cpp)
    [5-1-2 使用!=的关系仿函数](./_05_comparsionFunctor/_01_comparsionFunctor.cpp)
    [5-1-3 使用>的关系仿函数](./_05_comparsionFunctor/_01_comparsionFunctor.cpp)
    [5-1-4 使用>=的关系仿函数](./_05_comparsionFunctor/_01_comparsionFunctor.cpp)
    [5-1-5 使用<的关系仿函数](./_05_comparsionFunctor/_01_comparsionFunctor.cpp)
    [5-1-6 使用<=的关系仿函数](./_05_comparsionFunctor/_01_comparsionFunctor.cpp)
[在algo的算法中使用比较仿函数来设置排序规则]
    [5-2-1 sort算法使用内建仿函数greater对vector排序](./_05_comparsionFunctor/_01_comparsionFunctor.cpp)
     
    编译器实现了一套关系仿函数(内建函数对象), 用于比较运算, 低版本的编译器需要导入库文件 #include <functional>

    template<class T> bool equal_to<T>(){}                  // =的关系仿函数
    template<class T> bool not_equal_to<T>(){}              // !=的关系仿函数
    template<class T> bool greater<T>(){}                   // >的关系仿函数
    template<class T> bool greater_equal<T>(){}             // >=的关系仿函数
    template<class T> bool less<T>(){}                      // <的关系仿函数
    template<class T> bool less_equal<T>(){}                // <=的关系仿函数


## 逻辑仿函数
.   [6-1 使用&&的逻辑仿函数](./_06_logicalFunctor/_01_logicalFunctor.cpp)
.   [6-2 使用||的逻辑仿函数](./_06_logicalFunctor/_01_logicalFunctor.cpp)
.   [6-3 使用!的逻辑仿函数](./_06_logicalFunctor/_01_logicalFunctor.cpp)

    编译器实现了一套逻辑仿函数(内建函数对象), 用于逻辑运算, 低版本的编译器需要导入库文件 #include <functional>
    
    template<class T> bool logical_and<T>(){}               // &&的逻辑仿函数
    template<class T> bool logical_or<T>(){}                // ||的逻辑仿函数
    template<class T> bool logical_not<T>(){}               // !的逻辑仿函数


    