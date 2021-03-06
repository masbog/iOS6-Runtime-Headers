/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreenMode : NSObject  {
    id _mode;
    BOOL _mainScreen;
}

@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) float pixelAspectRatio;
@property BOOL _mainScreen;

+ (id)_screenModeForDisplayMode:(id)arg1 mainScreen:(BOOL)arg2;

- (struct CGSize { float x1; float x2; })size;
- (float)pixelAspectRatio;
- (id)description;
- (void)set_mainScreen:(BOOL)arg1;
- (BOOL)_mainScreen;
- (id)initWithDisplayMode:(id)arg1 mainScreen:(BOOL)arg2;
- (id)_displayMode;
- (BOOL)_isNTSCOrPAL;

@end
