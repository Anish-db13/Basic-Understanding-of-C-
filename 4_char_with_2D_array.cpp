#include<iostream>

int main()
{
char str[5][10]  {"Apple","Samsung","Sony","MapleLabs","Oppo"};
char (*ptr)[5][10] = &str ;  
char (*ptr1) = &str[0][10];                

     for(int i {0};i<5;i++)
        { 
        
            std::cout<<(*ptr)[i]<<std::endl;
        }

        
         for (int j{0};j<10;j++){
        
            std::cout<<*(ptr1 +j)<<" ";
        }
        
        

      
}