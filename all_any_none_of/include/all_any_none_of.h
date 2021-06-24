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
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função bool(const string &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p A função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário
 *
 * @return True caso todos os elementos do range obedecerem a determinada condição ou falso caso contrário
 *
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    for(auto i=first; i<=last; ++i)
        if(!p(*i))
            return false;
    return true;

}

/*! 
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função bool(const string &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p A função que retorna true quando uma determinada condição é satisfeita ou false caso contrário
 *
 * @return True caso algum dos elementos do range obedecerem a determinada condição ou false caso contrário
 *
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    for(auto i=first; i<=last; ++i)
        if(p(*i))
            return true;
    return false;
}

/*! 
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função bool(const string &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p A função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário
 *
 * @return True caso todos os elementos do range desobedecerem a determinada condição ou falso caso contrário
 *
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    for(auto i=first; i<=last; ++i)   
        if(p(*i))
            return false;
    return true;
}

}
#endif
