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
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    int dist = std::distance(first, last)/2;
    int aux;

    for(int i=0; i<dist; i++){
        aux = *(first + i);
        *(first + i) = *(last - i -1);
        *(last - i -1) = aux;
    }
}

}
#endif
