//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSArray, RMModelAnyPayload, RMModelStatusManagementClientCapabilities_SupportedPayloads;

@interface RMModelStatusManagementClientCapabilities : RMModelStatusBase
{
    NSArray *_statusSupportedVersions;
    RMModelAnyPayload *_statusSupportedFeatures;
    RMModelStatusManagementClientCapabilities_SupportedPayloads *_statusSupportedPayloads;
}

+ (id)buildRequiredOnlyWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3;
+ (id)buildWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) RMModelStatusManagementClientCapabilities_SupportedPayloads *statusSupportedPayloads; // @synthesize statusSupportedPayloads=_statusSupportedPayloads;
@property(copy, nonatomic) RMModelAnyPayload *statusSupportedFeatures; // @synthesize statusSupportedFeatures=_statusSupportedFeatures;
@property(copy, nonatomic) NSArray *statusSupportedVersions; // @synthesize statusSupportedVersions=_statusSupportedVersions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

