#ifndef _TOS_CONFIG_H_
#define  _TOS_CONFIG_H_

#include "stm32f10x.h"
#include <stdio.h>

#define TOS_CFG_TASK_PRIO_MAX       10u

#define TOS_CFG_ROUND_ROBIN_EN      1u

#define TOS_CFG_OBJECT_VERIFY_EN       0u

#define TOS_CFG_EVENT_EN            1u

#define TOS_CFG_MMBLK_EN            1u

#define TOS_CFG_MMHEAP_EN           1u

#define TOS_CFG_MMHEAP_POOL_SIZE    0x3000

#define TOS_CFG_MUTEX_EN            1u

#define TOS_CFG_QUEUE_EN            1u

#define TOS_CFG_TIMER_EN            1u

#define TOS_CFG_SEM_EN              1u

#if (TOS_CFG_QUEUE_EN > 0u)
#define TOS_CFG_MSG_EN     1u
#else
#define TOS_CFG_MSG_EN     0u
#endif

#define TOS_CFG_VFS_EN                  1u

#define TOS_CFG_MSG_POOL_SIZE           10u

#define TOS_CFG_IDLE_TASK_STK_SIZE      80u

#define TOS_CFG_CPU_TICK_PER_SECOND     1000u

#define TOS_CFG_CPU_CLOCK               (SystemCoreClock)

#define TOS_CFG_TIMER_AS_PROC           1u

#endif

