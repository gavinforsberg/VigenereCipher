//
//  main.cpp
//  VigenereDecipher
//
//  Created by Gavin Forsberg on 2/3/22.
//

#include <iostream>
#include "vigenere.hpp"
using namespace std;

int main()
{
    vigenere cipher;

     int in;
     cout << "--- Vigenere Cipher ---" << endl << endl;
     cout << "Would you like to: \n(1) Encrypt \n(2) Decrypt with a key \n(3) Decrypt without a key \n(4) Quit Vigenere Cipher"  << endl;
     
     cin >> in;
    
     while((int)in < 1 || (int)in > 4)
     {
          cout << "\nInput is not valid. Try again." << endl << endl;
          cout << "Would you like to: \n(1) Encrypt \n(2) Decrypt with a key \n(3) Decrypt without a key \n(4) Quit Vigenere Cipher"  << endl;
          cin.clear(); cin.ignore(10000, '\n');
          cin >> in;
     }
    
     cout << "\nChoice: " << in << endl << endl;
     string fileName, plaintext, ciphertext, key = "";
     
     if(in == 1)
     {
          cout << "Please enter the name of the file containing your plaintext." << endl;
          cin >> fileName;
          plaintext = cipher.fileRead(fileName);
          cipher.encrypt(plaintext);
     }
     else if(in == 2)
     {
          cout << "Please enter the name of the file containing your ciphertext." << endl;
          cin >> fileName;
          plaintext = cipher.fileRead(fileName);
          ciphertext = cipher.withKey(ciphertext, key);
     }
     else if(in == 3)
     {
          cout << "Please enter the name of the file containing your ciphertext." << endl;
          cin >> fileName;
          plaintext = cipher.fileRead(fileName);
          ciphertext = cipher.noKey(ciphertext);
     }
     else if(in == 4)
     {
          exit(0);
     }
}
