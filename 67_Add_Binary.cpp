class Solution {
    public:
        string addBinary(string a, string b) {
            int total_size = 0;
            int make_it_eq = 0;
            if (a.size() > b.size()) {
                total_size = a.size();
                make_it_eq = a.size() - b.size();
                reverse(b.begin(), b.end());
                for (int i = 0; i < make_it_eq;i++) {
                    b.push_back('0');
                }
                reverse(b.begin(), b.end());                     
            }    
            else if (a.size() == b.size()) {
                total_size = a.size();
            }
            else {
                total_size = b.size();
                make_it_eq = b.size() - a.size();   
                reverse(a.begin(), a.end());
                for (int i = 0; i < make_it_eq;i++) {
                    a.push_back('0');
                }
                reverse(a.begin(), a.end());  
            }
    
            string connected;
            string previous = "00"; 
            string current;
            for (int i = total_size - 1; i >= 0; i--) {
                current = string(1, a[i]) + b[i];
                if (current == "11") {
                    if (previous == "11") {
                        connected.push_back('1');
                        previous = "11";
                    }
                    else if (previous == "00") {
                        connected.push_back('0');
                        previous = "11";
                    };
                }
                else if (current == "01" || current == "10") {
                    if (previous == "11") {     
                        connected.push_back('0');
                    } else {
                        connected.push_back('1');
                    }
                }
                else if (current == "00") {
                    if (previous == "11") {         
                        connected.push_back('1');
                    } else {
                        connected.push_back('0');
                    }
                    previous = "00";
                }
            }
            
            if (previous == "11") {
                connected.push_back('1');
            }
    
            reverse(connected.begin(), connected.end());
    
            return connected;
    
        }
    };