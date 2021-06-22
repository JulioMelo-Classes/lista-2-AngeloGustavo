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
