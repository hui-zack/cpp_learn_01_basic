## 算法库概述
    STL的算法部分主要有三个库:
        <algorithm>         该文件体积最大, 包含功能有: 比较, 交换, 查找, 遍历, 数字, 修改等 
        <functional>        该文件定义了一系列的内建函数对象(仿函数), 用于简化使用algorithm时的代码编写
        <numeric>           该文件体积最小, 只包含几个在序列上面进行简单数学运算的模板函数

## 遍历算法_for_each
.   [1-1 for_each遍历容器-使用普通函数定义遍历规则](./_01_algo__for_each/_01_algo_for_each.cpp)
.   [1-1 for_each遍历容器-使用函数对象(伪函数)定义遍历规则](./_01_algo__for_each/_01_algo_for_each.cpp)

    所在库文件<algorithm>

    所有具有迭代器的容器都可以使用for_each来遍历, 遍历方式完全一致

    void for_each(iterator beg, iterator end, funcObject)                
        // -- 遍历容器算法 --
        // beg: 开始迭代器
        // end: 结束迭代器
        // funcObject: 函数对象(仿函数, 无返回值)

## 拷贝算法_transform
[拷贝vector元素到新vector]
.   [2-1 使用transform拷贝vector元素到新vector](./_02_algo__transform/_02_algo__transform.cpp)
[拷贝list元素到新list]
.   [2-2 使用transform拷贝list元素到新list](./_02_algo__transform/_02_algo__transform.cpp)
    
    使用transform时必须resize输出容器的size!!!!
        目标容器的size必须>=源容器的size, 否则会拷贝失败且不会报错!!!

    所在库文件<algorithm>
    
    void transform<iterator srcCon.beg, iterator srcCon.end, iterator dstCon.beg, funcObject)
        // -- 元素拷贝算法 --
        // srcCon.beg - 源容器beg
        // srcCon.end - 源容器end
        // dstCon.beg - 目标容器beg
        // funcObject - 函数对象(仿函数, 返回元素类型)

## 查找元素算法_find
[find查找-基本数据类型]
    [3-1 find查找intList元素](./_03_algo__find/_01_algo__find.cpp)

[find查找-自定义数据类型]
    [3-2-1 自定义数据类型重载==操作符供find算法使用](./_03_algo__find/_01_algo__find.cpp)
    [3-2-2 find查找list中的自定义类型Camera](./_03_algo__find/_01_algo__find.cpp)
    
    所在库文件<algorithm>
    
    iterator find(iterator beg, iterator end, T ele)
        // -- 按值查找算法, 找到返回迭代器位置, 找不到返回end位置 --
        // beg 开启迭代器
        // end 结束迭代器
        // value 查找的元素

## 条件查找元素_find_if
[find_if查找-基本数据类型]
    [4-1 使用find_if查找vector<int>中的元素](./_04_algo__find_if/_01_algo_find_if.cpp)
[find_if查找-自定义数据乐心]
    [4-2 使用find_if查找vector<Person>中的元素](./_04_algo__find_if/_01_algo_find_if.cpp)

    find_if 根据条件查找元素, 找到一个就停止
    所在库文件<algorithm>

    iterator find_if(iterator beg, iterator end, _pred);
        // -- 条件查找元素算法, 找到返回元素迭代器位置, 找不到返回迭代器end位置, 找到一个就停止 --
        // iterator beg     开始查找位置
        // iterator end     结束查找位置
        // _pred            返回bool类型的函数对象(仿函数/谓词)

## 相邻元素查找_adjacent_find
.   [5-1 使用adjacent_find查找list中相邻元素](./_05_algo__adjacent_find/_01_algo_adjacent_find.cpp)   

    所在库文件<algorithm>

    iterator adjacent_find(iterator beg, iterator end);
        // -- 查找相邻重复元素, 找到返回相邻元素的第一个元素迭代器位置, 找不到返回迭代器end位置 --
        // beg 开始迭代器
        // end 结束迭代器
    

## 判断元素是否存在_binary_search
.   [6-1 使用binary_search(二分查找)查找有序vector元素](./_06_algo__binary_search/_01_algo__binary_search.cpp)

    binary_search:
        二分查找法
        只能在有序序列中使用(有序指的是元素从大到小, 或从小到大)

    所在库文件<algorithm>

    bool binary_search(iterator beg, iterator end, T ele);
        // -- 判断元素在容器是否存在, 存在返回true, 否则返回false
        // binary_search在无序序列中不能使用
        // beg 开始迭代器
        // end 结束迭代器
        // ele 需要判断的元素

## 统计元素个数_count
[count统计-基本数据类型]
    [7-1 使用count统计vector<int>中的元素](./_07_algo__count/_01_algo_count.cpp)
