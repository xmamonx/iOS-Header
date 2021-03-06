//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAutocompleteFilter-Protocol.h>
#import <GeoServices/GEOSearchFilter-Protocol.h>

@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter>
{
    GEOSearchCategory *_category;
}

- (void).cxx_destruct;
- (_Bool)applyToSearchParameters:(id)arg1 error:(id *)arg2;
- (_Bool)applyToAutocompleteParameters:(id)arg1 error:(id *)arg2;
- (id)initWithCategory:(id)arg1;
- (id)init;

@end

