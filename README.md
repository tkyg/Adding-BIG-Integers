<h1 align="center"> Large Integer Addition in C++ </h1>
<p>This C++ program adds two large integers (up to 100 digits each) represented as strings. The program can handle arbitrarily large numbers that exceed the standard integer limit by simulating the addition manually, digit by digit, similar to how humans add numbers.
</p>

<h3>Features</h3>
  <p>- Handles numbers larger than the maximum size of built-in integer types.</p>
  <p>- Supports up to 100 digits for each number.</p>
  <p>- Utilizes string manipulation to simulate large integer addition.
</p>

<h3>How It Works</h3>
<p>1. The program takes two large integers as input in the form of strings.</p>
<p>2. It processes these numbers from right to left, adding corresponding digits while keeping track of the carry value.</p>
<p>3. The result is built from the least significant to the most significant digit and then displayed.</p>

<h3>Code Explanation</h3>
<p>The program consists of two main parts:</p>

1. add() Function:

  - This function adds two large numbers (passed as strings) and returns the result as a string.
  - It iterates through the numbers from right to left, handling individual digit sums, managing the carry, and building the final result string.

2. main() Function:

  - The main() function prompts the user to input two large integers, calls the add() function, and prints the resulting sum.

<h3>License</h3>
This project is licensed under the MIT License. See the LICENSE file for details.
