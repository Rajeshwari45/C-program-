#include <iostream>

using namespace std;

void reverseArray(int arr[], int n) {
    
    int i=0;
    int j=n-1;
    
    while(i<j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

  int getMaxFromArray(int arr[], int n) {
      
      int INT_MIN;
      
      int ans = INT_MIN;
      
      for(int i=0; i<=n; i++) {
          
          ans = max(ans, arr[i]);
      }
      
      return ans;
  }
  
  
void swapAlternates(int arr[], int n) {
    int i=0;
    
    while(i<n) {
        
        if(i+1 < n) {
            swap(arr[i], arr[i+1]);
    }
       i = i+2;
    }
}


void sortZeroOneTwo(int arr[], int n) {
    
    int zero=0, one=0, two=0;
    
    //count all numbers
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) 
            zero++;
        
            
        else if(arr[i] == 1) 
                one++;
            
        else 
            two++;
            
    }

   
   int i = 0;
   //put zero
   
   while(zero--) {
       arr[i] = 0;
       i++;
   }
   
   //put one 
       while(one--) {
       arr[i] = 1;
       i++;
   }
  //put two 
       while(two--) {
       arr[i] = 2;
       i++;
   }
}

bool checkPalindrome(int arr[], int n) {
    
   
   int i=0; 
   int j=n-1;
    
    while(i<j) {
        if(arr[i]==arr[j]) {
            i++;
            j--;
        }
            
           else {
           return false;
           }
        
        
    }
    
    return true;
}


void swapArray(int arr[], int n) {
    
        int i=0;
        int j=0;
        
        for (int i=0; i<n; i++) {
            if(arr[i]<0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
    
 int findDuplicate(int arr[], int n) {
       
    int sum1 = 0;
    
    for(int i=0; i<n; i++) {
        
        sum1 = sum1 + arr[i];
    }
    
    int sum2 = n*(n-1)/2;
    
    int ans = sum1 - sum2;
    
    return ans; 
        
}

int getMaxSubarraySum(int arr[], int n) {
    
    // int INT_MIN;
    
    
    int maxsf = 0;
    
    int maxeh = 0;
    
    for(int i=0; i<n; i++) {
        
        //include current element 
        maxeh = maxeh + arr[i];
        
        if(maxsf < maxeh)
        
        //update the ans 
        maxsf = maxeh;
        
        //if max ending here is zero then don't include 
        if(maxeh < 0) 
        
        maxeh = 0;
    
    }
    
    return maxsf;
}
 

int main() {
    
    
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    
    cout<<"Max subarray sum is "<<getMaxSubarraySum(arr, 8)<<endl;
    
    //int arr[] = {1, 2, 3, 4, 3, 5};
    
    //cout<<"Duplicate value is "<<findDuplicate(arr, 6)<<endl;
    
    
    //int arr[] = {-1, 2, 3, -4, -6, 5};
    
    
   // swapArray(arr, 6);
    
    //int arr[] = {1, 0, 2, 2, 0, 1, 1};
    
   // int arr[] = {1, 2, 3, 3, 2, 1};
    
  // cout<<"check palindrome or not "<<checkPalindrome(arr, 6)<<endl;
    
    //sortZeroOneTwo(arr, 7);
    
    //swapAlternates(arr, 6);
  // reverseArray(arr, 6);
   // cout<<"Maximum value of array is "<<getMaxFromArray(arr, 6)<<endl;
    
    for(int i=0; i<8; i++) {
        
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    return 0;
}





