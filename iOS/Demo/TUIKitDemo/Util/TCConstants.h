//
//  TCConstants.h
//  TCLVBIMDemo
//
//  Created by realingzhou on 16/8/22.
//  Copyright © 2016年 tencent. All rights reserved.
//

#ifndef TCConstants_h
#define TCConstants_h

// Http配置
#define kHttpServerAddr @"https://im-demo.qcloud.com"

// 图形验证码地址
#define kHttpSmsImageAddr @"https://service-c2zjvuxa-1252463788.gz.apigw.tencentcs.com/release/smsImg"

// 登录地址 - 公有云
#define kHttpSmsLoginAddr_public @"https://service-c2zjvuxa-1252463788.gz.apigw.tencentcs.com/release/demoSms"

// 登录地址 - 新加坡
#define kHttpSmsLoginAddr_singapore @"https://service-c2zjvuxa-1252463788.gz.apigw.tencentcs.com/release/demoSmsInter"

//Elk 数据上报地址
#define DEFAULT_ELK_HOST @"https://ilivelog.qcloud.com"

//Licence url
#define LicenceURL @"http://license.vod2.myqcloud.com/license/v1/3e0ffdeec6f69f2ebb0033705d4b33e5/TXLiveSDK.licence"

//Licence key
#define LicenceKey @"439c61a21e71e1af31024c2700f95b52"

//**********************************************************************

#define kHttpTimeout                         30

//错误码
#define kError_InvalidParam                            -10001
#define kError_ConvertJsonFailed                       -10002
#define kError_HttpError                               -10003

//IMSDK群组相关错误码
#define kError_GroupNotExist                            10010  //该群已解散
#define kError_HasBeenGroupMember                       10013  //已经是群成员

//错误信息
#define  kErrorMsgNetDisconnected  @"网络异常，请检查网络"

//版本
#define kVersion  4
#endif /* TCConstants_h */
