
<body>
    <h1>Libft Documentation</h1>

<h2>Introduction</h2>
<p>Welcome to the Libft documentation! This is a fundamental project at 42 that I completed to build my own C library containing essential functions frequently used in C programming. This library serves as a solid foundation for many other projects, providing me with a set of utility functions that I can reuse throughout my journey at 42.</p>

<h2>Learning Objectives</h2>
<p>As I worked on the Libft project, I aimed to achieve the following learning objectives:</p>
<ol>
    <li><strong>Enhancing My C Programming Skills:</strong> Throughout this project, I challenged myself to implement crucial functions from scratch, deepening my understanding of C and improving my coding proficiency.</li>
    <li><strong>Memory Allocation and Management:</strong> I got hands-on experience with dynamic memory allocation and management in C, as some functions required efficient memory allocation.</li>
    <li><strong>Understanding Standard Library Functions:</strong> This project allowed me to peek behind the scenes of standard library functions and comprehend how they are implemented.</li>
</ol>

<h2>Functions</h2>
<p>Functions present ind The Libft project</p>
<ol>
  <li><code>memset</code>: Sets a block of memory with a specified value.</li>
  <li><code>bzero</code>: Clears a block of memory.</li>
  <li><code>memcpy</code>: Copies a block of memory from the source to the destination.</li>
  <li><code>memccpy</code>: Copies a block of memory up to a specified character.</li>
  <li><code>memmove</code>: Safely copies a block of memory, even if the source and destination overlap.</li>
  <li><code>memchr</code>: Searches for a character in a block of memory.</li>
  <li><code>memcmp</code>: Compares two blocks of memory.</li>
  <li><code>strlen</code>: Calculates the length of a string.</li>
  <li><code>strlcpy</code>: Copies a string up to a specified size.</li>
  <li><code>strlcat</code>: Concatenates two strings up to a specified size.</li>
  <li><code>strchr</code>: Locates the first occurrence of a character in a string.</li>
  <li><code>strrchr</code>: Locates the last occurrence of a character in a string.</li>
  <li><code>strnstr</code>: Locates a substring in a string up to a specified size.</li>
  <li><code>strncmp</code>: Compares two strings up to a specified length.</li>
  <li><code>atoi</code>: Converts a string to an integer.</li>
  <li><code>isalpha</code>: Checks if a character is an alphabetic character.</li>
  <li><code>isdigit</code>: Checks if a character is a digit.</li>
  <li><code>isalnum</code>: Checks if a character is alphanumeric.</li>
  <li><code>isascii</code>: Checks if a character is an ASCII character.</li>
  <li><code>isprint</code>: Checks if a character is printable.</li>
  <li><code>toupper</code>: Converts a character to uppercase.</li>
  <li><code>tolower</code>: Converts a character to lowercase.</li>
  <li><code>calloc</code>: Allocates memory and initializes it to zero.</li>
  <li><code>strdup</code>: Duplicates a string.</li>
  <li><code>substr</code>: Extracts a substring from a string.</li>
  <li><code>strjoin</code>: Concatenates two strings.</li>
  <li><code>strtrim</code>: Removes specified characters from the beginning and end of a string.</li>
  <li><code>split</code>: Splits a string into an array of substrings based on a delimiter.</li>
  <li><code>itoa</code>: Converts an integer to a string.</li>
  <li><code>strmapi</code>: Applies a function to each character of a string.</li>
  <li><code>putchar_fd</code>: Writes a character to a file descriptor.</li>
  <li><code>putstr_fd</code>: Writes a string to a file descriptor.</li>
  <li><code>putendl_fd</code>: Writes a string followed by a newline to a file descriptor.</li>
  <li><code>putnbr_fd</code>: Writes an integer to a file descriptor.</li>
</ol>

<h2>How to Use</h2>
<p>To use the Libft library in my C projects, I can follow these steps:</p>
<ol>
    <li>I'll clone the Libft repository to my local machine using the <code>git clone</code> command.</li>
    <li>Navigating to the "libft" folder, I can compile the library by running the <code>make</code> command, which creates a <code>libft.a</code> archive file.</li>
    <li>In my other 42 projects, I'll include the header file <code>libft.h</code> and link the <code>libft.a</code> archive during compilation to utilize the library functions.</li>
</ol>

<h2>Contributing</h2>
<p>Contributions to the Libft project are welcome! If I come across any bugs or have suggestions for improvements, I can create an issue or submit a pull request on the GitHub repository.</p>

<h2>Credits</h2>
<p>I would like to acknowledge the creators of 42 for designing the Libft project and providing me with the opportunity to enhance my C programming skills.</p>

<h2>License</h2>
<p>The Libft project is open-source and available under the <a href="LICENSE">MIT License</a>. I am free to use, modify, and distribute the code as per the terms of the license.</p>
</body>
