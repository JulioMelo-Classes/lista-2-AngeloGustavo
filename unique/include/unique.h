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
    int *i,*j,*last_temp;
    int var=0;
    for(i=first; i<last; ++i){
        var=0;
        for(j=first; j<i; ++j){
            if(eq(*i,*j)){
                var=1;
                break;
            }
        }if(var==1){
            last_temp=i;
            copy(i+1,last,last_temp);
            last=last_temp;
        }
    }
    return last;
}

}
#endif
