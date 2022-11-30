## deque简介 
    
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
