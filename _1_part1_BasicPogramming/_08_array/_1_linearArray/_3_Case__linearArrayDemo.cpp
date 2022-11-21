// Create by hui on 2021/11/4 15:13
// Code describe: 案例, 使用数组存储小猪体重, 算最重的猪体重
// Keyword      :

#include <iostream>

using namespace std;

int main() {
    /*
     * 案例1: 打印最大值
     * */

    int arr1[] = {100, 120, 150, 250, 130};
    int max_pig = 0;
    for (int i = 0; i < 5; ++i) {
        if (max_pig < arr1[i]){
            max_pig = arr1[i];
        }
    }

    cout << "最重的猪为: " << max_pig << "千克" << endl;

    /*
     * 案例2 倒着遍历数组并打印
     * */

    int arr2[] = {10, 20, 30, 40, 50};
    for (int i = 4; i >= 0; i--) {
        cout << "方式1: " << arr2[i] << endl;

    }
    for (int i = 0; i< 5; i++){
        cout << "方式2: " << arr2[4-i] << endl;
    }
    return 0;
}