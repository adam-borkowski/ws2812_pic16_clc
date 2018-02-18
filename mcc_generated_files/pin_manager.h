/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15.5
        Device            :  PIC16F1619
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()    do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()   do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()   do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()         PORTAbits.RA0
#define RA0_SetDigitalInput()   do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()  do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()     do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()   do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode() do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()    do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()   do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()   do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()         PORTAbits.RA5
#define RA5_SetDigitalInput()   do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()  do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()     do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()   do { WPUAbits.WPUA5 = 0; } while(0)

// get/set SDO aliases
#define SDO_TRIS               TRISBbits.TRISB4
#define SDO_LAT                LATBbits.LATB4
#define SDO_PORT               PORTBbits.RB4
#define SDO_WPU                WPUBbits.WPUB4
#define SDO_OD                ODCONBbits.ODB4
#define SDO_ANS                ANSELBbits.ANSB4
#define SDO_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SDO_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SDO_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SDO_GetValue()           PORTBbits.RB4
#define SDO_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SDO_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define SDO_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define SDO_SetPushPull()    do { ODCONBbits.ODB4 = 1; } while(0)
#define SDO_SetOpenDrain()   do { ODCONBbits.ODB4 = 0; } while(0)
#define SDO_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define SDO_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()    do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()   do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()   do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()         PORTBbits.RB5
#define RB5_SetDigitalInput()   do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()  do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()     do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()   do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode() do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set SCK aliases
#define SCK_TRIS               TRISBbits.TRISB6
#define SCK_LAT                LATBbits.LATB6
#define SCK_PORT               PORTBbits.RB6
#define SCK_WPU                WPUBbits.WPUB6
#define SCK_OD                ODCONBbits.ODB6
#define SCK_ANS                ANSELBbits.ANSB6
#define SCK_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SCK_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SCK_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SCK_GetValue()           PORTBbits.RB6
#define SCK_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SCK_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define SCK_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)
#define SCK_SetPushPull()    do { ODCONBbits.ODB6 = 1; } while(0)
#define SCK_SetOpenDrain()   do { ODCONBbits.ODB6 = 0; } while(0)
#define SCK_SetAnalogMode()  do { ANSELBbits.ANSB6 = 1; } while(0)
#define SCK_SetDigitalMode() do { ANSELBbits.ANSB6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/