# Laboratory_9

->Inserting strings into stringsTasks:

->Dynamic copy of strings

->Dynamic extension of strings

->Substrings of strings

->Removing parts from strings


# Memo: Dynamic Strings in C


## 1. Static vs. Dynamic Strings

* **Static strings**: declared as fixed-size arrays on the stack.

```c
char word[100];   // can store up to 99 characters + '\0'
```

* Size fixed at compile time.

* May waste memory if too large, or overflow if too small.

* **Dynamic strings**: allocated on the **heap** using `malloc`/`calloc`/`realloc`.

```c
char *word = malloc(20);  // enough for 19 chars + '\0'
```

* Size decided at runtime.
* Can grow/shrink with `realloc`.
* Must be released with `free`.

---

## 2. Allocation Basics

* **malloc(n)**: allocates `n` bytes, contents are uninitialized.
* **calloc(count, size)**: allocates and zeroes memory (`count * size` bytes).
* **realloc(ptr, n)**: resizes a previously allocated block.
* **free(ptr)**: releases memory back to the system.

Always check the return value:

```c
char *s = malloc(50);
if (s == NULL) {
    // allocation failed
}
```

---

## 3. Null Terminator

* All C strings end with `\0`.
* Always allocate one extra byte for this terminator:

```c
char *s = malloc(strlen(text) + 1);
```

---

## 4. Copying and Extending Strings

* Copy: `strcpy(dest, src)` copies including `\0`.
* Concatenate: `strcat(dest, src)` appends to an existing string (requires enough space).
* With dynamic strings:

  * Often need to `realloc` to increase capacity.
  * After `realloc`, always check if the pointer changed.

---

## 5. Substrings, Insertion, Removal

* Substring: allocate new memory and copy a slice of characters.
* Insertion/Removal: shift part of the string with `memmove`, then adjust memory if needed.

---

## 6. Common Pitfalls

* **Forgetting `free`** → memory leaks.
* **Using freed memory** → undefined behavior.
* **Not checking allocation result** → crash if `NULL` dereferenced.
* **Buffer overflow** → if not enough space allocated for string + `\0`.

---

## 7. Best Practices

* Initialize new memory (`calloc` or `memset`).
* Write helper functions for:

  * Copying strings dynamically.
  * Concatenating with reallocation.
  * Creating substrings.
* Always document who owns allocated memory and who is responsible for freeing it.

---

## 8. Why Use Dynamic Strings?

* When the size is not known in advance (user input, file reading).
* To support flexible operations (append, insert, remove).
* To avoid wasting memory with overly large static buffers.

---




