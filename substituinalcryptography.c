#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int encryption_key=(rand()%10000)+1;
    int decryption_key,word_length;
    decryption_key=encryption_key;
    char message[100],encrypted_message[100],decrypted_message[100];
    printf("Enter the message to be sent-:\n");
    fgets(message, sizeof(message), stdin);
    word_length=strlen(message);
    for(int i =0;i<word_length,i++){
        encrypted_message[i]=message[i]+encryption_key;
    }
    printf("The encrypted message is -:\n");
    puts(encrypted_message);
    for(int i=0;i<word_length;i++){
        decrypted_message[i]=encrypted_message[i]-decryption_key;
    }
    printf("The decrypted message is -:\n");
    puts(decrypted_message);
    return 0;
}
// create 10 different functions for 10 different ways to encrypt message