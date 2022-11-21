// Create by hui on 2022/11/17 1:17
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/** CPU抽象类 */
class CPU {
public:
    virtual void calculate() = 0;

    virtual ~CPU() = default;
};

/** 显卡抽象类 */
class GPU {
public:
    virtual void display() = 0;

    virtual ~GPU() = default;
};


/** 内存条抽象类 */
class Memory {
public:
    virtual void storage() = 0;

    virtual ~Memory() = default;
};


/** InterCPU i7-11800H */
class Inter_CPU_I78200H : public CPU {
public:
    void calculate() override {
        cout << "    CPU型号: Inter i7-11800H, cores: 8" << endl;
    }
};

class AMD_CPU_R75800H : public CPU {
public:
    void calculate() override {
        cout << "    CPU型号: AMD R7-5800H, cores: 8" << endl;
    }
};

class NVIDIA_GPU_RTX3060 : public GPU {
public:
    void display() override {
        cout << "    显卡型号: nvidia RTX-3060" << endl;
    }

};

class NVIDIA_GPU_RTX3050TIi : public GPU {
public:
    void display() override {
        cout << "    显卡型号: nvidia RTX-3050Ti " << endl;
    }
};

class Samsung_Memory : public Memory {
public:
    void storage() override {
        cout << "    内存厂家: Samsung(三星)" << endl;
    }
};

class E_dia_Memory : public Memory {
public:
    void storage() override {
        cout << "    内存厂家: E_dia(镁光)" << endl;
    }
};

/** 电脑类 */
class Computer {
private:
    string name;
    CPU *cpu;
    GPU *gpu;
    Memory *memory;

public:
    Computer(string name, CPU *cpu, GPU *vc, Memory *memory) {
        this->name = move(name);
        this->cpu = cpu;
        this->gpu = vc;
        this->memory = memory;
    }

    void work() {
        cout << this->name << ":" << endl;
        this->cpu->calculate();
        this->gpu->display();
        this->memory->storage();
        cout << endl;
    }

    ~Computer(){
        if (this->cpu != nullptr){
            delete this->cpu;
        }
        if (this->gpu != nullptr){
            delete this->gpu;
        }
        if (this->memory != nullptr){
            delete this->memory;
        }
    }

};

int main() {
    Computer("联想拯救者-Y9000P",
             new Inter_CPU_I78200H(),
             new NVIDIA_GPU_RTX3060(),
             new Samsung_Memory()).work();

    Computer("联想拯救者-R9000P",
             new AMD_CPU_R75800H(),
             new NVIDIA_GPU_RTX3060(),
             new Samsung_Memory()).work();

    Computer("联想拯救者-R9000X",
             new AMD_CPU_R75800H(),
             new NVIDIA_GPU_RTX3050TIi(),
             new E_dia_Memory()).work();

    return 0;
}