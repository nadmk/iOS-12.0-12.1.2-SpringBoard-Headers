//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBBiometricMonitorDataSource.h"

@class NSMutableSet, NSString;

@interface SBBiometricMonitorTestRecipeDummyDataSource : NSObject <SBBiometricMonitorDataSource>
{
    NSMutableSet *_observers;
    long long _state;
    _Bool _poseIsMarginal;
}

@property(readonly, nonatomic) _Bool poseIsMarginal; // @synthesize poseIsMarginal=_poseIsMarginal;
- (void).cxx_destruct;
- (void)cycleState;
@property(readonly, nonatomic) _Bool matchRunning;
@property(readonly, nonatomic) _Bool presenceDetectRunning;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

