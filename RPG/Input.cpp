#include "input.h"

int determineKey(unsigned char key){
   switch (key){
      
      case 27 :
         //exit(0);
         return 0;
         break;

      case 56 :
         //8
         return 1;
         break;
         
      case 52 :
         //4
         return 2;
         break;
         
      case 53 :
         //5
         return 3;
         break;

      case 54:
         //6
         return 4;
         break;

      case 55 :
         //7
         return 5;
         break;
         
      case 57 :
         //9
         return 6;
         break;

      case 49 :
         //1
         return 7;
         break;

      case 51 :
         //3
         return 8;
         break;

      case 50 :
         //2
         return 9;
         break;

      default:
         break;
   }

}