// This program calculates the square root of a number using Newton's Method.
// Created by Alex Alcaraz on 11/28/2024.

double fPrime(double guess) {
   return 2 * guess;
}

double f(double guess, double number) {
   return guess * guess - number;
}

double newton(double number, int n) {
   double guess = number / 2.0;

   for (int i = 0; i < n; ++i) {
      guess = guess - f(guess, number) / fPrime(guess);
   }

   return guess;
}

double sqrt(double number) {
   // Use newton's method.
   double guess;
   int iterations = 100000;

   guess = newton(number, iterations);

   return guess;
}