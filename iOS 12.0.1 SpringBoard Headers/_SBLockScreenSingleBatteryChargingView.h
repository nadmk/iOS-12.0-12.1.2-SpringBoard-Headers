//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockScreenBatteryChargingView.h"

@class NSArray, NSLayoutConstraint, SBLockScreenBatteryFillView, SBUILegibilityLabel, UIImage, UIView, _UIBackdropView;

@interface _SBLockScreenSingleBatteryChargingView : SBLockScreenBatteryChargingView
{
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    SBLockScreenBatteryFillView *_batteryFillView;
    SBUILegibilityLabel *_chargePercentLabel;
    NSArray *_batteryConstraints;
    NSLayoutConstraint *_batteryTopOffset;
    UIImage *_batteryImage;
}

- (void).cxx_destruct;
- (id)_chargePercentFont;
- (double)_batteryNoseOffset;
- (void)_layoutBattery;
- (void)_layoutChargePercentLabel;
- (void)layoutSubviews;
- (double)desiredVisibilityDuration;
- (void)setBatteryVisible:(_Bool)arg1;
- (_Bool)batteryVisible;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setLegibilitySettings:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

