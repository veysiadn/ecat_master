#include "ecat_motor.h"

EcatMotor::EcatMotor(uint8_t mode)
{
//    if((mode == 0x01)   //positon
//       || (mode == 0x03) //velocity
//       || (mode == 0x04))//torque
//    {
//        EC_WRITE_U8(domain1_pd + off_motor_mode, mode);//homing mode
//    }

//    //motor enable
//    do
//    {
//        if(motor_data.status_word & 0x0040)// switch on disable
//        {
//            EC_WRITE_U16(domain1_pd + off_motor_control_word, 0x0006); //shut down
//        }
//        else if ((motor_data.status_word & 0x006f) == 0x0021) //read to switch on
//        {
//            EC_WRITE_U16(domain1_pd + off_motor_control_word, 0x0007); //switch on
//        }
//        else if ((motor_data.status_word & 0x006f) == 0x0023) //switch on
//        {
//            EC_WRITE_U16(domain1_pd + off_motor_control_word, 0x000f); //Enable Operation
//        }
//        else if ((motor_data.status_word & 0x004f) == 0x0008) //falt
//        {
//            EC_WRITE_U16(domain1_pd + off_motor_control_word, 0x0080); //falt restet
//        }
//    }
//    while()
}


