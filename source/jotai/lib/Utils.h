#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <cassert>

constexpr int JOTAI_INT_MIN         = -32767;
constexpr int JOTAI_INT_MAX         =  32767;
constexpr int JOTAI_INT_SMALL       =      7;
constexpr float JOTAI_FLT_MIN       = (1.0 * (-(2 << 23)));
constexpr float JOTAI_FLT_MAX       = (1.0 * ( (2 << 23) - 1.0));


constexpr auto JOTAI_INT_MIN_STR    = "-32767";
constexpr auto JOTAI_INT_MAX_STR    =  "32767";


inline int genInt(int lower = JOTAI_INT_MIN,
                  int upper = JOTAI_INT_MAX) {
    /*
    Generates an int between lower and upper (JOTAI_INT_MAX)

    reminder:
    lrand48():  returns ***nonnegative*** long integers uniformly distributed
                between 0 and 2^31
     */

    if (lower == upper)
        return lower;

    assert(lower < upper);

    if (lower < 0 && upper > 0) {
        // long long to avoid overflow when (upper - lower)
        long long _lower = (long long) lower;
        long long _upper = (long long) upper;
        long long _ans = _lower + (lrand48() % (_upper - _lower));
        auto ans = (int)_ans;
        assert(ans >= JOTAI_INT_MIN && ans <= JOTAI_INT_MAX);
        return ans;
    } else {
        return lower + (int)(lrand48() % (upper - lower));
    }
}

inline int genFloat(float lower = JOTAI_FLT_MIN,
                    float upper = JOTAI_FLT_MAX) {
    /*
    Generates an int between lower and upper (JOTAI_INT_MAX)

    reminder:
    lrand48():  returns ***nonnegative*** long integers uniformly distributed
                between 0 and 2^31
     */

    if (lower == upper)
        return lower;

    assert(lower < upper);

    // TODO: investigate overflows/underflows
    return lower + (float)drand48() * (upper - lower);
}

inline int genPositiveInt() {
    return genInt(0, JOTAI_INT_MAX);
}

inline std::string genIntStr() {
    return "0";
}

/*((int)(lrand48()%JOTAI_INT_MAX))*/

/**
 * Removes spaces from the start and end of a string
 * 
 * @param s the string to be trimmed
 * 
 * @returns true if it removed any spaces from
 *    the string
 */
bool trimString(std::string &s);

/**
 * Formats a type string to our C union format
 * e.g. formatTypeUnion("int *") = _intp
 * 
 * @param type the string to be formatted
 * 
 * @returns the formatted string
 */
std::string formatTypeUnion(std::string type);

#endif