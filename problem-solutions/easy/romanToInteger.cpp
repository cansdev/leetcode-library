class Solution {
public:
    int romanToInt(string s) {
        vector<string> romanParts; 

        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size()) {
                if ((s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) ||
                    (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) ||
                    (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))) {
                    romanParts.push_back(s.substr(i, 2));
                    i++; 
                } else {
                    romanParts.push_back(string(1, s[i])); //only way to store one char string apparently, syntax-wise
                }
            } else {
                romanParts.push_back(string(1, s[i]));
            }
        }

        int answer = 0;

        for (const auto& roman : romanParts) {
            if (roman == "CM") {
                answer += 900;
            } else if (roman == "CD") {
                answer += 400;
            } else if (roman == "XC") {
                answer += 90;
            } else if (roman == "XL") {
                answer += 40;
            } else if (roman == "IX") {
                answer += 9;
            } else if (roman == "IV") {
                answer += 4;
            } else {
                for (char c : roman) {
                    switch(c) {
                        case 'M':
                            answer += 1000;
                            break;
                        case 'D':
                            answer += 500;
                            break;
                        case 'C':
                            answer += 100;
                            break;
                        case 'L':
                            answer += 50;
                            break;
                        case 'X':
                            answer += 10;
                            break;
                        case 'V':
                            answer += 5;
                            break;
                        case 'I':
                            answer += 1;
                            break;
                    }
                }
            }
        }

        return answer;
    }
};
