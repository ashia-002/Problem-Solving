#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    int note, convert, note_500;
    cin>>note;

    convert = note*2000;
    note_500 = convert/500;

    cout<<note_500<<endl;

    return 0;
}










//************problem-A**************
/*int num;
    cin>>num;

    for(int i = 1; i<=num; i++){
        if(num%i == 0){
            cout<<i<<endl;
        }
    }
    */

   //********problem-B************
   /*char S[10];
    for(int i = 0; i<10; i++){
        cin>>S[i];
    }

    cout<<S[6]<<endl;
    */


//************problem-C*************
/*int test_case, num_day, loss, sum;
    cin>>test_case;

    while(test_case--){
        cin>>num_day;
        int profit[num_day];

        for(int i = 0; i<num_day; i++){
            cin>>profit[i];
            //sum += profit[i];
        }
        loss = INT32_MAX;
        for(int j = 0; j<num_day; j++){
            loss = min(loss, profit[j]);
        }
        sum = 0;
        bool skippedloss = false;
        for(int k = 0; k<num_day; k++){
            if(profit[k] == loss && !skippedloss){
                skippedloss = true;
                continue;
            }
            sum+=profit[k];
            
        }
        cout<<sum<<endl;
       
    }
    */

   //*****************problem-E************
   /*#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char S[101]; // Increase the array size to accommodate a 100-character string plus the null terminator.
    int ucase = 0, lcase = 0;

    cin.getline(S, sizeof(S));

    for (int j = 0; j < strlen(S); j++) {
        if (isupper(S[j])) {
            ucase++;
        } else if (islower(S[j])) { // Use "islower" to check for lowercase letters.
            lcase++;
        }
    }

    if (ucase > lcase) {
        for (int x = 0; x < strlen(S); x++) {
            putchar(toupper(S[x]));
        }
    } else {
        for (int k = 0; k < strlen(S); k++) {
            putchar(tolower(S[k]));
        }
    }

    cout << endl;

    return 0;
}
*/


//************problem-E*************
/*int num, K;
    cin>>num;
    cin>>K;
    
    while(K--){
        if(num%10 != 0){
            num = num-1;
        }else{
            num = num/10;
        }
    }
    cout<<num<<endl;
*/