#include <stdio.h>

int btod(int bin);

int main (){
         int binary, decimal;
   
         printf(" ENTER A BINARY NUMBER BRO:\n");
         scanf("%d" , &binary);

         decimal = btod(binary);
   
         printf(" THE DECIMAL OF THE BINARY NUMBER IS %d", decimal);

return 0;
}

int btod(int bin){

        if(bin == 0){
                return 0;
        }
        else{
                return bin%10 + btod((bin /10)*2);
        }

}
