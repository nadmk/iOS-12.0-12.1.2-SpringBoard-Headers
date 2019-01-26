//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SBFTapToWakeGestureRecognizer, SBIdleTimerDefaults;

@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _screenOff;
    _Bool _shouldTapToWake;
    id <SBTapToWakeDelegate> _delegate;
    SBFTapToWakeGestureRecognizer *_tapToWakeGestureRecognizer;
    SBIdleTimerDefaults *_idleTimerDefaults;
}

+ (_Bool)isTapToWakeSupported;
@property(retain, nonatomic) SBIdleTimerDefaults *idleTimerDefaults; // @synthesize idleTimerDefaults=_idleTimerDefaults;
@property(retain, nonatomic) SBFTapToWakeGestureRecognizer *tapToWakeGestureRecognizer; // @synthesize tapToWakeGestureRecognizer=_tapToWakeGestureRecognizer;
@property(readonly, nonatomic) _Bool shouldTapToWake; // @synthesize shouldTapToWake=_shouldTapToWake;
@property(nonatomic, getter=isScreenOff) _Bool screenOff; // @synthesize screenOff=_screenOff;
@property(nonatomic) __weak id <SBTapToWakeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)tapToWakeDidRecognize:(id)arg1;
- (void)_evaluateEnablement;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

