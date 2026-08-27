#ifndef __AD9910_H__
#define __AD9910_H__

//#include "stm32f4xx_hal.h"
#include "stm32h7xx.h"                  // Device header

#define uchar unsigned char
#define uint  unsigned int	
#define ulong  unsigned long int

// 把“位带地址+位序号”转换成别名地址的宏
#define BITBAND(addr, bitnum) ((addr & 0xF0000000)+0x02000000+((addr & 0x000FFFFF)<<5)+(bitnum<<2)) 

// 把一个地址转换成一个指针
#define MEM_ADDR(addr)  *((volatile unsigned long  *)(addr))

// 把位带别名区地址转换成指针
#define BIT_ADDR(addr, bitnum)   MEM_ADDR(BITBAND(addr, bitnum)) 


// GPIO ODR 和 IDR 寄存器地址映射 
#define GPIOA_ODR_Addr    (GPIOA_BASE+20) 
#define GPIOB_ODR_Addr    (GPIOB_BASE+20)   
#define GPIOC_ODR_Addr    (GPIOC_BASE+20)  
#define GPIOD_ODR_Addr    (GPIOD_BASE+20) 
#define GPIOE_ODR_Addr    (GPIOE_BASE+20) 
#define GPIOF_ODR_Addr    (GPIOF_BASE+20)      
#define GPIOG_ODR_Addr    (GPIOG_BASE+20)
#define GPIOH_ODR_Addr    (GPIOH_BASE+20)      
#define GPIOI_ODR_Addr    (GPIOI_BASE+20)
#define GPIOJ_ODR_Addr    (GPIOJ_BASE+20)      
#define GPIOK_ODR_Addr    (GPIOK_BASE+20)

#define GPIOA_IDR_Addr    (GPIOA_BASE+16)  
#define GPIOB_IDR_Addr    (GPIOB_BASE+16)  
#define GPIOC_IDR_Addr    (GPIOC_BASE+16)   
#define GPIOD_IDR_Addr    (GPIOD_BASE+16)  
#define GPIOE_IDR_Addr    (GPIOE_BASE+16)    
#define GPIOF_IDR_Addr    (GPIOF_BASE+16)    
#define GPIOG_IDR_Addr    (GPIOG_BASE+16)  
#define GPIOH_IDR_Addr    (GPIOH_BASE+16)
#define GPIOI_IDR_Addr    (GPIOI_BASE+16)
#define GPIOJ_IDR_Addr    (GPIOJ_BASE+16)
#define GPIOK_IDR_Addr    (GPIOK_BASE+16)


// 单独操作 GPIO的某一个IO口，n(0,1,2...16),n表示具体是哪一个IO口
#define PAout(n)   BIT_ADDR(GPIOA_ODR_Addr,n)  //输出   
#define PAin(n)    BIT_ADDR(GPIOA_IDR_Addr,n)  //输入   
 
#define PBout(n)   BIT_ADDR(GPIOB_ODR_Addr,n)  //输出   
#define PBin(n)    BIT_ADDR(GPIOB_IDR_Addr,n)  //输入   
 
#define PCout(n)   BIT_ADDR(GPIOC_ODR_Addr,n)  //输出   
#define PCin(n)    BIT_ADDR(GPIOC_IDR_Addr,n)  //输入   
 
#define PDout(n)   BIT_ADDR(GPIOD_ODR_Addr,n)  //输出   
#define PDin(n)    BIT_ADDR(GPIOD_IDR_Addr,n)  //输入   
 
#define PEout(n)   BIT_ADDR(GPIOE_ODR_Addr,n)  //输出   
#define PEin(n)    BIT_ADDR(GPIOE_IDR_Addr,n)  //输入  
 
#define PFout(n)   BIT_ADDR(GPIOF_ODR_Addr,n)  //输出   
#define PFin(n)    BIT_ADDR(GPIOF_IDR_Addr,n)  //输入  
 
#define PGout(n)   BIT_ADDR(GPIOG_ODR_Addr,n)  //输出   
#define PGin(n)    BIT_ADDR(GPIOG_IDR_Addr,n)  //输入  

