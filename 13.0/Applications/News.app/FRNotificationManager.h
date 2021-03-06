//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCNewsAppConfigurationObserving-Protocol.h"
#import "FCSubscriptionObserving-Protocol.h"
#import "FRAppActivityObserving-Protocol.h"
#import "TSNotificationManagerType-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class FCAMSPushHandler, FCNotificationsConfiguration, FRNotificationAutoEnableHelper, NFMutexLock, NSDictionary, NSHashTable, NSString, TSNotificationSettings;
@protocol FCNewsAppConfigurationManager, FRFeldsparContext, FRURLRouterManagerType, FRUserNotificationResponseHandlerType;

@interface FRNotificationManager : NSObject <UNUserNotificationCenterDelegate, FCNewsAppConfigurationObserving, FCSubscriptionObserving, FRAppActivityObserving, TSNotificationManagerType>
{
    _Bool _systemNotificationEnabled;
    _Bool _notificationUIEnabled;
    _Bool _canPerformEntitlementCheck;
    _Bool _autoEnableNotificationsIsPending;
    id <FRFeldsparContext> _feldsparContext;
    id <FRUserNotificationResponseHandlerType> _userResponseHandler;
    id <FRURLRouterManagerType> _urlRouterManager;
    TSNotificationSettings *_notificationSettings;
    NSHashTable *_observers;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    FCNotificationsConfiguration *_notificationsConfiguration;
    NSString *_deviceToken;
    FRNotificationAutoEnableHelper *_notificationAutoEnableHelper;
    NSDictionary *_newsUserInfo;
    NFMutexLock *_newsUserInfoLock;
    FCAMSPushHandler *_amsPushHandler;
}

+ (void)initialize;
@property(readonly, nonatomic) FCAMSPushHandler *amsPushHandler; // @synthesize amsPushHandler=_amsPushHandler;
@property(retain, nonatomic) NFMutexLock *newsUserInfoLock; // @synthesize newsUserInfoLock=_newsUserInfoLock;
@property(retain, nonatomic) NSDictionary *newsUserInfo; // @synthesize newsUserInfo=_newsUserInfo;
@property(retain, nonatomic) FRNotificationAutoEnableHelper *notificationAutoEnableHelper; // @synthesize notificationAutoEnableHelper=_notificationAutoEnableHelper;
@property(nonatomic) _Bool autoEnableNotificationsIsPending; // @synthesize autoEnableNotificationsIsPending=_autoEnableNotificationsIsPending;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(retain, nonatomic) FCNotificationsConfiguration *notificationsConfiguration; // @synthesize notificationsConfiguration=_notificationsConfiguration;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool canPerformEntitlementCheck; // @synthesize canPerformEntitlementCheck=_canPerformEntitlementCheck;
@property(nonatomic) _Bool notificationUIEnabled; // @synthesize notificationUIEnabled=_notificationUIEnabled;
@property(retain, nonatomic) TSNotificationSettings *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
@property(nonatomic) _Bool systemNotificationEnabled; // @synthesize systemNotificationEnabled=_systemNotificationEnabled;
@property(retain, nonatomic) id <FRURLRouterManagerType> urlRouterManager; // @synthesize urlRouterManager=_urlRouterManager;
@property(retain, nonatomic) id <FRUserNotificationResponseHandlerType> userResponseHandler; // @synthesize userResponseHandler=_userResponseHandler;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (long long)notificationPrompt;
- (long long)subscribeNotificationPromptForTagID:(id)arg1;
- (void)_scheduleLocalNotificationWithIdentifier:(id)arg1 title:(id)arg2 body:(id)arg3 userInfo:(id)arg4 category:(id)arg5 timeInterval:(double)arg6;
- (id)_notificationAttachmentsWithThumbnailFileURL:(id)arg1 publisherLogoFileURL:(id)arg2 publisherLogoCompactFileURL:(id)arg3;
- (void)_notifiyObserversOfHandledNotificationResponseWithAnalyticsReferral:(id)arg1;
- (void)scheduleLocalNotificationForArticleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_openUserNotificationSettings;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)unregisterForRemoteNotifications;
- (id)_headlineFromArticleNotificationPayload:(id)arg1 rapidUpdatesTimeout:(long long)arg2;
- (void)handleActionForRemoteArticleNotificationWithIdentifier:(id)arg1 forUserInfo:(id)arg2;
- (_Bool)canHandleRemoteNotification:(id)arg1;
- (id)_identifierWithPrefix:(id)arg1 tags:(id)arg2;
- (id)_combinedStringWithTagNames:(id)arg1;
- (void)_notifyOfTagsWithNotificationEnabled:(id)arg1;
- (void)_notifyOfTagsWithNotificationAvailable:(id)arg1;
- (void)scheduleLocalNotificationforChannels:(id)arg1;
- (void)subscriptionController:(id)arg1 didFindTagsWithNotificationSupport:(id)arg2;
- (_Bool)isTagIDWhitelistedForNotifications:(id)arg1;
- (void)_updateNotificationUIEnabled;
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_checkUNAuthorizationStatus;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)notifyDeviceTokenIsAvailable:(id)arg1;
- (id)lastNotificationPayloadInfo;
- (id)resetLastNotificationPayloadInfo;
- (void)autoEnableNotificationsForPreSubscribedChannels;
- (void)refreshLastDeclinedNotificationAlertDate;
- (_Bool)canShowNotificationAlert;
- (id)notificationMarketingCategory;
- (id)channelNotificationSupportCategory;
- (id)notificationArticleCategory;
- (void)setupNotificationActionsWithNotificationService:(id)arg1;
- (void)dealloc;
- (id)initWithFeldsparContext:(id)arg1 amsPushHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

