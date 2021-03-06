//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/FBSDisplayLayoutObserver-Protocol.h>

@class NSString;
@protocol HDWatchAppStateMonitorDelegate;

@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver>
{
    _Bool _appIsActive;
    id <HDWatchAppStateMonitorDelegate> _delegate;
    NSString *_bundleIdentifier;
}

+ (void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <HDWatchAppStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool appIsActive; // @synthesize appIsActive=_appIsActive;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithFirstPartyWorkoutApp;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

