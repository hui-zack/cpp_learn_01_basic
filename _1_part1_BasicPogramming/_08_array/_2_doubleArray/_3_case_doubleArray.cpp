// Create by hui on 2021/12/8 15:24
// Code describe: 二维数组案例, 计算张三, 李四, 王五个人的分数总和
// Keyword      : 

#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[3][3] = {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}
    };

    string names[3] = {"张三", "李四", "王五"};

    for(int i =0; i < 3; i++){          // 行
        int sum = 0;
        for(int j=0; j < 3; j++){       // 列
            sum += arr[i][j];
            // cout << arr[i][j] << " ";
        }
        cout << names[i] << "个人的总分为: " << sum << endl;
    }

    return 0;
}