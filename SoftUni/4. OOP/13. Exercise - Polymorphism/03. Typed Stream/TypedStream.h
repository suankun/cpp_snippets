#ifndef _TYPED_STREAM_H_
#define _TYPED_STREAM_H_

#include <string>
#include <sstream>
#include <vector>

template<typename T>
class TypedStream {
    protected:
        // const std::string & input;
        std::istringstream stream;

    public:
        TypedStream(const std::string& input) : stream(input) {};

        virtual ~TypedStream() = default;

        virtual TypedStream<T> & operator>>(T & i) {
            return *this;
        }

        std::vector<T> readToEnd() {
            std::vector<T> res;

            T curr;
            while (true)
            {
                *this >> curr;
                if ((bool)stream == false)
                    break;

                res.push_back(curr);
            }
            

            return res;
        }
};

#endif  // _TYPED_STREAM_H_