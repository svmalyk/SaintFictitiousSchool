/*---------------------------------------------------------------------------*\
  00000 0     0 |
  0     0 0 0 0 |  School Management: The Open Source Management Tool
  00000 0  0  0 |  Website:  https://scmgmt.org
      0 0     0 |  Copyright (C) 2023-2023
  00000 0     0 |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.
    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.
    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.
Class
    smgmt::bisection
Description
    Class for bisection method for finding roots.
SourceFiles
    bisection.cpp
\*---------------------------------------------------------------------------*/

#ifndef BISECTION_H
#define BISECTION_H

#include <iostream>
#include <vector>

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace smgmt
{

// Forward declarations


/*---------------------------------------------------------------------------*\
                Class bisection Declaration
\*---------------------------------------------------------------------------*/

class bisection

{

protected:



private:
    double tolerance = 0.000001;  //error tolerance
    unsigned int nmax = 10;   // maximum number of iterations to prevent infinite loop
    double root=0.0;         // root of the function


public:
    unsigned int forder; // this is the order of the function
    std::vector<int> coeff;           //coefficients of the function.
                         //this is a dynamic array that will contain atmost forder elements
    double lbound;       //lower bound of the search interval
    double ubound;       //upper bound of the search interval

    // Constructor(s)

        //- Construct from components
        bisection
        (
            int forder,
            double lbound,
            double ubound
        );


    //- Destructor(s)
    virtual ~bisection()
    {}


    // Member Functions

    //read coefficients
    void readCoeff();

    //calculate the root of the function
    void calculate();


    //get the root
    double getRoot();

};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace smgmt

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif
