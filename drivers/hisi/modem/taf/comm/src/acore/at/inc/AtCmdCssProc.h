

#ifndef __ATCMDCSSPROC_H__
#define __ATCMDCSSPROC_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "AtCtx.h"
#include "AtParse.h"
#include "CssAtInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)
/*****************************************************************************
  2 宏定义
*****************************************************************************/

/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*AT与IMSA模块间消息处理函数指针*/
typedef VOS_UINT32 (*AT_CSS_MSG_PROC_FUNC)(VOS_VOID *pMsg);

/*****************************************************************************
 结构名    : AT_CSS_MSG_PRO_FUNC_STRU
 结构说明  : AT与CSS消息与对应处理函数的结构
*****************************************************************************/
typedef struct
{
    CSS_AT_MSG_TYPE_ENUM_UINT32         ulMsgId;
    AT_CSS_MSG_PROC_FUNC                pProcMsgFunc;
}AT_CSS_MSG_PRO_FUNC_STRU;


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/

VOS_VOID AT_ProcCssMsg(CssAtInterface_MSG *pstMsg);

VOS_UINT32 AT_RcvCssMccInfoSetCnf(VOS_VOID * pMsg);

VOS_UINT32 AT_RcvCssMccVersionQryCnf(VOS_VOID * pMsg);

VOS_UINT32 AT_RcvCssMccNotify(VOS_VOID * pMsg);

VOS_UINT32 AT_RcvCssBlackCellListSetCnf(
    VOS_VOID                           *pstMsg
);

VOS_UINT32 AT_RcvCssBlackCellListQryCnf(
    VOS_VOID                           *pstMsg
);

VOS_UINT32 AT_RcvCssBlackCellMccNotify(
    VOS_VOID                           *pstMsg
);

VOS_UINT32 AT_RcvCssLineIndexListSetCnf(
    VOS_VOID                           *pstMsg
);
VOS_UINT32 AT_RcvCssLineIndexListQryCnf(
    VOS_VOID                           *pstMsg
);
VOS_UINT32 AT_RcvCssLineDetailSetCnf(
    VOS_VOID                           *pstMsg
);
VOS_UINT32 AT_RcvCssLinePlmnNotify(
    VOS_VOID                           *pstMsg
);
VOS_UINT32 AT_RcvCssLineIndexNotify(
    VOS_VOID                           *pstMsg
);

#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of AtCmdCssProc.h */

