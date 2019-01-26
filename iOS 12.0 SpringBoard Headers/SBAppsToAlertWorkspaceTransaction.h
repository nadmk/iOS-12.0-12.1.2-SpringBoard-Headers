//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class FBDisplayLayoutTransition, NSArray, NSString, SBUIAnimationController, SBWorkspaceAlert;

@interface SBAppsToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    NSArray *_topApplicationSceneEntities;
    SBWorkspaceAlert *_activatingAlert;
    SBUIAnimationController *_animation;
    _Bool _animatedAppDeactivation;
    FBDisplayLayoutTransition *_layoutTransition;
}

- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_updateSceneLayout;
- (_Bool)_shouldPerformSwitcherAnimation;
- (void)_activateAlert;
- (void)_didComplete;
- (void)_begin;
- (void)_willBegin;
- (_Bool)_canBeInterrupted;
- (_Bool)sb_isAlertActivatingTransaction;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

