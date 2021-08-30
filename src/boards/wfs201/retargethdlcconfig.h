/**
 * HDLC data port configuration for R5.
 *
 * Copyright Thinnect Inc. 2020
 * @license MIT
 */
#ifndef RETARGETHDLCCONFIG_H_
#define RETARGETHDLCCONFIG_H_

#if defined(HDLC_USE_JTAG_UART) // Onboard port shared with JTAG pins

#define SERIAL_HDLC_UART        USART1
#define SERIAL_HDLC_IRQ_NAME    USART1_RX_IRQHandler
#define SERIAL_HDLC_CLOCK       cmuClock_USART1
#define SERIAL_HDLC_IRQn        USART1_RX_IRQn
#define SERIAL_HDLC_UART_INDEX  1
#define SERIAL_HDLC_TXPORT      gpioPortA
#define SERIAL_HDLC_TXPIN       2
#define SERIAL_HDLC_RXPORT      gpioPortA
#define SERIAL_HDLC_RXPIN       1

#else // Profilic USB

#define SERIAL_HDLC_UART        USART1
#define SERIAL_HDLC_IRQ_NAME    USART1_RX_IRQHandler
#define SERIAL_HDLC_CLOCK       cmuClock_USART1
#define SERIAL_HDLC_IRQn        USART1_RX_IRQn
#define SERIAL_HDLC_UART_INDEX  1
#define SERIAL_HDLC_TXPORT      gpioPortB
#define SERIAL_HDLC_TXPIN       1
#define SERIAL_HDLC_RXPORT      gpioPortB
#define SERIAL_HDLC_RXPIN       0

#endif//UART pin selection

#endif//RETARGETHDLCCONFIG_H_
