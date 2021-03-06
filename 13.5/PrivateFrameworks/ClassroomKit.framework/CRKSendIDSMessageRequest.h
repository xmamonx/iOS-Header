//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSDictionary, NSString;

@interface CRKSendIDSMessageRequest : CATTaskRequest
{
    NSString *_sourceAppleID;
    NSString *_destinationAddress;
    NSDictionary *_message;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(copy, nonatomic) NSString *sourceAppleID; // @synthesize sourceAppleID=_sourceAppleID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