[count统计-自定义数据类型]
    [7-2-1 自定义数据类型重载==操作符供count算法统计使用](./_07_algo__count/_01_algo_count.cpp)
    [7-2-2 使用count统计vector<Camera>中的元素](./_07_algo__count/_01_algo_count.cpp)

    count算法统计自定义数据类型时, 自定义数据类型必须重载==操作符  

    所在库文件<algorithm>
    
    int count(iterator beg, iterator end, T ele);
        // -- 统计ele元素出现的次数 --
        // beg 开始迭代器
        // end 结束迭代器
        // ele 需要统计的元素

## 条件统计元素个数_count_if
[count_if统计-基本数据类型]
    [8-1 使用count_if统计vector<int>中的元素](./_08_algo__count_if/_01_algo__count_if.cpp)
[count_if统计-自定义数据类型]
    [8-2 使用count_if统计vector<Camera>中的元素](./_08_algo__count_if/_01_algo__count_if.cpp)
    
    所在库文件<algorithm>

    int count_if(iterator beg, iterator end, _pred);
        // -- 按条件统计元素出现个数 -- 
        // beg 开始迭代器
        // end 结束迭代器
        // _pred 谓词(函数对象, 伪函数)

## 排序算法_sort
[sort排序-基本数据类型]
    [9-1 使用sort算法对vector<int>进行排序](./_09_algo__sort/_01_algo__sort.cpp)
[sort排序-自定义数据类型]
    [9-2 使用sort算法对vector<Camera>进行排序](./_09_algo__sort/_01_algo__sort.cpp)

    所在库文件<algorithm>       
 
    void sort(iterator beg, iterator end, bool _pred = less);
        // -- 对元素进行排序, 默认为less(内建函数-小于号的关系仿函数) --
        // beg 开始迭代器
        // end 结束迭代器
        // _pred 谓词(函数对象/伪函数)

## 顺序打乱算法_random_shuffle
.   [10-1 根据系统时间生成随机数种子](./_10_algo__random_shuffle/_01_algo__random_shuffle.cpp)
.   [10-2 使用random_shuffle打乱vector<int>顺序](./_10_algo__random_shuffle/_01_algo__random_shuffle.cpp)
  
    random_shuffle
        乱排算法, 洗牌算法
        所在库文件<algorithm>   
        使用random_shuffle时, 需要指定随机数总之, 否则不管运行多少次都只有一种顺序
            srand((unsigned int)time(nullptr));     // 根据系统时间生成随机数种子
    
    void random_shuffle(iterator beg, iterator end);
        // -- 随机调整元素顺序, 洗牌算法 --
        // beg 开始迭代器
        // end 结束迭代器
    
    
## 赋值两个容器的元素到新容器_merge
.   [11-1 使用merge复制两个容器的元素到新容器](./_11_algo__merge/_01_algo__merge.cpp)

    merge:
        赋值两个容器的元素到新容器
        所在库文件<algorithm>
        两个源容器必须是有序的

    void merge(it.. src1.beg, it.. src1.end, it.. src2.beg, it.. src2.end, it.. dst.pos);
        // -- 拷贝两个容器的元素到新容器中 -- 
        // 两个源容器必须是有序的
        // src1.beg 源容器1的开始迭代器
        // src1.end 源容器1的结束迭代器
        // src2.beg 源容器2的开始迭代器
        // src1.end 源容器2的结束迭代器
        // dst.pos  目标容器迭代器开始存储位置

## 反转元素算法_reverse
.   [12-1 使用reverse反转vector<int>中的元素](./_12_algo__reverse/_01_algo__reverse.cpp)

    reverse:
        反转容器中的元素
        所在库文件<algorithm>

    void reverse(iterator beg, iterator end);
        // -- 反转容器中的元素 --
        // beg 开始迭代器
        // end 结束迭代器

## 复制元素到新容器_copy
.   [13-1 使用copy复制srcVec元素到新容器dstVec](./_13_algo__copy/_01_algo__copy.cpp)

    copy:
        复制元素到新容器
        所在库文件<algorithm>
    void copy(iterator src.beg, iterator src.end, iterator dst.pos)
        // -- 复制元素到新容器 --
        // src.beg 源容器开始迭代器
        // src.end 源容器结束迭代器
        // dst.pos 目标容器迭代器开始存储位置

## 替换元素_replace
[replace替换-基本数据类型]
    [14-1 使用replace替换vector<int>中的元素](./_14_algo__replace/_01_algo__replace.cpp)
[replace替换-自定义数据类型]
    [14-2-1 重载自定义元素对象的==操作符供replace算法使用](./_14_algo__replace/_01_algo__replace.cpp)
    [14-2-2 使用replace替换vector<Camera>中的元素](./_14_algo__replace/_01_algo__replace.cpp)

    replace:
        替换区间内的指定元素
        所在库文件<algorithm>

    void replace(iterator beg, itetator end, T oldEle, T newEle);
        // -- 替换区间内的指定元素 --
        // beg 开始迭代器
        // end 结束迭代器
        // oldEle 被替换的元素
        // newEle 新元素

