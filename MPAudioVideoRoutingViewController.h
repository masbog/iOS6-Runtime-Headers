/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class <MPAudioVideoRoutingViewControllerDelegate>, MPAudioVideoRoutingTableViewController;

@interface MPAudioVideoRoutingViewController : UIViewController  {
    MPAudioVideoRoutingTableViewController *_tableViewController;
    <MPAudioVideoRoutingViewControllerDelegate> *_delegate;
}

@property <MPAudioVideoRoutingViewControllerDelegate> * delegate;

+ (BOOL)hasWirelessDisplayRoutes;

- (void)_doneAction:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end