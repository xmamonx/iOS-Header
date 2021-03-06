//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIToolbarVisualProvider.h>

@class NSString, UIView, _UIBarBackground;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider
{
    UIView *_barBackgroundView;
    UIView *_customBackgroundView;
    NSString *_backdropViewLayerGroupName;
}

@property(retain, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *backdropViewLayerGroupName; // @synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName;
- (void).cxx_destruct;
- (_Bool)toolbarIsSmall;
- (double)_edgeMarginForBorderedItem:(_Bool)arg1 isText:(_Bool)arg2;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)drawBackgroundViewInRect:(struct CGRect)arg1;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(_Bool *)arg1;
- (void)updateBarBackground;
- (void)_createBarBackground;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateBarBackgroundSize;
- (struct CGRect)backgroundFrame;
- (id)currentBackgroundView;
- (void)setCustomBackgroundView:(id)arg1;
@property(retain, nonatomic) _UIBarBackground *_barBackground;
- (void)customViewChangedForButtonItem:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(_Bool)arg3 actuallyRepositionButtons:(_Bool)arg4;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(_Bool)arg1;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id *)arg2 withHitRects:(id *)arg3 buttonIndexes:(id *)arg4 textButtonIndexes:(id *)arg5;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)_createViewsForItems:(id)arg1;

@end

