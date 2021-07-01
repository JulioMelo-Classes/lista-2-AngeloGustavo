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
 * @tparam ForwardIt iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função bool(const string &a)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p A função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário
 *
 * @return Um iterator apontando para o elemento logo após o último elemento no range reordenado que satisfaz o predicado
 *
 */
 /*
 blz
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
