/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_Predefined_Type_Collection_H_
#define COMMONAPI_TESTS_Predefined_Type_Collection_H_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/ByteBuffer.h>
#include <CommonAPI/types.h>
#include <cstdint>
#include <string>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {

namespace PredefinedTypeCollection {
    typedef uint8_t TestUInt8;
    typedef uint16_t TestUInt16;
    typedef uint32_t TestUInt32;
    typedef uint64_t TestUInt64;
    typedef int8_t TestInt8;
    typedef int16_t TestInt16;
    typedef int32_t TestInt32;
    typedef int64_t TestInt64;
    typedef bool TestBoolean;
    typedef CommonAPI::ByteBuffer TestByteBuffer;
    typedef double TestDouble;
    typedef float TestFloat;
    typedef std::string TestString;



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "commonapi.tests.PredefinedTypeCollection";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(1, 0);
}

} // namespace PredefinedTypeCollection

} // namespace tests
} // namespace commonapi

namespace CommonAPI {


}


namespace std {
}

#endif // COMMONAPI_TESTS_Predefined_Type_Collection_H_
