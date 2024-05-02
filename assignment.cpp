#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

unsigned long long recFactorial (long long n)
{
    if (n==0)
    return 1;
    else
    return n*recFactorial(n-1);
}


unsigned long long iterFactorial( long long n){

    long long fact =1;
    for( int i=1; i<=n; i++)
    {
     fact*=i;
    }
    return fact;}



int main()
{
   long long n;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    auto start = high_resolution_clock::now();

    cout<<"The Factorial of n by Iterative Method is "<<iterFactorial(n)<<endl;

    // cout<<"The Factorial of n by Recursive Method is "<<recFactorial(n)<<endl;

    auto finish = high_resolution_clock::now();
    // Calculating execution time taken by the program.
      auto duration= duration_cast<microseconds>(finish - start);
    cout << "Time taken in microseconds : "<< (double)(duration.count() / 1000.0) << endl;
    return 0;

}
