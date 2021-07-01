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
 * @tparam Comparison o tipo de uma função bool(const string &a,  const string &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função que retorna true se o elemento é menor do que o segundo, ou falso caso contrário
 *
 */
 /*
 ok
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    for(auto i=first; i<last-1; i++)
        for(auto j=i; j<last; j++)
            if(!cmp(*i,*j))
                std::swap(*i,*j);
}

}
#endif
