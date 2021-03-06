/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class UIView;

@interface MPFlipTransitionController : MPTransitionController  {
    UIView *_fromView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _toFrame;
    float _topMargin;
}

@property(retain) UIView * fromView;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } toFrame;
@property float topMargin;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })toFrame;
- (id)_subtypeForTransitionType:(unsigned int)arg1;
- (void)setFromView:(id)arg1;
- (void)setToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)performTransition:(unsigned int)arg1;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;
- (void)dealloc;
- (id)fromView;

@end
