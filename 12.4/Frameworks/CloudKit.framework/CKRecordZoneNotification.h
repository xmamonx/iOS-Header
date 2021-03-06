//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKNotification.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding>
{
    CKRecordZoneID *_recordZoneID;
    long long _databaseScope;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property(copy, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

