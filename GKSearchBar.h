/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme;

@interface GKSearchBar : UISearchBar  {
    GKUITheme *_theme;
}

@property(retain) GKUITheme * theme;

+ (id)searchBarWithTheme:(id)arg1;

- (void)setTheme:(id)arg1;
- (id)theme;
- (void)dealloc;
- (void)_destroyCancelButton;

@end