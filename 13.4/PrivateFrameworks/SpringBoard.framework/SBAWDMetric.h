//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBAWDMetricDelegate;

@interface SBAWDMetric : NSObject
{
    id <SBAWDMetricDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBAWDMetricDelegate> delegate; // @synthesize delegate=_delegate;
- (id)configureWithData:(id)arg1;
- (unsigned long long)metricID;
- (Class)dataClass;
- (void)_postMetric:(id)arg1 withID:(unsigned int)arg2;
- (void)postWithDataBuilder:(CDUnknownBlockType)arg1;
- (unsigned long long)componentID;

@end

