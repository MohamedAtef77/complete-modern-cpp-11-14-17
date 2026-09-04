/**
 * @file    main.cpp
 * @brief   Demonstrates the four const/pointer permutations: a plain
 *          pointer, a pointer to const (pointee is read-only through it,
 *          the pointer can be repointed), a const pointer (fixed to its
 *          target, the pointee can still change through it), and a const
 *          pointer to const (neither can change).
 * @author  Mohamed Atef
 * @date    2026-05-23
 */

/*===========================================================================*
 *                          F I L E  I N C L U S I O N S                     *
 *===========================================================================*/
#include <iostream>
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
/* None */

/*===========================================================================*
 *                       G L O B A L  F U N C T I O N S                      *
 *===========================================================================*/
/**
 * @brief   Program entry point.
 * @return  Implicitly 0 on successful execution.
 */
int main(void)
{
    int x{10};
    int y{20};

    /* 1) Plain pointer: both the pointer and the pointee are mutable. */
    int *ptr{&x};
    *ptr = 11; /* OK: modifies x through ptr */
    ptr = &y;  /* OK: ptr can be repointed to y */
    cout << "plain pointer      -> *ptr: " << *ptr << endl;

    /* 2) Pointer to const ("const int*", equivalently "int const*"): the
     *    pointee cannot be modified through the pointer, but the pointer
     *    itself can still be repointed to another variable. */
    const int *ptrToConst{&x};
    // *ptrToConst = 12; /* Error: cannot assign through a pointer to const */
    ptrToConst = &y; /* OK: repointing is allowed */
    cout << "pointer to const   -> *ptrToConst: " << *ptrToConst << endl;

    /* 3) Const pointer ("int* const"): the pointer is permanently bound to
     *    the variable it was initialized with, but the pointee can still be
     *    modified through it. A const pointer must be initialized where it
     *    is declared. */
    int *const constPtr{&x};
    *constPtr = 13; /* OK: modifies x through constPtr */
    // constPtr = &y; /* Error: cannot repoint a const pointer */
    cout << "const pointer      -> *constPtr: " << *constPtr << endl;

    /* 4) Const pointer to const ("const int* const"): neither the pointer
     *    nor the pointee can be modified through it. Also must be
     *    initialized where it is declared. */
    const int *const constPtrToConst{&x};
    // *constPtrToConst = 14; /* Error: cannot assign through a pointer to const */
    // constPtrToConst = &y;  /* Error: cannot repoint a const pointer */
    cout << "const ptr to const -> *constPtrToConst: " << *constPtrToConst << endl;

    cout << "x: " << x << ", y: " << y << endl;
}
