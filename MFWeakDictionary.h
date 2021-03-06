/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableDictionary, NSLock;

@interface MFWeakDictionary : NSMutableDictionary  {
    unsigned long _gen;
    NSLock *_lock;
    NSMutableDictionary *_dictionary;
}


- (id)_copyDictionary;
- (void)dealloc;
- (id)allValues;
- (id)allKeys;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (unsigned int)count;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;

@end