#define PHout(n)   BIT_ADDR(GPIOH_ODR_Addr,n)  //输出   
#define PHin(n)    BIT_ADDR(GPIOH_IDR_Addr,n)  //输入  

#define PIout(n)   BIT_ADDR(GPIOI_ODR_Addr,n)  //输出   
#define PIin(n)    BIT_ADDR(GPIOI_IDR_Addr,n)  //输入 

#define PJout(n)   BIT_ADDR(GPIOJ_ODR_Addr,n)  //输出   
#define PJin(n)    BIT_ADDR(GPIOJ_IDR_Addr,n)  //输入  

#define PKout(n)   BIT_ADDR(GPIOK_ODR_Addr,n)  //输出   
#define PKin(n)    BIT_ADDR(GPIOK_IDR_Addr,n)  //输入  


//#define AD9910_PWR		GPIOB->BSRR = (1 << 15)
//#define AD9910_SDIO		GPIOE->BSRR = (1 << 8)
//#define DRHOLD				GPIOE->BSRR = (1 << 9)
//#define DROVER				GPIOE->BSRR = (1 << 7)
//#define UP_DAT				GPIOE->BSRR = (1 << 15)
//#define PROFILE1			GPIOF->BSRR = (1 << 4)
//#define MAS_REST			GPIOF->BSRR = (1 << 12)
//#define SCLK					GPIOE->BSRR = (1 << 12)
//#define DRCTL					GPIOD->BSRR = (1 << 15)
//#define OSK						GPIOD->BSRR = (1 << 14)
//#define PROFILE0			GPIOD->BSRR = (1 << 8)
//#define PROFILE2			GPIOD->BSRR = (1 << 10)
//#define CS						GPIOE->BSRR = (1 << 11)
//#define AD9910_PWR		PBout(1)
//#define AD9910_SDIO		PHout(10)
//#define DRHOLD				PHout(12)
//#define DROVER				PHout(9)
//#define UP_DAT				PBout(14)
//#define PROFILE1			PBout(10)
//#define MAS_REST			PAout(2)
//#define SCLK					PDout(11)
//#define DRCTL					PBout(15)
//#define OSK						PHout(7)
//#define PROFILE0			PBout(13)
//#define PROFILE2			PBout(11)
//#define CS						PHout(8)

#define AD9910_PWR(x)		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define AD9910_SDIO(x)		HAL_GPIO_WritePin(GPIOH, GPIO_PIN_10, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define DRHOLD(x)			HAL_GPIO_WritePin(GPIOH, GPIO_PIN_12, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define DROVER(x)			HAL_GPIO_WritePin(GPIOH, GPIO_PIN_9, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define UP_DAT(x)			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define PROFILE1(x)			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define MAS_REST(x)			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define SCLK(x)				HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define DRCTL(x)			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define OSK(x)				HAL_GPIO_WritePin(GPIOH, GPIO_PIN_7, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define PROFILE0(x)			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define PROFILE2(x)			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)
#define CS(x)				HAL_GPIO_WritePin(GPIOH, GPIO_PIN_8, (x) ? GPIO_PIN_SET : GPIO_PIN_RESET)

typedef enum {
	TRIG_WAVE = 0,
	SQUARE_WAVE,
	SINC_WAVE,
} AD9910_WAVE_ENUM;

void AD9110_IOInit(void);
void Init_AD9910(void);
void AD9910_FreWrite(ulong Freq);										//д???
void AD9910_AmpWrite(uint16_t Amp);


void AD9910_RAM_WAVE_Set(AD9910_WAVE_ENUM wave);

void AD9910_DRG_AMP_Init(void);

void AD9910_DRG_FreInit_AutoSet(FunctionalState autoSweepEn);
void AD9910_DRG_FrePara_Set(uint32_t lowFre, uint32_t upFre, uint32_t posStep, uint32_t negStep, uint16_t posRate, uint16_t negRate);


#endif



