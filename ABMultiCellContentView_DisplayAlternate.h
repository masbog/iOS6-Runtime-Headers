/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, UILabel;

@interface ABMultiCellContentView_DisplayAlternate : ABMultiCellContentView_Rows  {
    UILabel *_displayLabel;
}

@property(readonly) NSString * displayText;

+ (void)numberOfLines:(int*)arg1 lineBreakMode:(int*)arg2 forDisplayLabelWithPropertyGroup:(id)arg3 styleProvider:(id)arg4;
+ (void)setupDisplayLabel:(id)arg1 withPropertyGroup:(id)arg2 styleProvider:(id)arg3;
+ (id)displayLabelForReuse;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })displayLabelFrameForValueViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2 whenEditing:(BOOL)arg3;
+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 includeRows:(BOOL)arg7;
+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;

- (id)displayText;
- (void)reloadDisplayText;
- (void)reloadFromModelIncludingRows:(BOOL)arg1;
- (void)reloadIncludingRows:(BOOL)arg1 includingDisplayView:(BOOL)arg2;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (void)setAbCellStyle:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })valueTextRect;
- (void)reloadFromModel;
- (void)reload;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;

@end
