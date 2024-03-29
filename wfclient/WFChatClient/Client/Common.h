//
//  Common.h
//  WFChatClient
//
//  Created by heavyrain on 2017/11/8.
//  Copyright © 2017年 WildFireChat. All rights reserved.
//

#ifndef Common_h
#define Common_h


/*
 * 说明：1000以下为系统保留类型，自定义消息请使用1000以上数值。
 * 系统消息类型中100以下为常用基本类型消息。100-199位群组消息类型。400-499为VoIP消息类型.
 */
//基本消息类型
//未知类型的消息
#define MESSAGE_CONTENT_TYPE_UNKNOWN 0
//文本消息
#define MESSAGE_CONTENT_TYPE_TEXT 1
//语音消息
#define MESSAGE_CONTENT_TYPE_SOUND 2
//图片消息
#define MESSAGE_CONTENT_TYPE_IMAGE 3
//位置消息
#define MESSAGE_CONTENT_TYPE_LOCATION 4
//文件消息
#define MESSAGE_CONTENT_TYPE_FILE 5
//视频消息
#define MESSAGE_CONTENT_TYPE_VIDEO 6
//动态表情消息
#define MESSAGE_CONTENT_TYPE_STICKER 7
//图文消息
#define MESSAGE_CONTENT_TYPE_IMAGETEXT 8


//撤回消息
#define MESSAGE_CONTENT_TYPE_RECALL 80

//提醒消息
#define MESSAGE_CONTENT_TYPE_TIP 90

//正在输入消息
#define MESSAGE_CONTENT_TYPE_TYPING 91

//通知消息类型
//创建群的通知消息
#define MESSAGE_CONTENT_TYPE_CREATE_GROUP 104
//加群的通知消息
#define MESSAGE_CONTENT_TYPE_ADD_GROUP_MEMBER 105
//踢出群成员的通知消息
#define MESSAGE_CONTENT_TYPE_KICKOF_GROUP_MEMBER 106
//退群的通知消息
#define MESSAGE_CONTENT_TYPE_QUIT_GROUP 107
//解散群的通知消息
#define MESSAGE_CONTENT_TYPE_DISMISS_GROUP 108
//转让群主的通知消息
#define MESSAGE_CONTENT_TYPE_TRANSFER_GROUP_OWNER 109
//修改群名称的通知消息
#define MESSAGE_CONTENT_TYPE_CHANGE_GROUP_NAME 110
//修改群昵称的通知消息
#define MESSAGE_CONTENT_TYPE_MODIFY_GROUP_ALIAS 111
//修改群头像的通知消息
#define MESSAGE_CONTENT_TYPE_CHANGE_GROUP_PORTRAIT 112

//VoIP开始消息
#define VOIP_CONTENT_TYPE_START 400
//VoIP结束消息
#define VOIP_CONTENT_TYPE_END 402

#define VOIP_CONTENT_TYPE_ACCEPT 401
#define VOIP_CONTENT_TYPE_SIGNAL 403
#define VOIP_CONTENT_TYPE_MODIFY 404
#define VOIP_CONTENT_TYPE_ACCEPT_T 405
#endif /* Common_h */
