//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIScrollView, UITraitCollection;

@protocol TUBarCompressionAnimating
@property(nonatomic) double topOffset;
@property(readonly, nonatomic) _Bool shouldCompressAtTop;
- (void)reloadWithTraitCollection:(UITraitCollection *)arg1;
- (double)minimumBarHeightForTraitCollection:(UITraitCollection *)arg1;
- (double)maximumBarHeightForTraitCollection:(UITraitCollection *)arg1;
- (_Bool)animationShouldBeginForScrollView:(UIScrollView *)arg1 currentlyFullyCompressed:(_Bool)arg2;
- (void)scrollViewIsAtTop:(_Bool)arg1;
- (void)updateWithPercentage:(double)arg1;
@end

