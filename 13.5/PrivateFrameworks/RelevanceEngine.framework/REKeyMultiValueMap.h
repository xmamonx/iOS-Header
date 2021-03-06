//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface REKeyMultiValueMap : NSObject
{
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

- (void).cxx_destruct;
- (id)keyForValue:(id)arg1;
- (id)valuesForKey:(id)arg1;
- (void)enumerateValuesForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeValue:(id)arg1 forKey:(id)arg2;
- (void)insertValue:(id)arg1 forKey:(id)arg2;
- (void)removeKey:(id)arg1;
- (void)addKey:(id)arg1 withValues:(id)arg2;
@property(readonly, nonatomic) unsigned long long valueCount;
@property(readonly, nonatomic) unsigned long long keyCount;
- (id)initWithValuePointFunctionOptions:(unsigned long long)arg1;
- (id)init;

@end

