//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBSRemoteAlertConfigurationContext, SBSRemoteAlertDefinition;

@protocol SBRemoteAlert <NSObject>
+ (void)requestWithDefinition:(SBSRemoteAlertDefinition *)arg1 context:(SBSRemoteAlertConfigurationContext *)arg2 delegate:(id <SBRemoteAlertDelegate>)arg3 completion:(void (^)(id <SBRemoteAlert>, NSError *))arg4;
@property(readonly, nonatomic) __weak id <SBRemoteAlertDelegate> remoteAlertDelegate;
@end

