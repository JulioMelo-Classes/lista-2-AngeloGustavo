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
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    int *i,*j;
    for(i=first; i<last-1; i++)
        for(j=i; j<last; j++)
            if(!cmp(*i,*j))
                std::swap(*i,*j);
}

}
#endif
