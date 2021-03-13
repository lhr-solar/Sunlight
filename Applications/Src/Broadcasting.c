#include <stdlib.h>
#include "ethernet.h"
#include "CANBus.h"

Task_Broadcasting(){
    CANId_t id;
    uint8_t* data;
    CANbus_WaitToRecceive(id, data); //Wait for data to arrive in CANQueue and then send it
    ethernet_Send(id, data); //We can use the same CAN ID's to identify what data is being sent
}