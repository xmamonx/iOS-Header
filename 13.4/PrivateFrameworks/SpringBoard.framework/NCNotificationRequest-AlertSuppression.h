//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationRequest.h>

@interface NCNotificationRequest (AlertSuppression)
+ (id)_notificationSoundFromSound:(id)arg1;
+ (long long)_soundTypeForSBSoundType:(long long)arg1;
+ (id)_notificationOptionsForAlertItem:(id)arg1;
+ (id)_destinations;
+ (id)notificationRequestWithAlertItem:(id)arg1;
+ (id)notificationRequestWithCardItem:(id)arg1;
- (_Bool)sb_shouldSuppressAlert;
@end

