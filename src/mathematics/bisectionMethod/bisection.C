/*---------------------------------------------------------------------------*\
  00000 0     0 |
  0     0 0 0 0 |  School Management: The Open Source Management Tool
  00000 0  0  0 |  Website:  https://scmgmt.org
      0 0     0 |  Copyright (C) 2023-2023
  00000 0     0 |
-------------------------------------------------------------------------------

\*---------------------------------------------------------------------------*/
#include "bisection.H"


// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //



// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

smgmt::bisection::bisection
(
    int forder,
    double lbound,
    double ubound
)
{
    this->forder = forder;
    this->lbound = lbound;
    this->ubound = ubound;
}

// * * * * * * * * * * * * * * * Member Functions * * * * * * * * * * * * * //

    //read coefficients

    void smgmt::bisection::readCoeff(){
        int coefficient;

        std::cout<<"Enter the coefficients in descending order"<<"\n";
        std::cout<<"(start with highest degree coefficient)"<<"\n";

        do {
            std::cin >> coefficient;
            coeff.push_back (coefficient);
        } while (forder);
    }


    //calculate the root of the function
    void smgmt::bisection::calculate(){

    }

    //get the root
    double smgmt::bisection::getRoot(){
        //double root = 0.0;
        return root;
    }
