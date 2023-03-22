
#include <iostream>

// arrays are defined in the same way. We just use three sets of indexes
// 3 lights per room, 5 rooms per house 7 houses per block
int main()
{
        int house_block2 [] [5] [4] {     // Try to make the last dimension 5 and show
                                    //that the compiler appends 2 zeros
        {
            {1,2,3},{4},{7,8,9},{10,11,12},{13,14,15}  //The one element array will be autofilled
                                                    // with zeros to complete 4 elements
        },
        {
            {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
        },
        {
            { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
        },
        {
             {46,47,48},{49,50,51},{52,53,54},{55,56,57}//,{58,59,60}  // The spots for {58,59,60
                                                                       // Will be autofilled with 0
        }

    };
    for (size_t i = 0; i < 4; ++i)
    {
        for (size_t j = 0; j < 5; j++)
        {
            for (size_t r = 0; r < 3; r++)
            {
                std::cout << house_block2[i][j][r] << std::endl;
            }
        }
    }
    std::cout << "go";
    return 0;
}
