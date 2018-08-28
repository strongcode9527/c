//
// Created by 李壮 on 2018/8/28.
//

// 类模板

template <class T> //声明一个模板，虚拟类型名为T。注意：这里没有分号。
class Compare //类模板名为Compare
{
    public :
        Compare(T a, T b) {
            x = a;
            y = b;
        }

        T max() {
            return (x > y) ? x : y;
        }

        T min() {
            return (x < y) ? x : y;
        }

    private :
        T x, y;
};

