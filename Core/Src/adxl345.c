//
// Created by kerim on 9.09.2025.
//
#include "adxl345.h"
extern I2C_HandleTypeDef hi2c1;

int Adxl345_ScanDeviceID() {
    for (uint8_t address=0;address<255;address++)
        if (HAL_I2C_IsDeviceReady(&hi2c1, address, 1, 10) == HAL_OK) {
            return address;
        }
return -1;

}

void readRegisterData(uint16_t registerAddress,uint16_t sizeofData,uint8_t *DataBuffer) {
    if (HAL_I2C_Mem_Read(&hi2c1,ADXL345_DEVICE_ADDRESS,registerAddress,1,DataBuffer,sizeofData,10  == HAL_OK)
        return;//buradan devam



}

void Adxl345_Init(void) {





}
