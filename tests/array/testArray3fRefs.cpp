#include "array/zfparray3.h"
using namespace zfp;

extern "C" {
  #include "utils/hash32.h"
  #include "utils/rand32.h"
}

#define ARRAY_DIMS_SCALAR_TEST Array3fTest
#define ARRAY_DIMS_SCALAR_TEST_REFS Array3fTestRefs

#include "utils/gtest3fTest.h"

#include "testArrayRefsBase.cpp"
#include "testArray3RefsBase.cpp"