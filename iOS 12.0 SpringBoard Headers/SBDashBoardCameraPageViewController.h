//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardPageViewController.h"

#import "SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate.h"
#import "SBDashBoardHostedAppViewControllerDelegate.h"
#import "SBHomeGestureParticipantDelegate.h"
#import "SBSceneHandleObserver.h"
#import "SBSystemGestureRecognizerDelegate.h"

@class NSSet, NSString, SBDashBoardDelegatingScreenEdgePanGestureRecognizer, SBDashBoardHostedAppViewController, SBFluidBehaviorSettings, SBHomeGestureParticipant, UIView, UIViewFloatAnimatableProperty;

@interface SBDashBoardCameraPageViewController : SBDashBoardPageViewController <SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate, SBHomeGestureParticipantDelegate>
{
    UIView *_maskView;
    UIView *_tintView;
    SBDashBoardHostedAppViewController *_appViewController;
    _Bool _orientationLockAcquired;
    struct CGPoint _previousTranslation;
    _Bool _interactiveDismissalInProgress;
    _Bool _hasWarmedCameraForThisPresentation;
    _Bool _cameraPrewarmSucceeded;
    long long _cameraPresentLargestPercent;
    _Bool _deviceSupportsC2DuringGesture;
    _Bool _isH6;
    SBDashBoardDelegatingScreenEdgePanGestureRecognizer *_bottomEdgeRecognizer;
    UIViewFloatAnimatableProperty *_scaleProperty;
    UIViewFloatAnimatableProperty *_alphaProperty;
    SBFluidBehaviorSettings *_scaleSettings;
    SBFluidBehaviorSettings *_alphaSettings;
    SBHomeGestureParticipant *_homeGestureParticipant;
}

+ (_Bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(retain, nonatomic) SBFluidBehaviorSettings *alphaSettings; // @synthesize alphaSettings=_alphaSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *scaleSettings; // @synthesize scaleSettings=_scaleSettings;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *alphaProperty; // @synthesize alphaProperty=_alphaProperty;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *scaleProperty; // @synthesize scaleProperty=_scaleProperty;
@property(retain, nonatomic) SBDashBoardDelegatingScreenEdgePanGestureRecognizer *bottomEdgeRecognizer; // @synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer;
- (void).cxx_destruct;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 interactive:(_Bool)arg3;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2;
- (void)_updateDimmingAlpha:(double)arg1 interactive:(_Bool)arg2;
- (void)_updateCameraScale:(double)arg1 interactive:(_Bool)arg2;
- (void)_updateForPropertyChanged;
- (void)_createProperties;
- (_Bool)_shouldCancelInteractiveDismissGesture;
- (void)_resetAfterInteractiveGestureToCameraVisible:(_Bool)arg1;
- (void)_prepareForInteractiveGestureToCameraVisible:(_Bool)arg1;
- (struct CGPoint)_convertTranslationFromContainerOrientationToContentOrientation:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (long long)touchGestureInterfaceOrientation;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_coolCameraIfNecessary;
- (void)_prewarmCamera;
- (void)_relinquishHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_takeHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_noteUserLaunchEventTime;
- (void)_setSceneGrabberHidden:(_Bool)arg1;
- (void)_relinquishHomeGestureOwnership;
- (void)_requestHomeGestureOwnership;
- (void)_bailIfFaceTimeCallComesIn;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedApp;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
- (_Bool)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(long long)arg2;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationAltitude;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)_transitionAppViewWithProgress:(double)arg1;
- (id)requestedDismissalSettings;
- (long long)requestedDismissalType;
- (void)didTransitionToVisible:(_Bool)arg1;
- (void)updateTransitionToVisible:(_Bool)arg1 progress:(double)arg2 mode:(long long)arg3;
- (void)willTransitionToVisible:(_Bool)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(retain, nonatomic) NSSet *actionsToDeliver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

