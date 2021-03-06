/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, UIView, ABPersonTableAction, NSString, <ABStyleProvider>;

@interface ABPersonTableFooterView : UIView <ABPersonTableActionDelegate> {
    BOOL _editing;
    ABPersonTableAction *_deleteAction;
    UIView *_deleteView;
    UIView *_accessoryView;
    UIButton *_attributionButton;
    <ABStyleProvider> *_styleProvider;
}

@property(retain) <ABStyleProvider> * styleProvider;
@property(getter=isEditing) BOOL tableEditing;
@property(readonly) NSString * attribution;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property(retain) UIView * accessoryView;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })deleteViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })attributionFrame;
- (BOOL)isAttributionEnabled;
- (void)setTableEditing:(BOOL)arg1;
- (void)removeDeleteAction;
- (void)setDeleteActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 animated:(BOOL)arg4;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)attribution;
- (id)styleProvider;
- (void)setStyleProvider:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isEditing;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
