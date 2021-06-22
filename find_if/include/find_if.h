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
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    int*i;
    auto saida = first;
    for(i=first; i<=last; ++i){
        saida=i;
        if(i==last)
            return last;            
        if(p(*i))
            break;
    }
    
    // TODO
    return saida;
}

}
#endif
