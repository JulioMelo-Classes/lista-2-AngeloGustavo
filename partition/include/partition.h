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
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{   
    for(auto i=first; i<last; ++i){
        if(p(*i)){
            for(auto j=i-1; j>=first; --j)
                std::swap(*(j+1),*j);
            first++;
        }
    }
    return first;
}

}
#endif
