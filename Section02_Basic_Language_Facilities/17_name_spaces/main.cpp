/**
 * @file    main.cpp
 * @brief   Demonstrates namespaces: two sibling namespaces (Avg, Basic)
 *          each declare a function named Calculate, disambiguated by
 *          explicit qualification (Avg::Calculate vs. Basic::Calculate);
 *          a Sort namespace groups related free functions; and a nested
 *          namespace (Sort::Comparision) requires qualification through
 *          every enclosing level, unless brought into scope with a
 *          using-declaration.
 * @author  Mohamed Atef
 * @date    2026-05-23
 */

/*===========================================================================*
 *                          F I L E  I N C L U S I O N S                     *
 *===========================================================================*/
#include <iostream>
#include <limits>
using namespace std;

/*===========================================================================*
 *                                M A C R O S                                *
 *===========================================================================*/
/* None */

/*===========================================================================*
 *                             U S E R  T Y P E S                            *
 *===========================================================================*/
/* None */

/*===========================================================================*
 *                       S T A T I C  F U N C T I O N S                      *
 *===========================================================================*/
/* Averages its two arguments. Lives in its own namespace so its Calculate
 * does not collide with Basic::Calculate. */
namespace Avg
{
    float Calculate(float x, float y)
    {
        return (x + y) / 2;
    }
}

/* Sums its two arguments. Same function name as Avg::Calculate, but a
 * distinct symbol because it lives in a different namespace. */
namespace Basic
{
    float Calculate(float x, float y)
    {
        return x + y;
    }
}

/* Groups sorting-related functionality. Comparision is nested one level
 * deeper, so its members are reached as Sort::Comparision::Less, etc. */
namespace Sort
{
    void Quicksort()
    {
        cout << "Sort::Quicksort()" << endl;
    }

    void Insertionsort()
    {
        cout << "Sort::Insertionsort()" << endl;
    }

    void Mergesort()
    {
        cout << "Sort::Mergesort()" << endl;
    }

    namespace Comparision
    {
        void Less()
        {
            cout << "Sort::Comparision::Less()" << endl;
        }

        void Greater()
        {
            cout << "Sort::Comparision::Greater()" << endl;
        }
    }
}

/*===========================================================================*
 *                       G L O B A L  F U N C T I O N S                      *
 *===========================================================================*/
/**
 * @brief   Program entry point.
 * @return  Implicitly 0 on successful execution.
 */
int main(void)
{
    /* Same function name, different namespaces: qualification picks which
     * Calculate is called. */
    cout << "Avg::Calculate(4, 6): " << Avg::Calculate(4, 6) << endl;
    cout << "Basic::Calculate(4, 6): " << Basic::Calculate(4, 6) << endl;

    Sort::Quicksort();
    Sort::Insertionsort();
    Sort::Mergesort();

    /* Nested namespace: every enclosing level is spelled out. */
    Sort::Comparision::Less();
    Sort::Comparision::Greater();

    /* A using-declaration brings a single name into scope, so it can be
     * called unqualified afterward without pulling in the whole namespace
     * (as `using namespace Avg;` would, risking a clash with Basic). */
    using Avg::Calculate;
    cout << "Calculate(2, 2) via using-declaration: " << Calculate(2, 2) << endl;
}
