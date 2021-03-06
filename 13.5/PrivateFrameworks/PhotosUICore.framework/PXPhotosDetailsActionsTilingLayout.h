//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTilingLayout.h>

@interface PXPhotosDetailsActionsTilingLayout : PXTilingLayout
{
    unsigned long long _dataSourceIdentifier;
    _Bool _shouldShowSeparators;
    _Bool _shouldInsetAllSeparators;
    long long _numberOfItems;
    double _rowHeight;
    double _separatorHeight;
    long long __numberOfSeparators;
}

@property(readonly, nonatomic) long long _numberOfSeparators; // @synthesize _numberOfSeparators=__numberOfSeparators;
@property(nonatomic) _Bool shouldInsetAllSeparators; // @synthesize shouldInsetAllSeparators=_shouldInsetAllSeparators;
@property(nonatomic) _Bool shouldShowSeparators; // @synthesize shouldShowSeparators=_shouldShowSeparators;
@property(nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (struct CGRect)_frameForSeparatorAtIndex:(long long)arg1;
- (struct CGRect)_frameForItemAtIndex:(long long)arg1;
- (double)_contentWidth;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)contentBounds;
- (void)prepareLayout;
- (id)initWithNumberOfItems:(long long)arg1;

@end

