//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@interface SAMPSetPlaybackPosition : SADomainCommand
{
}

+ (id)setPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setPlaybackPosition;
- (_Bool)requiresResponse;
@property(nonatomic) int position;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

