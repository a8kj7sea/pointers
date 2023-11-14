#include <iostream>
#include <limits>

using namespace std;

long long convertMegaByteToByte(long megaByteValue) {
    int kb = 1024;
    int bytes = 1024;
    long long result = (megaByteValue * kb) * bytes; 
    
    
    return result;
}

const long long maxValue = numeric_limits<long long>::max();

int main()
{
    long freeMemory = 4088; // in mb
    
    long long *ourPtr = new long long;
    
    long long bytes = convertMegaByteToByte(freeMemory);
    
   
    
    for (long long x = 0 ;x < bytes;x++){
        *(ourPtr+x) = maxValue; // hehehe 
        cout << "" << ourPtr+x << "\n";
    }
    
    
    
    return 0;
}

