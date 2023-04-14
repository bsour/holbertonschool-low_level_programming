# HashTable Data Structure

A C-based implementation of hash tables using the djb2 algorithm for hashing and chaining for collision handling.

## Resources

**Read or watch:**
- [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)

## Learning Objectives

- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called `hash_tables.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Data Structures

Please use these data structures for this project:

```c
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

## Functions
`hash_table_t *hash_table_create(unsigned long int size);`
`unsigned long int hash_djb2(const unsigned char *str);`
`unsigned long int key_index(const unsigned char *key, unsigned long int size);`
`int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
`char *hash_table_get(const hash_table_t *ht, const char *key);`
`void hash_table_print(const hash_table_t *ht);`

## Author

**Name:** Sourabh Beniwal

**GitHub Username:** [bsour](https://github.com/bsour)
