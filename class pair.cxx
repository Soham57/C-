#include <iostream>
/* Class Pair has already been declared
 * as shown in the following comments:
 */
class Pair
{
public:
    int *pa, *pb;
    Pair(int a, int b)
    {
        pa = new int;
        pb = new int;
        *pa = a;
        *pb = b;
    }
    Pair(const Pair &obj)
    {
        if ((*(obj.pb) != 0) && (*(obj.pa) != 0))
        {
            pa = new int;
            pb = new int;
            *pa = *(obj.pa);
            *pb = *(obj.pb);
        }
    }
    ~Pair()
    {
        if (*pa != 0)
            delete pa;
        pa = 0;
        if (*pb != 0)
            delete pb;
        pb = 0;
    }
};

/* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */

int main()
{
    Pair p(15, 16);
    Pair q(p);
    Pair *hp = new Pair(23, 42);
    delete hp;

    std::cout << "If this message is printed,"
              << " at least the program hasn't crashed yet!\n"
              << "But you may want to print other diagnostic messages too." << std::endl;
    return 0;
}
