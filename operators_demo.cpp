#include <iostream>

using namespace std;

// != not equals
// == equals
// <= less than or equal
// >= greater than or equal
// <  less than
// >  greater than

// Addition assignment i = i + 10 or i += 10 ;

// post: use then compute;
// pre: compute then use;

int main()
{

    // Ex 1:

    // cout << (2 != 4 || 4 != 4);
    // Output: 1 (True);

    // int i = 0;
    // cout << (i++ == 0 && ++i == 1);
    // i++ == 0 && ++i == 1
    // 0 == 0 && 2 == 1
    // True && False
    // Output: False

    // Ex 2:

    // int i = 0;
    // cout << (++i == 1 && i++ == 0);
    // (1 == 1) && (1 == 0)
    // Output: False

    // Ex 3:

    // int i = -10;
    // cout << (--i + ++i * --i + i-- + 2);
    //  (--i + ++i * --i + i-- + 2)
    //  (-12 + (-10 * -11) + -10 + 2)
    //  110 + - 8 - 12
    //  110 - 20
    //  90
    //  (i = -12)
    // cout << endl;
    // cout << i;

    cout << endl;
    return 0;
}
