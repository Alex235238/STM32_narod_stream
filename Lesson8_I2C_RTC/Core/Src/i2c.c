#include "i2c.h"
//--------------------
uint8_t aTxBuffer[7];
char str[100];
//--------------------

void i2c_WriteBuffer(I2C_HandleTypeDef hi, uint8_t DEV_ADDR, uint8_t sizebuf)
{
	while(HAL_I2C_Master_Transmit(&hi, (uint16_t) DEV_ADDR, (uint8_t*) &aTxBuffer, (uint16_t) sizebuf, (uint32_t) 1000)!=HAL_OK)
	{
		if(HAL_I2C_GetError!=HAL_I2C_ERROR_AF)
		{
			sprintf(str, "Buffer error");
		}
	}

}

//--------------------
void i2c_ReadBuffer(I2C_HandleTypeDef hi, uint8_t DEV_ADDR, uint8_t sizebuf)
{


}
