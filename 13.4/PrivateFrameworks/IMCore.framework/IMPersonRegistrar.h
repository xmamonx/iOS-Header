//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject
{
    NSMutableDictionary *_personMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *_personMap; // @synthesize _personMap;
- (void)_dumpAllPersons;
- (id)personForUniqueID:(id)arg1;
- (void)unregisterPerson:(id)arg1;
- (void)registerPerson:(id)arg1;

@end

