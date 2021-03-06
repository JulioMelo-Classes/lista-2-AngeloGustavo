#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;
using namespace std;

namespace graal {

/*! 
 * @tparam BidirIt iterator para o range.
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 *
 */
 /*
 ok
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    int dist = std::distance(first, last);

    for(int i=0; i<dist/2; i++)
        swap(first[i], first[dist-i-1]); 
}

}
#endif
