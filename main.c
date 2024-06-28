#include <stdio.h>
#include <stdlib.h>


double myPow(double x, int n);
double positive(double x, int n);
double negative(double x, int n);


int main(){

    printf("%lf",myPow(3,5));
    return 0;


}

double myPow(double x, int n){

    if(n>=0)

        return positive(x,n);
    else
        return negative(x,n);

}

double positive(double x, int n){

    //base case

        if(n == 0)
        return 1;

        //recursive case

        double smalloutput = myPow(x,n/2);

        if(n %  2 == 0)
            return smalloutput * smalloutput;
        else
            return x * smalloutput * smalloutput;


}

double negative(double x, int n){


    //base case

        if (n == -1)
            return 1/x;

        //recursive case

        double smalloutput = myPow(x,n/2);
        if(n % 2 == 0)
            return smalloutput * smalloutput;
        else
            return 1/x * smalloutput * smalloutput;


}



