//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _PXImportConcurrentActionManager : NSObject
{
    NSMutableArray *_operations;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)init;

@end

