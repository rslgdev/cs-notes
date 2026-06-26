<h1 align="center">Computer Science Notes</h1>
<p align="center">Learning from first principles · Language: <strong>C</strong></p>

---

## Bits and Bytes

**Bits** and **Bytes** are the <mark>foundation building blocks of all digital data in computing.</mark>

- A **Bit** is a <mark>binary digit</mark> — the smallest unit of information, either **0** or **1**

  > At the hardware level this means a transistor is either **on** or **off** — that's why it's the smallest possible unit.

- A **Byte** is a group of **8 bits** (e.g. <mark>00110010</mark>)

  > 2<sup>8</sup> = 256, so one byte can represent **256 unique values.**
  > Bytes are the standard unit for measuring **storage** (RAM, hard drives, file sizes).
  > A single byte typically holds one text character from the **ASCII** table — e.g. `"A"`.

---

### How Bytes Encode Data

> Since computers only understand ones and zeros we needed a way to
> represent combinations of bits into human-readable way.
> For that smart people established encoding systems:

- **ASCII**: A character encoding standard where every letter, number, and symbol is assigned a specific byte. For example letter "A" is stored as <mark>01000001</mark>
- **UTF-8 (Unicode)**: A modern, dynamic encoding system that uses one to four bytes to represent millions of characters, including emojis, mathematical symbols, and all global alphabets.

---

### Measuring Data

When measuring larger amounts of digital information, we group bytes into higher scales:

- **Kilobyte (KB):** 1,024 bytes
- **Megabyte (MB):** 1,048,576 bytes
- **Gigabyte (GB):** ~1.07 billion bytes
- **Terabyte (TB):** ~1.1 trillion bytes

---

<br>
<br>
<br>

## Primitive Data Types in C

> Since we already discuss what bits and bytes are, we can now talk about **Data Types**
> when declaring variable we don't just randomly type variable name and its value
> we know what type of information we are storing and what kind of limitations we gonna
> have for this specific variable and that why **data types** exists to tell computer
> how many bytes or bits of information this variable will need.

<mark>This table below shows data types of C programming language and its restrictions</mark>

| Type        | Size (bytes) | Size (bits) | Min Value                  | Max Value                 |
| ----------- | ------------ | ----------- | -------------------------- | ------------------------- |
| `char`      | 1            | 8           | -128                       | 127                       |
| `short`     | 2            | 16          | -32,768                    | 32,767                    |
| `int`       | 4            | 32          | -2,147,483,648             | 2,147,483,647             |
| `long`      | 8            | 64          | -9,223,372,036,854,775,808 | 9,223,372,036,854,775,807 |
| `long long` | 8            | 64          | -9,223,372,036,854,775,808 | 9,223,372,036,854,775,807 |
| `float`     | 4            | 32          | ~1.2e-38                   | ~3.4e+38                  |
| `double`    | 8            | 64          | ~2.3e-308                  | ~1.8e+308                 |

> In this above table you notice that no matter of what variable type we have its value
> will always be numeric, even tho we already discuss this in above part of this section
> I'm pointing this out because of **char** type which as we see can be from -128 to 127
> that why it's limitation to character maps of ASCII table is limited to 256 (256 in count
> as value from 0 to 255) cause in programming we have unsigned and signed types
> by default all types are signed, meaning they can have negative value
> so for example if we declare `unsigned char` we cant assign -128 but we can assign 255

<mark>Here is full table with all signed and unsigned types</mark>
| Type | Size (bytes) | Size (bits) | Min Value | Max Value |
| ------------------- | ------------ | ----------- | -------------------------- | -------------------------- |
| `char` | 1 | 8 | -128 | 127 |
| `short` | 2 | 16 | -32,768 | 32,767 |
| `int` | 4 | 32 | -2,147,483,648 | 2,147,483,647 |
| `long` | 8 | 64 | -9,223,372,036,854,775,808 | 9,223,372,036,854,775,807 |
| `long long` | 8 | 64 | -9,223,372,036,854,775,808 | 9,223,372,036,854,775,807 |
| `float` | 4 | 32 | ~1.2e-38 | ~3.4e+38 |
| `double` | 8 | 64 | ~2.3e-308 | ~1.8e+308 |
| `unsigned char` | 1 | 8 | 0 | 255 |
| `unsigned short` | 2 | 16 | 0 | 65,535 |
| `unsigned int` | 4 | 32 | 0 | 4,294,967,295 |
| `unsigned long` | 8 | 64 | 0 | 18,446,744,073,709,551,615 |
| `unsigned long long`| 8 | 64 | 0 | 18,446,744,073,709,551,615 |

> `long` and `long long` are both 8 bytes on 64-bit Linux. On Windows, `long` is 4 bytes.
> Floating point types (`float`, `double`) have no unsigned variant in C.

<mark>check reference.c for code examples for Data Types</mark>
