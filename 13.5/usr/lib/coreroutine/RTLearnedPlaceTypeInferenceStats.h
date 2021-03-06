//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RTLearnedPlaceTypeInferenceStats : NSObject
{
    NSArray *_weeklyStats;
    double _weeklyAggregateDwellTimeBetweenDateRangeAverage;
    double _weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;
    double _weeklyTotalDailyVisitCountAverage;
    double _weeklyDaysWithNonZeroDwellTimeAverage;
    long long _totalDailyVisitCount;
    long long _weeksWithNonZeroDwellTime;
    double _topMedianDwellTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double topMedianDwellTime; // @synthesize topMedianDwellTime=_topMedianDwellTime;
@property(readonly, nonatomic) long long weeksWithNonZeroDwellTime; // @synthesize weeksWithNonZeroDwellTime=_weeksWithNonZeroDwellTime;
@property(readonly, nonatomic) long long totalDailyVisitCount; // @synthesize totalDailyVisitCount=_totalDailyVisitCount;
@property(readonly, nonatomic) double weeklyDaysWithNonZeroDwellTimeAverage; // @synthesize weeklyDaysWithNonZeroDwellTimeAverage=_weeklyDaysWithNonZeroDwellTimeAverage;
@property(readonly, nonatomic) double weeklyTotalDailyVisitCountAverage; // @synthesize weeklyTotalDailyVisitCountAverage=_weeklyTotalDailyVisitCountAverage;
@property(readonly, nonatomic) double weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation; // @synthesize weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation=_weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;
@property(readonly, nonatomic) double weeklyAggregateDwellTimeBetweenDateRangeAverage; // @synthesize weeklyAggregateDwellTimeBetweenDateRangeAverage=_weeklyAggregateDwellTimeBetweenDateRangeAverage;
@property(readonly, nonatomic) NSArray *weeklyStats; // @synthesize weeklyStats=_weeklyStats;
- (id)description;
- (id)initWithWeeklyStats:(id)arg1 topMedianDwellTime:(double)arg2;

@end

