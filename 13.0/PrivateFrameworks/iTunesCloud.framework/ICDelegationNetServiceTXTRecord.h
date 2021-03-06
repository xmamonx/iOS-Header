//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSArray, NSData, NSString;

@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying>
{
    NSArray *_delegationAccountUUIDs;
    NSString *_deviceName;
    long long _securityMode;
    long long _serviceVersion;
}

@property(nonatomic) long long serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(nonatomic) long long securityMode; // @synthesize securityMode=_securityMode;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSArray *delegationAccountUUIDs; // @synthesize delegationAccountUUIDs=_delegationAccountUUIDs;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *TXTRecordData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTXTRecordData:(id)arg1;

@end

