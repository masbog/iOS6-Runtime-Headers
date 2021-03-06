/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, UIImage, UIView, NSOrderedSet, NSDictionary, GKTableViewControllerV2;

@interface GKTableView : UITableView  {
    UIView *_topShadowView;
    BOOL _shouldPlaceShadowBelowTableHeader;
    float _shadowInset;
    NSArray *_backgroundTiles;
    UIImage *_backgroundImage;
    struct CGSize { 
        float width; 
        float height; 
    } _statusOffsetShift;
    BOOL _becomeFirstResponderOnTouch;
    int _backgroundStyle;
    float _defaultColumnWidth;
    float _tableHeaderPinnedHeight;
    BOOL _shouldPinHeaderToTop;
    BOOL _shouldAdjustScrollInsetsForTableHeader;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastTouchStartedAt;
    unsigned int _loadingSequenceNumber;
    BOOL _shouldOverrideTableFooterGroupPadding;
    NSOrderedSet *_displayedSections;
    BOOL _disableOffsetAndBoundsHacks;
    BOOL _shouldUseWideMarginsForLandscapeContentOnWidescreenDevice;
    unsigned int _contentOffsetLockCount;
    NSDictionary *_displayedSectionMetrics;
}

@property(readonly) GKTableViewControllerV2 * _controller;
@property unsigned int contentOffsetLockCount;
@property BOOL disableOffsetAndBoundsHacks;
@property float shadowInset;
@property(retain) NSArray * backgroundTiles;
@property(retain) UIImage * backgroundImage;
@property BOOL becomeFirstResponderOnTouch;
@property int backgroundStyle;
@property(readonly) int defaultColumnCount;
@property float defaultColumnWidth;
@property float tableHeaderPinnedHeight;
@property BOOL shouldPinHeaderToTop;
@property BOOL shouldPlaceShadowBelowTableHeader;
@property BOOL shouldAdjustScrollInsetsForTableHeader;
@property struct CGSize { float x1; float x2; } statusOffsetShift;
@property BOOL shouldOverrideTableFooterGroupPadding;
@property BOOL shouldUseWideMarginsForLandscapeContentOnWidescreenDevice;
@property(readonly) struct CGPoint { float x1; float x2; } lastTouchStartedAt;
@property(readonly) unsigned int loadingSequenceNumber;
@property(retain) NSOrderedSet * displayedSections;
@property(retain) NSDictionary * displayedSectionMetrics;
@property(retain) UIView * topShadowView;
@property unsigned int contentOffsetLockCount;
@property BOOL disableOffsetAndBoundsHacks;


- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkDescription;
- (id)loadingCapCell;
- (id)showAllCapCell;
- (id)capCellWithReuseIdentifier:(id)arg1 title:(id)arg2 labelStyle:(int)arg3;
- (id)showMoreCapCell;
- (id)sectionHeaderCapCellWithTitle:(id)arg1;
- (void)restoreContentOffset:(struct CGPoint { float x1; float x2; })arg1 isRotating:(BOOL)arg2;
- (BOOL)_kludgeTableIsWidescreen;
- (void)updateHeightForTableHeaderViewHiding;
- (void)_flashTableView:(id)arg1;
- (void)resetDisplayedSections;
- (id)validateDisplayedSections;
- (void)scrollToTopWithPinnedHeaderAnimated:(BOOL)arg1;
- (id)validateDisplayedSectionsWithSections:(id)arg1;
- (void)unlockContentOffset;
- (void)lockContentOffset;
- (void)setDisplayedSectionMetrics:(id)arg1;
- (id)displayedSectionMetrics;
- (void)setContentOffsetLockCount:(unsigned int)arg1;
- (void)setDisableOffsetAndBoundsHacks:(BOOL)arg1;
- (id)displayedSections;
- (BOOL)shouldOverrideTableFooterGroupPadding;
- (unsigned int)loadingSequenceNumber;
- (void)setTableHeaderPinnedHeight:(float)arg1;
- (void)setShadowInset:(float)arg1;
- (float)shadowInset;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2 updateHeader:(BOOL)arg3;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2 updateHeader:(BOOL)arg3;
- (id)indexPathForNextSelectedRow;
- (void)setDisplayedSections:(id)arg1;
- (void)limitContentOffsetToHeightThatPinsHeader;
- (BOOL)headerIsPinned;
- (int)defaultColumnCount;
- (BOOL)becomeFirstResponderOnTouch;
- (void)_setDisplayedSections:(id)arg1;
- (BOOL)disableOffsetAndBoundsHacks;
- (unsigned int)contentOffsetLockCount;
- (void)layoutTilesWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 offset:(struct CGSize { float x1; float x2; })arg2;
- (void)updateBackgroundImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_pinnedHeaderContentOffsetThreshold;
- (void)updateShadowViews;
- (BOOL)shouldAdjustScrollInsetsForTableHeader;
- (id)topShadowView;
- (float)tableHeaderPinnedHeight;
- (BOOL)shouldPinHeaderToTop;
- (BOOL)shouldPlaceShadowBelowTableHeader;
- (BOOL)shouldUseWideMarginsForLandscapeContentOnWidescreenDevice;
- (float)defaultColumnWidth;
- (void)setShouldOverrideTableFooterGroupPadding:(BOOL)arg1;
- (void)setShouldPinHeaderToTop:(BOOL)arg1;
- (void)setDefaultColumnWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableHeaderFrame;
- (void)updateBackground;
- (void)setStatusOffsetShift:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })statusOffsetShift;
- (void)setShouldAdjustScrollInsetsForTableHeader:(BOOL)arg1;
- (void)setBecomeFirstResponderOnTouch:(BOOL)arg1;
- (void)setTopShadowView:(id)arg1;
- (struct CGPoint { float x1; float x2; })lastTouchStartedAt;
- (id)backgroundTiles;
- (void)setBackgroundTiles:(id)arg1;
- (void)setShouldUseWideMarginsForLandscapeContentOnWidescreenDevice:(BOOL)arg1;
- (void)setShouldPlaceShadowBelowTableHeader:(BOOL)arg1;
- (BOOL)_tableIsLandscape;
- (id)_controller;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (void)setBackgroundImage:(id)arg1;
- (float)_backgroundInset;
- (BOOL)usesVariableMargins;
- (id)backgroundImage;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)canBecomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)reloadData;
- (void)didMoveToWindow;

@end
