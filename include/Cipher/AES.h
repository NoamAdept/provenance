#pragma once
// Ensures this header file is included only once during compilation, to prevent duplicate definitions

#include <vector> // dynamic arrays of bytes
#include <cstdint> // Fixed-width integer types

using namespace std;


// preventing naming collisions
namespace Cipher {

    class AES128{

        public:
            
            // Constructor: takes a 16-byte key (128 bit = 16 bytes)
            AES128(const vector<uint8_t>& key);


            // Encrypts the input data and returns ciphertexts
            vector<uint8_t> encrypt (const vector<uint8_t>& plaintext);

            // Decrypts the input data (ciphertext) and returns the plaintext
            vector<uint8_t> decrypt (const vector<uint8_t>& ciphertext);

        private:

            // internall key storing for encryption and decryption
            vector<uint8_t> key_;

            // Internal method to generate round keys from the original jey
            void keyExpansion();



    }
}
