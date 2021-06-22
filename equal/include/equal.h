#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    int j;
    auto i=first1; 
    for(i=first1, j=0; i<last1; ++i, j++)
        if(!eq(first1[j],first2[j]))
            return false;
    return true;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    int j;
    auto i=first1; 
    for(i=first1, j=0; i<last1; ++i, j++)
        if(!eq(first1[j],first2[j]))
            return false;
    return true;
}

}
#endif
