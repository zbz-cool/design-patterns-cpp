#include <iostream>
#include <string>

class DataStream {
public:
    DataStream(std::string puid, std::string read_id)
        : puid_(std::move(puid))
        , read_id_(std::move(read_id)) {
    }

    DataStream& offset(int offset) {
        offset_ = offset;
        return *this;
    }

    DataStream& ramping_rate(int sampling_rate) {
        sampling_rate_ = sampling_rate;
        return *this;
    }

    void print() const {
        std::cout << "puid : " << puid_
                  << "\nread_id : " << read_id_
                  << "\noffset : " << offset_
                  << "\nsampling_rate : " << sampling_rate_ << std::endl;
    }

private:
    std::string puid_;          // 必填项
    std::string read_id_;       // 必填项
    int offset_ = 0;            // 可选项
    int sampling_rate_ = 5000;  // 可选项
};

int main() {
    DataStream ds("puid_1", "read_A");
    ds.offset(2).ramping_rate(6000);
    ds.print();
    return 0;
}

/*
1. 实现一个类似构造者模式的类
2. 一部分成员变量是必填的, 一部分是可选的
3. 通过返回自己对象的引用来连续调用
*/