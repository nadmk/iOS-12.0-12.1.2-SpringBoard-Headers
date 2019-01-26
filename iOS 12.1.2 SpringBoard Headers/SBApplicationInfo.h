//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBApplicationInfo.h"

@class CRCarPlayAppDeclaration, NSArray, NSSet, NSString, NSURL, NSUserDefaults, XBSnapshotContainerIdentity;

@interface SBApplicationInfo : FBApplicationInfo
{
    NSString *_applicationShortcutWidgetBundleIdentifier;
    NSArray *_staticApplicationShortcutItems;
    NSString *_displayName;
    NSString *_carDisplayName;
    Class _iconClass;
    CRCarPlayAppDeclaration *_carPlayDeclaration;
    NSArray *_domainsToPreheat;
    NSArray *_launchImageInfo;
    NSString *_launchInterfaceFileName;
    NSSet *_urlSchemes;
    NSSet *_supportedContentTypes;
    NSString *_iconMasqueradeIdentifier;
    NSURL *_restorationArchiveContainerURL;
    NSURL *_dataContainerURLOverride;
    NSUserDefaults *_lazy_userDefaults;
    NSString *_installInstanceID;
    unsigned long long _dynamicApplicationShortcutItemsVersion;
    unsigned long long _visibilityOverride;
    long long _defaultStatusBarStyle;
    unsigned long long _uninstallCapability;
    unsigned long long _voipClass;
    long long _whitePointAdaptivityStyle;
    unsigned long long _allowedNKNotificationsPerDay;
    int _networkUsageTypes;
    int _supportedTypes;
    int _ignoredStatusBarStyleOverrides;
    _Bool _isLaunchableDuringSetup;
    _Bool _usesSplashBoard;
    _Bool _disablesClassicMode;
    _Bool _representsWebApplication;
    _Bool _isMonarchLinked;
    _Bool _isTigrisLinked;
    _Bool _isPeaceLinked;
    _Bool _isPeaceBLinked;
    _Bool _isYukonLinked;
    _Bool _prefersSavedSnapshots;
    _Bool _wantsLaunchWithoutPNG;
    _Bool _wantsFullScreen;
    _Bool _isGameCenterEnabled;
    _Bool _wasGameCenterEverEnabled;
    _Bool _statusBarIsLegacy;
    _Bool _preventsLaunchInterfaceSplitting;
    _Bool _requiresHiDPI;
    _Bool _disablesScreenJail;
    _Bool _alwaysLaunchesSuspended;
    _Bool _systemAppSupportsLocalNotifications;
    _Bool _disallowsNotificationCenter;
    _Bool _disallowsControlCenter;
    _Bool _staticApplicationShortcutItemsHaveBeenLocalized;
    _Bool _carDisplayNameHasBeenLocalized;
    _Bool _hasHiddenTag;
    _Bool _supportsBackgroundAppRefresh;
    _Bool _usesRLNDataProvider;
    _Bool _shouldLaunchWithLiveContentASAP;
    _Bool _supports64Bit;
    _Bool _cloudDemoted;
    _Bool _wantsExclusiveForeground;
    NSURL *_documentInboxURL;
    XBSnapshotContainerIdentity *_manifestContainerIdentity;
}

+ (int)_calculateApplicationSupportedTypesFromProxy:(id)arg1;
+ (unsigned long long)_visibilityOverrideFromInfo:(id)arg1 entitlements:(id)arg2;
@property(readonly, nonatomic) _Bool wantsExclusiveForeground; // @synthesize wantsExclusiveForeground=_wantsExclusiveForeground;
@property(readonly, nonatomic, getter=isCloudDemoted) _Bool cloudDemoted; // @synthesize cloudDemoted=_cloudDemoted;
@property(readonly, nonatomic) XBSnapshotContainerIdentity *manifestContainerIdentity; // @synthesize manifestContainerIdentity=_manifestContainerIdentity;
@property(readonly, nonatomic) _Bool supports64Bit; // @synthesize supports64Bit=_supports64Bit;
@property(readonly, nonatomic) _Bool shouldLaunchWithLiveContentASAP; // @synthesize shouldLaunchWithLiveContentASAP=_shouldLaunchWithLiveContentASAP;
@property(readonly, nonatomic) _Bool usesRLNDataProvider; // @synthesize usesRLNDataProvider=_usesRLNDataProvider;
@property(readonly, nonatomic) _Bool supportsBackgroundAppRefresh; // @synthesize supportsBackgroundAppRefresh=_supportsBackgroundAppRefresh;
@property(readonly, nonatomic) _Bool hasHiddenTag; // @synthesize hasHiddenTag=_hasHiddenTag;
@property(readonly, copy, nonatomic) NSString *iconMasqueradeIdentifier; // @synthesize iconMasqueradeIdentifier=_iconMasqueradeIdentifier;
@property(readonly, nonatomic) unsigned long long allowedNKNotificationsPerDay; // @synthesize allowedNKNotificationsPerDay=_allowedNKNotificationsPerDay;
@property(readonly, nonatomic) _Bool disallowsControlCenter; // @synthesize disallowsControlCenter=_disallowsControlCenter;
@property(readonly, nonatomic) _Bool disallowsNotificationCenter; // @synthesize disallowsNotificationCenter=_disallowsNotificationCenter;
@property(readonly, nonatomic) NSURL *documentInboxURL; // @synthesize documentInboxURL=_documentInboxURL;
@property(readonly, nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
@property(readonly, nonatomic) NSSet *urlSchemes; // @synthesize urlSchemes=_urlSchemes;
@property(readonly, nonatomic) NSString *launchInterfaceFileName; // @synthesize launchInterfaceFileName=_launchInterfaceFileName;
@property(readonly, nonatomic) NSArray *launchImageInfo; // @synthesize launchImageInfo=_launchImageInfo;
@property(readonly, nonatomic) NSArray *domainsToPreheat; // @synthesize domainsToPreheat=_domainsToPreheat;
@property(readonly, nonatomic, getter=isStatusBarLegacy) _Bool statusBarIsLegacy; // @synthesize statusBarIsLegacy=_statusBarIsLegacy;
@property(readonly, nonatomic) int supportedTypes; // @synthesize supportedTypes=_supportedTypes;
@property(readonly, nonatomic) CRCarPlayAppDeclaration *carPlayDeclaration; // @synthesize carPlayDeclaration=_carPlayDeclaration;
@property(readonly, nonatomic) unsigned long long voipClass; // @synthesize voipClass=_voipClass;
@property(readonly, nonatomic) unsigned long long uninstallCapability; // @synthesize uninstallCapability=_uninstallCapability;
@property(readonly, nonatomic) _Bool systemAppSupportsLocalNotifications; // @synthesize systemAppSupportsLocalNotifications=_systemAppSupportsLocalNotifications;
@property(readonly, nonatomic) _Bool shouldLaunchSuspendedAlways; // @synthesize shouldLaunchSuspendedAlways=_alwaysLaunchesSuspended;
@property(readonly, nonatomic) _Bool disablesScreenJail; // @synthesize disablesScreenJail=_disablesScreenJail;
@property(readonly, nonatomic) _Bool requiresHiDPI; // @synthesize requiresHiDPI=_requiresHiDPI;
@property(readonly, nonatomic) _Bool preventsLaunchInterfaceSplitting; // @synthesize preventsLaunchInterfaceSplitting=_preventsLaunchInterfaceSplitting;
@property(readonly, nonatomic) _Bool wasGameCenterEverEnabled; // @synthesize wasGameCenterEverEnabled=_wasGameCenterEverEnabled;
@property(readonly, nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled; // @synthesize gameCenterEnabled=_isGameCenterEnabled;
@property(readonly, nonatomic) Class iconClass; // @synthesize iconClass=_iconClass;
@property(readonly, nonatomic) int networkUsageTypes; // @synthesize networkUsageTypes=_networkUsageTypes;
@property(readonly, nonatomic) int ignoredStatusBarStyleOverrides; // @synthesize ignoredStatusBarStyleOverrides=_ignoredStatusBarStyleOverrides;
@property(readonly, nonatomic) long long defaultStatusBarStyle; // @synthesize defaultStatusBarStyle=_defaultStatusBarStyle;
@property(readonly, nonatomic) _Bool wantsFullScreen; // @synthesize wantsFullScreen=_wantsFullScreen;
@property(readonly, nonatomic) _Bool wantsLaunchWithoutPNG; // @synthesize wantsLaunchWithoutPNG=_wantsLaunchWithoutPNG;
@property(readonly, nonatomic) _Bool prefersSavedSnapshots; // @synthesize prefersSavedSnapshots=_prefersSavedSnapshots;
@property(readonly, nonatomic) NSURL *restorationArchiveContainerURL; // @synthesize restorationArchiveContainerURL=_restorationArchiveContainerURL;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) _Bool disablesClassicMode; // @synthesize disablesClassicMode=_disablesClassicMode;
@property(readonly, nonatomic) _Bool usesSplashBoard; // @synthesize usesSplashBoard=_usesSplashBoard;
@property(readonly, nonatomic, getter=isLaunchableDuringSetup) _Bool launchableDuringSetup; // @synthesize launchableDuringSetup=_isLaunchableDuringSetup;
@property(readonly, nonatomic) unsigned long long visibilityOverride; // @synthesize visibilityOverride=_visibilityOverride;
@property(readonly, nonatomic) unsigned long long dynamicApplicationShortcutItemsVersion; // @synthesize dynamicApplicationShortcutItemsVersion=_dynamicApplicationShortcutItemsVersion;
@property(readonly, copy, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // @synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier;
@property(readonly, nonatomic) _Bool representsWebApplication; // @synthesize representsWebApplication=_representsWebApplication;
@property(readonly, nonatomic, getter=isYukonLinked) _Bool yukonLinked; // @synthesize yukonLinked=_isYukonLinked;
@property(readonly, nonatomic, getter=isPeaceBLinked) _Bool peaceBLinked; // @synthesize peaceBLinked=_isPeaceBLinked;
@property(readonly, nonatomic, getter=isPeaceLinked) _Bool peaceLinked; // @synthesize peaceLinked=_isPeaceLinked;
@property(readonly, nonatomic, getter=isTigrisLinked) _Bool tigrisLinked; // @synthesize tigrisLinked=_isTigrisLinked;
@property(readonly, nonatomic, getter=isMonarchLinked) _Bool monarchLinked; // @synthesize monarchLinked=_isMonarchLinked;
@property(readonly, nonatomic) NSString *installInstanceID; // @synthesize installInstanceID=_installInstanceID;
- (void).cxx_destruct;
- (unsigned long long)_calculateVoipClassWithEntitlements:(id)arg1;
- (_Bool)_supportsApplicationType:(int)arg1;
- (Class)_parseIconClassFromProxyInfo:(id)arg1;
- (id)_configureTags:(id)arg1 hasVisibilityOverride:(_Bool)arg2;
- (void)_loadFromProxy:(id)arg1;
- (id)dataContainerURL;
@property(readonly, nonatomic) _Bool supportsLegacyVOIPBackgroundMode;
@property(readonly, nonatomic) _Bool suppressUserNotificationPermissionAlert;
@property(readonly, nonatomic) _Bool supportsNewsstandContentBackgroundMode;
@property(readonly, nonatomic) _Bool supportsFetchBackgroundMode;
@property(readonly, nonatomic) _Bool supportsRemoteNotificationBackgroundMode;
@property(readonly, nonatomic) _Bool supportsAudioBackgroundMode;
- (long long)backgroundStyleForRequestedBackgroundStyle:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *carDisplayName;
@property(readonly, nonatomic) NSArray *staticApplicationShortcutItems;
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
@property(readonly, nonatomic, getter=isAppleApplication) _Bool appleApplication;
@property(readonly, nonatomic, getter=isInternalApplication) _Bool internalApplication;
@property(readonly, nonatomic, getter=isSystemApplication) _Bool systemApplication;

@end

