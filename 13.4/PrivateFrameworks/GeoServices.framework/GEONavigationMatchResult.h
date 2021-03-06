//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocation, GEONavigationMatchInfo, GEORoadMatch, GEORouteMatch;

@interface GEONavigationMatchResult : NSObject
{
    unsigned long long _type;
    GEORouteMatch *_routeMatch;
    GEORoadMatch *_roadMatch;
    GEOLocation *_rawLocation;
    GEONavigationMatchInfo *_detailedMatchInfo;
    _Bool _locationUnreliable;
}

+ (id)matchResultWithRawLocation:(id)arg1;
+ (id)matchResultWithRoadMatch:(id)arg1 location:(id)arg2;
+ (id)matchResultWithRouteMatch:(id)arg1 location:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool locationUnreliable; // @synthesize locationUnreliable=_locationUnreliable;
@property(readonly, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // @synthesize detailedMatchInfo=_detailedMatchInfo;
@property(readonly, nonatomic) GEOLocation *rawLocation; // @synthesize rawLocation=_rawLocation;
@property(readonly, nonatomic) GEORoadMatch *roadMatch; // @synthesize roadMatch=_roadMatch;
@property(readonly, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)setLocationUnreliable:(_Bool)arg1;
- (void)setDetailedMatchInfo:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRoadMatch:(id)arg1 location:(id)arg2;
- (id)initWithRouteMatch:(id)arg1 location:(id)arg2;

@end

