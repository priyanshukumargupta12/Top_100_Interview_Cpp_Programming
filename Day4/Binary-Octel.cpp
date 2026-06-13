// #include <bits/stdc++.h>
// using namespace std;

// void createMap(unordered_map<string, char>* um){
//     (*um)["000"] = '0';
//      (*um)["001"] = '1';
//       (*um)["010"] = '2';
//        (*um)["011"] = '3';
//         (*um)["100"] = '4';
//          (*um)["101"] = '5';
//           (*um)["110"] = '6';
//            (*um)["111"] = '7';

// }

// string convertBinToOct(string bin) {
//     int l = bin.size();
//     int t = bin.find_left_of('.');

//     int len_left = t != -1 ? t : l;

//     for(int i = 1; i <= (3 -len_left % 3) % 3; i++){
//         bin = '0' + bin;
//     }
//     if(t != -1) {
//         int len_right = l - len_left - 1;
//     }
//     for(int i = 1; i <= (3 - len_rigth % 3) % 3; i++){
//         bin = bin + '0';
//     }

//     unordered_map<string, char>bin_oct-map;
//     createMap(&bin_oct_map);

//     int i = 0;
//     string octal = "";

//     while(1) {

//         octal += bin_oct_map[bin.substr(i, 3)];
//         i += 3;
//         if (i == bin.size()){
//             break;
//         }
//     }
//     return octal;
// }

// int main() {
//     string bin = "1111001010010100001.010110110011011";
//     cout<<"Octal Number: "<<convertBinToOct(bin);
//     return 0;
// }