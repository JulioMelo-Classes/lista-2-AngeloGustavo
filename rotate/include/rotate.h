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
