cmake_minimum_required(VERSION 3.17)
project(C__)

set(CMAKE_CXX_STANDARD 14)



#file (GLOB_RECURSE files "*.h" )
#file (GLOB_RECURSE files "*.cpp" )
#
#foreach (file ${files})
#    string(REGEX REPLACE ".+/(.+)/(.+)/(.+)/(.+)\\..*" "\\1-\\2-\\3-\\4" exe ${file})
#    add_executable (${exe} ${file} )
#    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe} )
#endforeach ()


file (GLOB_RECURSE files *.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)/(.+)/(.+)/(.+)\\..*" "\\1-\\2-\\3-\\4" exe ${file})
    string(REPLACE ".cpp" ".h" file1 ${file})

    if (EXISTS ${file1})
        add_executable (${exe} ${file} ${file1})
    else()
        add_executable (${exe} ${file})
    endif()
    #    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe} )
endforeach ()


file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)/(.+)/(.+)/(.+)\\..*" "\\1-\\2-\\3-\\4" exe ${file})
    string(REPLACE ".cpp" ".h" file1 ${file})

    if (EXISTS ${file1})
        add_executable (${exe} ${file} ${file1})
    else()
        add_executable (${exe} ${file})
    endif()
#    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe} )
endforeach ()



# 修改控制台输出为GBK格式(window控制台默认GBK, 用utf8会看不懂....)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")


#add_executable(creat_demo _1_part1_BasicPogramming/_09_func/_1_func__create/creat_demo.cpp)
#
#add_executable(_1_if_elseDemo _1_part1_BasicPogramming/_07_processControl/_1_if_else/_1_if_elseDemo.cpp)
#add_executable(struct__pointer _1_part1_BasicPogramming/_11_struct/_3_struct__pointer/struct__pointer.cpp)
#add_executable(main _1_part1_BasicPogramming/_09_func/_4_func__Statement_HeadFile/main.cpp _1_part1_BasicPogramming/_09_func/_4_func__Statement_HeadFile/Add.cpp)
#add_executable(test _2_part2_CoreProgramming/test/test.cpp)
#add_executable(main _2_part2_CoreProgramming/test/main.cpp )
#
#
#add_executable(test _2_part2_CoreProgramming/test/test.cpp D:\user\learn\c++\code\_2_part2_CoreProgramming\test\test.h)