// Create by hui on 2022/11/20 23:14
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/* 1-3-1 交换内容函数模板 */
template <typename T>
void swapData(T& dataA, T& dataB){
    T temp = dataA;
    dataA = dataB;
    dataB = temp;
}


/* 1-3-2 冒泡排序函数模板 */
template<class T>
void sortArr(T arr[], int len){


    for (int i = 0; i < len; i++){
        for (int j = 0; j < len - i - 1; j++){
            int maxIndex = 0;
            if (arr[j] > arr[j + 1]){
                swapData(arr[j], arr[j + 1]);
            }
        }
    }


}

int main() {
    char charArr[] = "bcsad";


    int len = sizeof(charArr)/sizeof(char) - 1; // 字符数组结尾的/o也会被认为是一个元素

    sortArr(charArr,len);                       // 使用模板函数对数组进行排序
    cout << charArr << endl;

    return 0;
}