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
 * @tparam InputIt1 iterator para o range.
 * @tparam InputIt1 iterator para o range.
 * @tparam Equal o tipo de uma função bool(const string &a,  const string &b)
 *
 * @param first1 Ponteiro para o primeiro elemento do range
 * @param last1 Ponteiro para a posição logo após o último elemento do range
 * @param first2 Ponteiro para o primeiro elemento do range que deve ser levado em consideração para a comparação
 * @param eq A função que retorna true se o elemento é igual ao segundo, ou falso caso contrário
 *
 * @return True se os ranges são iguais, false caso contrário
 *
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
