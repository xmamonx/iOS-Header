//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NanoRoutePlanningResponseDelta : NSObject
{
    _Bool _routesChanged;
    _Bool _selectedRouteChanged;
    _Bool _routeRevisionsChanged;
    NSArray *_identifiersForChangedRoutes;
}

+ (id)everythingChanged;
@property(copy, nonatomic) NSArray *identifiersForChangedRoutes; // @synthesize identifiersForChangedRoutes=_identifiersForChangedRoutes;
@property(nonatomic) _Bool routeRevisionsChanged; // @synthesize routeRevisionsChanged=_routeRevisionsChanged;
@property(nonatomic) _Bool selectedRouteChanged; // @synthesize selectedRouteChanged=_selectedRouteChanged;
@property(nonatomic) _Bool routesChanged; // @synthesize routesChanged=_routesChanged;
- (void).cxx_destruct;

@end

