//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFTouchPassThroughView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, SBDashBoardQuickActionsButton, SBDashBoardQuickActionsButtonSettings, _UILegibilitySettings;

@interface SBDashBoardQuickActionsView : SBFTouchPassThroughView <_UISettingsKeyObserver>
{
    _Bool _flashlightOn;
    id <SBDashBoardQuickActionsDelegate> _delegate;
    SBDashBoardQuickActionsButton *_flashlightButton;
    SBDashBoardQuickActionsButton *_cameraButton;
    _UILegibilitySettings *_legibilitySettings;
    SBDashBoardQuickActionsButtonSettings *_quickActionsSettings;
}

@property(retain, nonatomic) SBDashBoardQuickActionsButtonSettings *quickActionsSettings; // @synthesize quickActionsSettings=_quickActionsSettings;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) _Bool flashlightOn; // @synthesize flashlightOn=_flashlightOn;
@property(retain, nonatomic) SBDashBoardQuickActionsButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) SBDashBoardQuickActionsButton *flashlightButton; // @synthesize flashlightButton=_flashlightButton;
@property(retain, nonatomic) id <SBDashBoardQuickActionsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_prototypingAllowsButtons;
- (void)_setButtonBackgroundVisible:(_Bool)arg1;
- (void)_updateButtonBackgroundVisible;
- (struct UIEdgeInsets)_buttonOutsets;
- (double)_insetY;
- (double)_insetX;
- (void)handleButtonTouchEnded:(id)arg1;
- (void)handleButtonPress:(id)arg1;
- (void)handleButtonTouchBegan:(id)arg1;
- (void)_removeTargetsFromButton:(id)arg1;
- (void)_addTargetsToButton:(id)arg1;
- (void)_addOrRemoveFlashlightButtonIfNecessary;
- (void)_addOrRemoveCameraButtonIfNecessary;
- (id)_buttonGroupName;
- (void)_layoutQuickActionButtons;
- (void)layoutSubviews;
- (void)refreshFlashlightAvailability;
- (void)refreshSupportedButtons;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

