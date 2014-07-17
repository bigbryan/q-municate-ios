//
//  AppDelegate.h
//  Q-municate
//
//  Created by Igor Alefirenko on 13/02/2014.
//  Copyright (c) 2014 Quickblox. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QMIncomingCallService;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) QMIncomingCallService *incomingCallService;

@end
