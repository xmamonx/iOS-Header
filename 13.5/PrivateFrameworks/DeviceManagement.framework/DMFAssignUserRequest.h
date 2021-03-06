//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray, NSNumber, NSString;

@interface DMFAssignUserRequest : DMFTaskRequest
{
    NSString *_userIdentifier;
    NSNumber *_groupID;
    NSString *_displayName;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_imageURL;
    NSString *_fullScreenImageURL;
    NSString *_appleID;
    NSString *_passcodeType;
    NSString *_password;
    NSArray *_enrolledGroupIdentifiers;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *enrolledGroupIdentifiers; // @synthesize enrolledGroupIdentifiers=_enrolledGroupIdentifiers;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *passcodeType; // @synthesize passcodeType=_passcodeType;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *fullScreenImageURL; // @synthesize fullScreenImageURL=_fullScreenImageURL;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

