// Create by hui on 2021/12/15 16:09
// Code describe: 指针作为参数传递进函数
// Keyword      : pointer

#include <iostream>

using namespace std;
class Camera{
public:
    ~Camera(){
        cout << "[Camera] destructor used" << endl;
    }
};
/* 6-1-1 指针类型作为形参 */
void pointerAsFuncFormatParam(int* num){
    *num = 0;
}

/* 6-2-1 指针类型作为返回值 */
int* pointerAsFuncReturnValue(){
    int *pInt = new int(10);
    return pInt;
}

int main() {

    int num = 100;
    int* numPointer = &num;
    /* 6-1-2 使用指针形参式函数 */
    pointerAsFuncFormatParam(numPointer);
    cout << num << endl;
    
    /* 6-2-2 使用指针返回式函数 */
    int * pInt = pointerAsFuncReturnValue();
    delete pInt;

    return 0;
}