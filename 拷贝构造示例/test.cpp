// 默认生成拷贝构造失败案例

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
typedef int DataType;
class Stack
{
public:
    Stack(size_t capacity = 10)
    {
        _array = (DataType*)malloc(capacity * sizeof(DataType));
        if (nullptr == _array)
        {
            perror("malloc申请空间失败");
            return;
        }

        _size = 0;
        _capacity = capacity;
    }

    void Push(const DataType& data)
    {
        // CheckCapacity();
        _array[_size] = data;
        _size++;
    }

    ~Stack()
    {
        if (_array)
        {
            free(_array);
            _array = nullptr;
            _capacity = 0;
            _size = 0;
        }
    }

    Stack(const Stack& s) 
    {
        _array = (DataType*)malloc(s._capacity * sizeof(DataType));
        if (nullptr == _array)
        {
            perror("malloc申请空间失败");
            exit(-1);
        }
        _size = s._size;
        _capacity = s._capacity; 
        memcpy(_array, s._array, s._size * sizeof(DataType));
    }

private:
    DataType* _array;
    size_t _size;
    size_t _capacity;
};

int main()
{
    Stack s1;
    s1.Push(1);
    s1.Push(2);
    s1.Push(3);
    s1.Push(4);

    Stack s2(s1);
    return 0;
}
