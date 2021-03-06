/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper  {
}


- (BOOL)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id*)arg3;
- (BOOL)_compareLanguageCode:(id)arg1 withExtendedLanguageTag:(id)arg2;
- (BOOL)_validateLanguageCode:(id)arg1;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
- (void)setAlternateGroupID:(short)arg1;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (id)initWithConfigurationState:(id)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMetadata:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (int)status;

@end
