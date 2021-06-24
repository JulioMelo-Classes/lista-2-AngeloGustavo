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
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param first Ponteiro para se tornar o primeiro elemento do range após a reordenação
 *
 * @return Ponteiro para a posição logo após o último elemento do range reordenado
 *
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
    std::copy(first,last,d_first);
    int dist = std::distance(first, last);

    return d_first+dist;
}

}
#endif
