#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

using namespace std;

string foo(std::list< Human >& people)
{
    string retval = "";

    for_each(people.begin(), people.end(), [&retval](Human& h) { h.birthday(); });

    for_each(people.begin(), people.end(), [&retval](Human& h) {
        if (h.isMonster() == true) {
            retval.push_back('n');
        }
        else {
            retval.push_back('y');
        }
    });
    reverse(retval.begin(), retval.end());

    return retval;
}
