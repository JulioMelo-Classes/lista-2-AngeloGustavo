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
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param n_first Ponteiro para o primeiro elemento do range após o processamento da função
 *
 * @return Um iterator para a posição onde se encontra o primeiro elemento do range antes da rotação
 *
 */
 /*
 blz
 */
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{  
   for(auto j=n_first; j<last; ++j){
      for(auto i=n_first; i!=first; --i)
         std::swap(*(i-1),*i);
      n_first++;
      first++;
   }
   return last;
}
}
#endif
