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
 * @tparam Equal o tipo de uma função bool(const string &a,  const string &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param eq A função que retorna true se o elemento é igual ao segundo, ou falso caso contrário
 *
 * @return Um iterator para o elemento logo após o último elemento do range após o processamento.
 *
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    auto last_temp=last;

    for(auto i=first; i<last; ++i)
        for(auto j=first; j<i; ++j)
            if(eq(*i,*j)){
                last_temp=i;
                copy(i+1,last,last_temp);
                last=last_temp;
                break;
            }

    return last;
}

}
#endif
