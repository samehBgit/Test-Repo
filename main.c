/**
  ******************************************************************************
  * @file    main.c
  * @author  Sameh Belaid
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    22-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
//#define MUL
//#define INTEL
//#define OTHERS


/* Private function prototypes -----------------------------------------------*/
static int mul(int var1, int var2);
static int sum(int var1, int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifdef SOM 
    int ResultSum = sum(3,4);
#endif
#ifdef MUL
  int ResultMu1 = mu1(3,4);
#endif
  while (1)
  {
   
  }
}
#ifdef SOM 
 static int sum(int var1, int var2)
 {
   return (var1+var2);
 }
#endif


static int mul(int var1, int var2)
{
  return (var1*var2);
}


/**************************************END OF FILE**************************************/
