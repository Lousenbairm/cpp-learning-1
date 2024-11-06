#pragma once

class VanillaOption {
    private:

        void init();
        void copy(const VanillaOption& rhs);

        double K; //Strike price
        double r; //Risk-free rate
        double T; //Maturity time
        double S; //Underlying asset price 
        double sigma; //Volatility of underlying asset

    public:

        VanillaOption(); //constructor

        VanillaOption(const double& _K, const double& _r, const double& _T, const double& _S, const double& _sigma); //Parameter constructor

        VanillaOption(const VanillaOption& rhs); //copy constructor

        VanillaOption& operator = (const VanillaOption& rhs); //Assignment operator

        virtual ~VanillaOption(); //destructor

        //getter 

        double getK() const; //read only cannot modify value
        double getr() const;
        double getT() const;
        double getS() const;
        double getsigma() const;

        //option price calculation method
        double calc_call_price() const;
        double calc_put_price() const;

};