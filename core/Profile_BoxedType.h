#pragma once

// #include <string>
#include <map>
// #include <iomanip>
// #include <sstream>

namespace Profile
{

class BoxedType
{
    enum Type {
        Float,
        Int,
        UInt,
        // String,
    };

public:
    BoxedType(const double val) { floatVal = val; type = Float; }
    BoxedType(const float val) { floatVal = val; type = Float; }

    // BoxedType(const std::string& val) { stringVal = val; type = String; }
    // BoxedType(const char* val) { stringVal = val; type = String; }

    BoxedType(const int32_t val) { intVal = val; type = Int; }
    BoxedType(const uint32_t val) { uintVal = val; type = UInt; }
    BoxedType(const long unsigned int val) { uintVal = val; type = UInt; }

    BoxedType(const int64_t val) { intVal = val; type = Int; }
    BoxedType(const uint64_t val) { uintVal = val; type = UInt; }
    // BoxedType(const long long int val) { intVal = val; type = Int; }

    std::string str() const
    {
        switch (type) {
            case Float: return std::to_string(floatVal);
            case Int: return std::to_string(intVal) + "i";
            case UInt: return std::to_string(uintVal) + "i";
            // case String: {
            //     std::stringstream os;
            //     os << std::quoted(stringVal);
            //     return os.str();
            // } // "\"" + escape(stringVal, "\"", "\\\"") + "\"";
        }
    }

private:
    Type type;
    double floatVal;
    // std::string stringVal;
    int64_t intVal;
    uint64_t uintVal;
};

};