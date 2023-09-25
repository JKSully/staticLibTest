#ifndef TESTLIB_TESTLIBRARY_H
#define TESTLIB_TESTLIBRARY_H

#include <iterator>
#include <type_traits>

template <typename InputIter, typename ScalarT>
void scale(InputIter begin, InputIter end,  ScalarT scalar);


#endif //TESTLIB_TESTLIBRARY_H
