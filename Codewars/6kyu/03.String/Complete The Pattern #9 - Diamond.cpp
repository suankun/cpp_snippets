// https://www.codewars.com/kata/5579e6a5256bac65e4000060/train/cpp

// You have to write a function pattern which returns the following Pattern(See Examples) upto (2n-1) rows, where n is parameter.

// Rules/Note:
// If the Argument is 0 or a Negative Integer then it should return "" i.e. empty string.
// All the lines in the pattern have same length i.e equal to the number of characters in the longest line.
// Range of n is (-∞,100]
// Examples:
// pattern(5):

//     1    
//    121   
//   12321  
//  1234321 
// 123454321
//  1234321 
//   12321  
//    121   
//     1    
// pattern(10):

//          1         
//         121        
//        12321       
//       1234321      
//      123454321     
//     12345654321    
//    1234567654321   
//   123456787654321  
//  12345678987654321 
// 1234567890987654321
//  12345678987654321 
//   123456787654321  
//    1234567654321   
//     12345654321    
//      123454321     
//       1234321      
//        12321       
//         121        
//          1         
// pattern(15):

//               1              
//              121             
//             12321            
//            1234321           
//           123454321          
//          12345654321         
//         1234567654321        
//        123456787654321       
//       12345678987654321      
//      1234567890987654321     
//     123456789010987654321    
//    12345678901210987654321   
//   1234567890123210987654321  
//  123456789012343210987654321 
// 12345678901234543210987654321
//  123456789012343210987654321 
//   1234567890123210987654321  
//    12345678901210987654321   
//     123456789010987654321    
//      1234567890987654321     
//       12345678987654321      
//        123456787654321       
//         1234567654321        
//          12345654321         
//           123454321          
//            1234321           
//             12321            
//              121             
//               1              
// pattern(20):

//                    1                   
//                   121                  
//                  12321                 
//                 1234321                
//                123454321               
//               12345654321              
//              1234567654321             
//             123456787654321            
//            12345678987654321           
//           1234567890987654321          
//          123456789010987654321         
//         12345678901210987654321        
//        1234567890123210987654321       
//       123456789012343210987654321      
//      12345678901234543210987654321     
//     1234567890123456543210987654321    
//    123456789012345676543210987654321   
//   12345678901234567876543210987654321  
//  1234567890123456789876543210987654321 
// 123456789012345678909876543210987654321
//  1234567890123456789876543210987654321 
//   12345678901234567876543210987654321  
//    123456789012345676543210987654321   
//     1234567890123456543210987654321    
//      12345678901234543210987654321     
//       123456789012343210987654321      
//        1234567890123210987654321       
//         12345678901210987654321        
//          123456789010987654321         
//           1234567890987654321          
//            12345678987654321           
//             123456787654321            
//              1234567654321             
//               12345654321              
//                123454321               
//                 1234321                
//                  12321                 
//                   121                  
//                    1    

#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::string pattern(int n)
{
    std::string p;

    for (int i = 1; i <= n; i++) {
        for (int beginSpace = 0; beginSpace < n - i; beginSpace++)
            p += ' ';

        for (int ascNum = 1; ascNum <= i; ascNum++)
            p += std::to_string(ascNum % 10);

        for (int desNum = i - 1; desNum > 0; desNum--)
            p += std::to_string(desNum % 10);

        for (int endSpace = 0; endSpace < n - i; endSpace++)
            p += ' ';

        p += '\n';
    }

    for (int i = n - 1; i > 0; i--) {
        for (int beginSpace = 0; beginSpace < n - i; beginSpace++)
            p += ' ';

        for (int ascNum = 1; ascNum <= i; ascNum++)
            p += std::to_string(ascNum  % 10);

        for (int desNum = i - 1; desNum > 0; desNum--)
            p += std::to_string(desNum  % 10);

        for (int endSpace = 0; endSpace < n - i; endSpace++)
            p += ' ';

        p += '\n';
    }

    if (!p.empty() && p.back() == '\n')
        p.pop_back();

    return p;
}

int main() {

    cout << pattern(5) << endl;

    //     1    
    //    121   
    //   12321  
    //  1234321 
    // 123454321
    //  1234321 
    //   12321  
    //    121   
    //     1    
    

    return 0;
}
//
#include <sstream>
std::string pattern(int n)
{
    if(n < 1)
        return "";
    
    int a;
    std::stringstream s;
    for(int j= -n + 1; j < n; j++) {
        for(int i= -n + 1; i < n; i++) {
            a = n - abs(i) - abs(j);
            if(a < 1)
                s << " ";
            else
                s << a % 10;
        }

		s << "\n";
    }

	return s.str().substr(0, s.str().size()-1);
}
