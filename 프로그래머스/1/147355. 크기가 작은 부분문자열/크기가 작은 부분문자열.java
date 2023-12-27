import java.util.*;
import java.lang.*;
class Solution {
    public int solution(String t, String p) {
        Long compareData= Long.parseLong(p);
        System.out.println(compareData);
        int res=0;
        int tSize = t.length();
        int i = 0;
        while(true) {
            if(i+p.length()-1==t.length()) {
                break;
            }
            try {
                Long data = Long.parseLong(t.substring(i,i+p.length()));
                
                    if(data<=compareData) {
                        res++;
                    }
                  
            } catch(Exception e) {
                    // continue;
            } finally {
                i++; 
                continue;
            }
        
            
        }
            return res;
        
    }
        

}
