/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiGraphics : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _imageRect;
    struct UIKBTheme { } *_categoryTheme;
    struct UIKBTheme { } *_categorySelectedTheme;
    struct UIKBTheme { } *_controlTheme;
    struct UIKBTheme { } *_controlPressedTheme;
    struct UIKBTheme { } *_dividerTheme;
    struct UIKBTheme { } *_darkDividerTheme;
    struct UIKBTheme { } *_selectedDividerTheme;
    struct UIKBTheme { } *_backgroundTheme;
    struct CGColor { } *_selectedDividerStart;
    struct CGColor { } *_symbolColor;
    struct CGGradient { } *_darkDividerGradient;
    struct CGGradient { } *_selectedGradient;
    struct CGGradient { } *_selectedDividerGradient;
    struct CGGradient { } *_backgroundGradient;
}

+ (struct __CFDictionary { }*)emojiFontAttributes;
+ (struct __CFDictionary { }*)createEmojiFontAttributes:(BOOL)arg1;
+ (BOOL)isLandscape;
+ (id)imageWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 name:(id)arg2 pressed:(BOOL)arg3;
+ (struct CGPoint { float x1; float x2; })margin:(BOOL)arg1;
+ (struct CGSize { float x1; float x2; })emojiSize:(BOOL)arg1;
+ (struct CGPoint { float x1; float x2; })padding:(BOOL)arg1;
+ (unsigned char)colCount:(BOOL)arg1;
+ (unsigned char)rowCount:(BOOL)arg1;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)categoryKeyGenerator:(BOOL)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)keyImageWithDisplayString:(id)arg1 state:(int)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 fontSize:(float)arg4;
- (id)emojiPressedGenerator:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)backgroundGradientGenerator:(id)arg1;
- (id)pageIndicatorCurrentGenerator:(id)arg1;
- (id)categorySymbolsGenerator:(id)arg1;
- (id)categoryPlacesGenerator:(id)arg1;
- (id)categoryObjectsGenerator:(id)arg1;
- (id)categoryNatureGenerator:(id)arg1;
- (id)categoryPeopleGenerator:(id)arg1;
- (id)categoryRecentsGenerator:(id)arg1;
- (id)selectedDividerGenerator:(id)arg1;
- (id)darkDividerGenerator:(id)arg1;
- (id)dividerGenerator:(id)arg1;
- (id)keyImageWithDisplayString:(id)arg1 state:(int)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 fontSize:(float)arg4 offset:(struct CGPoint { float x1; float x2; })arg5;
- (struct UIKBTheme { }*)createProtoThemeForKey:(id)arg1 keyboard:(id)arg2 state:(int)arg3;
- (id)protoKeyboard;
- (id)protoKeyWithDisplayString:(id)arg1;
- (id)pageIndicatorGenerator:(id)arg1;
- (id)categoryWithSymbol:(id)arg1 pressed:(id)arg2;
- (id)dividerWithTheme:(struct UIKBTheme { }*)arg1;
- (void)drawTopEdgeInContext:(struct CGContext { }*)arg1 withTheme:(struct UIKBTheme { }*)arg2;
- (id)generateImageWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 name:(id)arg2 pressed:(BOOL)arg3;
- (void)releaseThemes;
- (void)initializeThemes;

@end