## 按条件替换元素_replace_if
.   [15-1 使用replace_if替换vector<int>中的元素](./_15_algo__replace_if/_01_algo__replace_if.cpp)

    replace_if:
        按条件替换区间内的指定元素
        所在库文件<algorithm>
    
    void replace_if(iterator beg, iterator end, _pred, T newEle);
        // -- 按条件替换区间内的指定元素 --
        // beg 开始迭代器
        // end 结束迭代器
        // _pred 一元谓词(函数对象/仿函数), 元素为T
        // newEle 新元素

## 互换容器_swap
.   [16-1 使用swap互换vector<int>类型的两个容器](./_16_algo__swap/_01_algo__swap.cpp)

    swap:
        互换两个容器
        所在库文件<algorithm>
        要交换的容器必须是同种类型

    void swap(container con1, container con2);
        // -- 互换两个容器 --
        // 要交换的容器必须是同种类型
        // con1 容器1
        // con2 容器2

## 计算容器中所有原奶的累加总和_accumulate
.   [](./_17_numeric__accumulate/_01_numeric__accumulate.cpp)

    accumulate:
        常用算数生成算法
        计算容器中所有元素的累加总和(把所有元素都加起来, 返回结果)
        所在库文件<numeric> 
        一般用于累加计算, 一般对自定义类型做这个操作

    long long int accumulate(iterator beg, iterator end, T ele);
        // -- 计算容器中所有原奶的累加总和 --
        // beg 开始迭代器
        // end 结束迭代器

## 填充/替换区间内所有元素为指定元素_fill
.   [18-1 使用fill将vector容器中的所有元素替换为10086](./_18_numeric__fill/_01_numric__filll.cpp)

    fill:
        常用算数生成算法
        填充/替换区间内所有元素为指定元素
        所在库文件 无需导入库

    void fill(iterator beg, iterator end, T ele);
        // -- 填充/替换区间内所有元素为指定元素 --
        // beg 开始迭代器
        // end 结束迭代器
        // ele 要填充的值

## 两个容器的交集保存到新容器_set_intersection
.   [19-1 使用set_intersection取两个容器的元素交集](./_19_algo__set_intersection/_01_dirNameDemo.cpp)

    set_intersection:
        常用集合算法
        两个容器的交集保存到新容器, 返回目标容器的截至迭代器位置(截至位置后的为无效数据)
        所在库文件<algorithm>
        两个集合必须是有序数序列

    iterator set_intersection(iterator srcCon1.beg, iterator srcCon1.end,
                     iterator srcCon2.beg, iterator srcCon2.end,
                     iterator dstCon.beg)
        // -- 两个容器的交集保存到新容器, 返回目标容器的截至迭代器位置(截至位置后的为无效数据) --
        // srcCon1.beg 源容器1的开始迭代器
        // srcCon1.end 源容器1的结束迭代器
        // srcCon2.beg 源容器2的开始迭代器
        // srcCon2.end 源容器2的结束迭代器
        // dstCon.beg 目标容器的开始迭代器

## 两个容器的并集保存到新容器_set_union
[20-1 使用set_union取两个容器的元素并集](./_20_algo__set_union/_01_algo__set_union.cpp)

    set_union:
        常用集合算法
        两个容器的交集保存到新容器, 返回目标容器的截至迭代器位置(截至位置后的为无效数据)
        所在库文件<algorithm>
        两个集合必须是有序数序列

    iterator set_union(iterator srcCon1.beg, iterator srcCon1.end,
                     iterator srcCon2.beg, iterator srcCon2.end,
                     iterator dstCon.beg)
        // -- 两个容器的并集保存到新容器, 返回目标容器的截至迭代器位置(截至位置后的为无效数据) --
        // srcCon1.beg 源容器1的开始迭代器
        // srcCon1.end 源容器1的结束迭代器
        // srcCon2.beg 源容器2的开始迭代器
        // srcCon2.end 源容器2的结束迭代器
        // dstCon.beg 目标容器的开始迭代器

## 两个容器的差集保存到新容器_set_difference
[使用set_difference取srcVec1-srcVec2的元素差集](./_21_algo__set_difference/_01_algo__set_difference.cpp)

    set_difference:
        常用集合算法
        两个容器的差集保存到新容器, 返回目标容器的截至迭代器位置(截至位置后的为无效数据)
        所在库文件<algorithm>
        两个集合必须是有序数序列

    iterator set_difference(iterator srcCon1.beg, iterator srcCon1.end,
                     iterator srcCon2.beg, iterator srcCon2.end,
                     iterator dstCon.beg)
        // -- 两个容器的差集保存到新容器, 返回目标容器的截至迭代器位置(截至位置后的为无效数据) --
        // srcCon1.beg 源容器1的开始迭代器
        // srcCon1.end 源容器1的结束迭代器
        // srcCon2.beg 源容器2的开始迭代器
        // srcCon2.end 源容器2的结束迭代器
        // dstCon.beg 目标容器的开始迭代器