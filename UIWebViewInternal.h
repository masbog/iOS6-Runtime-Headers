/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebBrowserView, UIWebViewWebViewDelegate, UIWebPDFViewHandler, NSURLRequest, <UIWebViewDelegate>, UICheckeredPatternView, UIScrollView;

@interface UIWebViewInternal : NSObject  {
    UIScrollView *scroller;
    UIWebBrowserView *browserView;
    UICheckeredPatternView *checkeredPatternView;
    <UIWebViewDelegate> *delegate;
    unsigned int scalesPageToFit : 1;
    unsigned int isLoading : 1;
    unsigned int hasOverriddenOrientationChangeEventHandling : 1;
    unsigned int drawsCheckeredPattern : 1;
    unsigned int webSelectionEnabled : 1;
    unsigned int drawInWebThread : 1;
    unsigned int inRotation : 1;
    NSURLRequest *request;
    int clickedAlertButtonIndex;
    UIWebViewWebViewDelegate *webViewDelegate;
    UIWebPDFViewHandler *pdfHandler;
}



@end