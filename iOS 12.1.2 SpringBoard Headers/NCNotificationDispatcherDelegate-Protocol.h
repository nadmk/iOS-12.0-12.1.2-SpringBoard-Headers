//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCNotificationAction, NCNotificationDispatcher, NCNotificationRequest, NSDictionary, NSString;

@protocol NCNotificationDispatcherDelegate <NSObject>
- (void)dispatcher:(NCNotificationDispatcher *)arg1 launchBackgroundApplicationForAction:(NCNotificationAction *)arg2 notificationRequest:(NCNotificationRequest *)arg3 fromDestination:(NSString *)arg4 withParameters:(NSDictionary *)arg5;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 launchForegroundApplicationForAction:(NCNotificationAction *)arg2 notificationRequest:(NCNotificationRequest *)arg3 fromDestination:(NSString *)arg4 withParameters:(NSDictionary *)arg5;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 didExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 willExecuteAction:(NCNotificationAction *)arg2 forDestination:(id <NCNotificationDestination>)arg3 notificationRequest:(NCNotificationRequest *)arg4 requestAuthentication:(_Bool)arg5 withParameters:(NSDictionary *)arg6 completionBlock:(void (^)(_Bool, _Bool))arg7;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 forDestination:(id <NCNotificationDestination>)arg3 notificationRequest:(NCNotificationRequest *)arg4 withParameters:(NSDictionary *)arg5 completionBlock:(void (^)(_Bool))arg6;
@end

