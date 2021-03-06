/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class LSApplicationProxy, UIDocumentInteractionController;

@interface _UIOpenWithAppActivity : UIActivity  {
    LSApplicationProxy *_appProxy;
    BOOL _defaultApp;
    UIDocumentInteractionController *_documentInteractionController;
}

@property(getter=isDefaultApp) BOOL defaultApp;


- (void)dealloc;
- (void)setDefaultApp:(BOOL)arg1;
- (BOOL)isDefaultApp;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithApplicationIdentifier:(id)arg1 documentInteractionController:(id)arg2;
- (id)_beforeActivity;

@end
