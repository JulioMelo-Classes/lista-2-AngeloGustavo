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
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    for(auto *i=first; i<=last; ++i){
        if(i==last)
            return last;
        if(eq(*i,value))    
            return i;
    }
    // TODO
    return first;
}

}
#endif
