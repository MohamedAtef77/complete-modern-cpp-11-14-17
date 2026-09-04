/**
 * @file    main.cpp
 * @brief   Demonstrates default function arguments: a forward declaration
 *          with no defaults, followed by a definition that supplies
 *          defaults for its trailing parameters, callable by omitting
 *          arguments from right to left.
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
/* None */

/*===========================================================================*
 *                       G L O B A L  F U N C T I O N S                      *
 *===========================================================================*/
/**
 * @brief   Forward declaration of CreateWindow with no default arguments.
 * @param   title   Window title.
 * @param   x       X position.
 * @param   y       Y position.
 * @param   width   Window width.
 * @param   height  Window height.
 */
void CreateWindow(const char *title, int x, int y, int width, int height);

/**
 * @brief   Prints a window's parameters. Defines CreateWindow and supplies
 *          default arguments for its trailing parameters; a default may be
 *          added in a later declaration/definition for any parameter that
 *          doesn't already have one from an earlier declaration. Once a
 *          parameter has a default, every parameter after it must too, and
 *          callers may only omit arguments starting from the rightmost one.
 * @param   title   Window title.
 * @param   x       X position; defaults to -1 if omitted.
 * @param   y       Y position; defaults to -1 if omitted.
 * @param   width   Window width; defaults to -1 if omitted.
 * @param   height  Window height; defaults to -1 if omitted.
 */
void CreateWindow(const char *title, int x = -1, int y = -1, int width = -1, int height = -1)
{
    cout << "Title : " << title << endl;
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    cout << "Width : " << width << endl;
    cout << "Height : " << height << endl;
}

/**
 * @brief   Program entry point.
 * @return  Implicitly 0 on successful execution.
 */
int main(void)
{
    CreateWindow("Notepad", 100, 200);            /* width, height default to -1 */
    CreateWindow("Calculator", 50, 50, 400, 300);  /* all arguments specified */
    CreateWindow("Paint");                         /* x, y, width, height all default to -1 */
}