//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GEOServerResultScoreMetadata, NSArray;

@protocol PersonalizedAutocompleteItem
@property(readonly, nonatomic) _Bool isCompoundPersonalizedAutocompleteItem;
@property(readonly, nonatomic) unsigned long long serverItemIndexInSection;
@property(readonly, nonatomic) unsigned long long serverSectionIndex;
@property(readonly, nonatomic) _Bool hasServerItemIndex;
@property(readonly, nonatomic) NSArray *autocompletionStrings;
@property(readonly, nonatomic) id autocompleteObject;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property(readonly, nonatomic) long long priorityOverride;
@property(readonly, nonatomic) _Bool hasPriorityOverride;
@property(readonly, nonatomic) long long sourceSubtype;
@property(readonly, nonatomic) long long sourceType;
- (NSArray *)leafPersonalizedAutocompleteItems;
@end

