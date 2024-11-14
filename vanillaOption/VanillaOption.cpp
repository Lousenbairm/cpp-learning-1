#include "VanillaOption.h"

#include <cmath>

void VanillaOption::init() {
    K = 100.0;
    r = 0.05; //5% interest rate
    T = 1.0; //One year till maturity
    S = 100.0; //Option is "at the money" as spot equal the strike
    sigma = 0.2; //Volatility is 20%
}

void VanillaOption::copy(const VanillaOption& rhs) {
    K = rhs.getK();
    r = rhs.getr();
    T = rhs.getT();
    S = rhs.getS();
    sigma = rhs.getsigma();
}

VanillaOption::VanillaOption() {
    init();
}

VanillaOption::VanillaOption(const double& _K, const double& _r, const double& _T, const double& _S, const double& _sigma) : K(_K), r(_r), T(_T), S(_S), sigma(_sigma) {
    
} 

//copy constructor
VanillaOption::VanillaOption(const VanillaOption& rhs){
    copy(rhs);
}

//Assignment operator
VanillaOption& VanillaOption::operator=(const VanillaOption& rhs) {
    if(this == &rhs) return *this;
    copy(rhs);
    return *this;
}

//Destructor
VanillaOption::~VanillaOption(){

}