//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBSAnalyticsState;

@protocol SBAnalyticsBackendEventContextProviding <NSObject>
@property(readonly, nonatomic) SBSAnalyticsState *eventPayload;
- (void)stateForQueryName:(unsigned long long)arg1 completion:(void (^)(SBSAnalyticsState *))arg2;
@end

