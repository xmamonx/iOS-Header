//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VVCarrierParameters : NSObject
{
    NSDictionary *_parameterValues;
}

+ (id)messageNotificationFallbackTimeout;
+ (id)retryIntervals;
+ (_Bool)supportsDetachedStorage;
+ (_Bool)ignoresRoamingSwitch;
@property(readonly, nonatomic) NSDictionary *parameterValues; // @synthesize parameterValues=_parameterValues;
- (void).cxx_destruct;
- (id)parameterValueForKey:(id)arg1;
- (id)initWithService:(id)arg1;

@end

