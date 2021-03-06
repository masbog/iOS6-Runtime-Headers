/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIPickerTableViewWrapperCell : UITableViewCell  {
    UIView *_wrappedView;
    struct CGSize { 
        float width; 
        float height; 
    } _wrappedViewSize;
}

@property(retain) UIView * wrappedView;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateWrappedView;
- (void)_updateWrappedViewFrame;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setWrappedView:(id)arg1;
- (id)wrappedView;

@end
