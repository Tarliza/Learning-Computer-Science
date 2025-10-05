ALPHABETS = 'abcdefghijklmnopqrstuvwxyz'

def caesar_cipher(text: str, key: int):
    encrypted_text = ''
    for letter in text:
        if letter.isspace():
            encrypted_text += letter
        else:
            index = ALPHABETS.find(letter)
            new_index = (index + key) % len(ALPHABETS)
            encrypted_text += ALPHABETS[new_index]
    return encrypted_text
    
def vigenere_cipher(text: str, key: str):
    encrypted_text = ''
    key_index = 0
    for letter in text:
        if letter.isspace():
            encrypted_text += letter
        else:
            key_char = key[key_index % len(key)]
            key_index += 1
            index = ALPHABETS.find(letter)
            offset = ALPHABETS.find(key_char)
            new_index = (index + offset) % len(ALPHABETS)
            encrypted_text += ALPHABETS[new_index]
    return encrypted_text
    
def caesar_cipher_decryption(text: str, key: int):
    encrypted_text = ''
    for letter in text:
        if letter.isspace() or not letter.isalpha():
            encrypted_text += letter
        else:
            index = ALPHABETS.find(letter)
            new_index = (index - key) % len(ALPHABETS)
            encrypted_text += ALPHABETS[new_index]
    return encrypted_text
    
def vigenere_cipher_decryption(text: str, key: str):
    encrypted_text = ''
    key_index = 0
    for letter in text:
        if letter.isspace() or not letter.isalpha():
            encrypted_text += letter
        else:
            key_char = key[key_index % len(key)]
            key_index += 1
            index = ALPHABETS.find(letter)
            offset = ALPHABETS.find(key_char)
            new_index = (index - offset) % len(ALPHABETS)
            encrypted_text += ALPHABETS[new_index]
    return encrypted_text
    
if __name__=="__main__":
    plaintext = input("Please type in the text you would like to cipher: ").lower()
    key= int(input("Please type in the encryption key: "))
    vigenere_key = input("Please type in the vigenere key: ").lower()
    c =caesar_cipher(plaintext, key)
    v = vigenere_cipher(plaintext, vigenere_key)
    DC = caesar_cipher_decryption(c, key)
    DV = vigenere_cipher_decryption(v, vigenere_key)
    print(f"\nplain text: {plaintext}\n")
    print(f"caesar cipher: {c}\n")
    print(f"Vigenere cipher: {v}\n")
    print(f"Decryption of Caesar: {DC}\n")
    print(f"Decryption of Vigenere: {DV}\n")