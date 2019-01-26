//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBIdleTimerObserving.h"

@class NSMutableSet, NSString;

@interface SBDashBoardIdleTimerProvider : NSObject <SBIdleTimerObserving, BSDescriptionProviding>
{
    id <SBIdleTimer> _idleTimer;
    id <SBIdleTimerBehaviorProviding> _idleTimerProvider;
    id <BSInvalidatable> _stateCaptureAssertion;
    NSMutableSet *_disabledIdleTimerAssertions;
    id <SBDashBoardIdleTimerProviderDelegate> _delegate;
}

@property(retain, nonatomic) id <SBIdleTimer> idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic) __weak id <SBDashBoardIdleTimerProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_proposeIdleTimerBehavior:(id)arg1 forReason:(id)arg2;
- (void)_proposeEffectiveIdleTimerBehaviorForReason:(id)arg1;
- (id)_copyIdleTimerBehaviorForBehaviorProvider:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)idleTimerDidWarn:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
@property(readonly, nonatomic, getter=isIdleTimerEnabled) _Bool idleTimerEnabled;
- (_Bool)isDisabledAssertionActiveForReason:(id)arg1;
- (void)removeDisabledIdleTimerAssertionReason:(id)arg1;
- (void)addDisabledIdleTimerAssertionReason:(id)arg1;
- (id)effectiveIdleTimerBehavior;
- (void)updateIdleTimerWithIdleDimProvider:(id)arg1 reason:(id)arg2;
- (void)resetIdleTimer;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

