//
//  ViewController.h
//  WFDemo
//
//  Created by heavyrain on 17/9/27.
//  Copyright © 2017年 WildFireChat. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WFAVCallSession;
@class WFCCConversation;
@interface WFCUVideoViewController : UIViewController
- (instancetype)initWithSession:(WFAVCallSession *)session;
- (instancetype)initWithTarget:(NSString *)targetId conversation:(WFCCConversation *)conversation audioOnly:(BOOL)audioOnly;
@end

