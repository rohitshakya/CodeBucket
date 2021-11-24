/*
 * Author : Rohit Shakya
 * Date   : August-2021
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Consecutive Duplicates
 */
 
 string solve(string s) {
    auto last = std::unique(s.begin(), s.end());
    s.erase(last, s.end());
    return s;
}


//
//string solve(string s) {
//    string output="";
//    if(s.length()==0) return output;
//    output=s[0];
//    char prev = s[0];
//    for (int i = 1; i < s.length(); i++) {
//        if (s[i] == prev)
//            continue;
//        else {
//            output = output + s[i];
//            prev=s[i];
//        }
//    }
//    return output;
//}
