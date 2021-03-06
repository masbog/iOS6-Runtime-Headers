/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIViewController, UIMoreListController, UINavigationController;

@interface UIMoreNavigationController : UINavigationController  {
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property(retain) NSArray * moreViewControllers;
@property BOOL allowsCustomizing;
@property UIViewController * displayedViewController;
@property BOOL moreViewControllersChanged;

+ (Class)_moreListControllerClass;

- (id)init;
- (void)dealloc;
- (BOOL)moreViewControllersChanged;
- (BOOL)allowsCustomizing;
- (id)_preparedViewController:(id)arg1;
- (void)_restoreOriginalNavigationController;
- (void)_redisplayMoreTableView;
- (void)setMoreViewControllersChanged:(BOOL)arg1;
- (void)setAllowsCustomizing:(BOOL)arg1;
- (void)setDisplayedViewController:(id)arg1;
- (id)moreViewControllers;
- (id)displayedViewController;
- (void)setMoreViewControllers:(id)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;

@end
