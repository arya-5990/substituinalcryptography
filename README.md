
# Substitutional Cryptography

This project demonstrates a simple implementation of substitutional cryptography using the C programming language. It encrypts and decrypts messages based on a randomly generated encryption key.

## How It Works

1. A random **encryption key** is generated at runtime using `rand()` seeded by the current time.
2. The user inputs a plaintext message to be encrypted.
3. The message is encrypted by adding the encryption key to each character's ASCII value.
4. The encrypted message (cipher text) is displayed.
5. Decryption is performed by subtracting the encryption key from each character in the cipher text, reconstructing the original message.

## Features

- Random key generation for encryption.
- Character-by-character substitution for encoding and decoding.
- Simple, lightweight implementation with standard C libraries.

## Code

The implementation can be found below:

```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int encryption_key = (rand() % 10000) + 1;
    int decryption_key, word_length;
    decryption_key = encryption_key;
    char plain_text[100], cipher_text[100], plain_text1[100];

    printf("Enter the message to be sent-:\n");
    fgets(plain_text, sizeof(plain_text), stdin);
    word_length = strlen(plain_text);

    for(int i = 0; i < word_length; i++) {
        cipher_text[i] = plain_text[i] + encryption_key;
    }

    printf("The encrypted message is -:\n");
    puts(cipher_text);

    for(int i = 0; i < word_length; i++) {
        plain_text1[i] = cipher_text[i] - decryption_key;
    }

    printf("The decrypted message is -:\n");
    puts(plain_text1);

    return 0;
}
```

## How to Run

1. Copy the code into a `.c` file (e.g., `substitutional_crypto.c`).
2. Compile the code using a C compiler, e.g., GCC:
   ```bash
   gcc substitutional_crypto.c -o crypto
   ```
3. Run the program:
   ```bash
   ./crypto
   ```

## Example

**Input**:  
```
Enter the message to be sent-:
Hello, World!
```

**Output**:  
```
The encrypted message is -:
Aß

The decrypted message is -:
Hello, World!
```

## Limitations

- Only supports messages of up to 100 characters.
- Does not handle non-printable or extended ASCII characters well.
- The encryption key is not shared securely, making it unsuitable for real-world use.

## Future Enhancements

- Support for longer messages using dynamic memory allocation.
- Implementation of more secure key exchange methods.
- Enhanced error handling for invalid inputs.

---
