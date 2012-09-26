/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSDictionary;

@interface MPTimedMetadata : NSObject  {
    void *_internal;
}

@property(readonly) NSString * key;
@property(readonly) NSString * keyspace;
@property(readonly) id value;
@property(readonly) double timestamp;
@property(readonly) NSDictionary * allMetadata;


- (id)allMetadata;
- (id)keyspace;
- (id)_initWithMetadataItem:(id)arg1;
- (double)timestamp;
- (id)init;
- (void)dealloc;
- (id)value;
- (id)key;

@end