//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUILegibility.h"

@class NSString, UIImageView, _UILegibilitySettings;

@interface SBStatusBarLegibilityView : UIView <SBUILegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    UIView *_statusBarGradientView;
    UIView *_overallGradientView;
    UIImageView *_leftCornerView;
    UIImageView *_rightCornerView;
}

+ (id)overallGradientView;
+ (id)statusBarGradientView;
+ (id)gradientViewWithOpacities:(const double *)arg1 locations:(id)arg2;
@property(retain, nonatomic) UIImageView *rightCornerView; // @synthesize rightCornerView=_rightCornerView;
@property(retain, nonatomic) UIImageView *leftCornerView; // @synthesize leftCornerView=_leftCornerView;
@property(retain, nonatomic) UIView *overallGradientView; // @synthesize overallGradientView=_overallGradientView;
@property(retain, nonatomic) UIView *statusBarGradientView; // @synthesize statusBarGradientView=_statusBarGradientView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureAsPad;
- (void)_configureAsPhone;
- (void)_configureWithLegibilitySettings:(id)arg1;
@property(nonatomic) double strength; // @dynamic strength;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

