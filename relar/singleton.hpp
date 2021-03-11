#ifndef __RELAR_SINGLETON_HPP__
#define __RELAR_SINGLETON_HPP__

namespace relar {
    template <class T, class X = void, int N = 0>
    class Singleton {
        public:
        static T* GetInstance() {
            static T v;
            return &v;
        }
    };

    template <class T, class X = void, int N = 0>
    class SingletonPtr {
        public:
        static std::shared_ptr<T> GetInstance() {
            static std::shared_ptr<T> v(new T);
            return v;
        }
    };
}

#endif /* __RELAR_SINGLETON_HPP__ */