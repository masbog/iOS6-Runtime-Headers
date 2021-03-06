/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSTextTableBlock;

@interface NSTextBlockLayoutHelper : NSObject  {
    NSTextTableBlock *_block;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _charRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _glyphRange;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _layoutRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _boundsRect;
    float _lMargin;
    float _lBorder;
    float _lPadding;
    float _tMargin;
    float _tBorder;
    float _tPadding;
    float _width;
    float _height;
    float _rPadding;
    float _rBorder;
    float _rMargin;
    float _bPadding;
    float _bBorder;
    float _bMargin;
}


- (id)initWithTextTable:(id)arg1 charIndex:(unsigned int)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(float)arg5 collapseBorders:(BOOL)arg6;
- (id)initWithTextBlock:(id)arg1 charIndex:(unsigned int)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(float)arg5 collapseBorders:(BOOL)arg6;
- (id)initWithTextBlock:(id)arg1 charRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(float)arg5 collapseBorders:(BOOL)arg6;
- (id)initWithTextBlock:(id)arg1 charRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 layoutRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 boundsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 containerWidth:(float)arg6 allowMargins:(BOOL)arg7 collapseBorders:(BOOL)arg8 allowPadding:(BOOL)arg9;
- (void)dealloc;
- (id)description;

@end
