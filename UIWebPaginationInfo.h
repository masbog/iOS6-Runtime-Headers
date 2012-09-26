/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIWebDocumentView, NSObject<WebDocumentView>;

@interface UIWebPaginationInfo : NSObject  {
    NSObject<WebDocumentView> *_documentView;
    float _scaleFactor;
    struct CGSize { 
        float width; 
        float height; 
    } _layoutSize;
    NSArray *_pageRects;
    UIWebDocumentView *_webDocumentView;
}

@property(readonly) unsigned int pageCount;
@property(readonly) float lastPageHeight;
@property(retain) UIWebDocumentView * webDocumentView;


- (id)documentView;
- (id)pageRects;
- (void)dealloc;
- (id)webDocumentView;
- (struct CGSize { float x1; float x2; })sizeForPageAtIndex:(int)arg1;
- (float)lastPageHeight;
- (unsigned int)pageCount;
- (struct CGSize { float x1; float x2; })layoutSize;
- (float)scaleFactor;
- (void)setWebDocumentView:(id)arg1;
- (id)initWithDocumentView:(id)arg1 scaleFactor:(float)arg2 layoutSize:(struct CGSize { float x1; float x2; })arg3 pageRects:(id)arg4;

@end