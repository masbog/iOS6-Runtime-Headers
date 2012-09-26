/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotificationCenter : NSObject  {
    void *_impl;
    void *_callback;
    void *_pad[11];
}

+ (id)defaultCenter;
+ (void)_postNotificationName:(id)arg1;

- (id)init;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)finalize;
- (id)description;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)postNotification:(id)arg1;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)__mainThreadPostNotification:(id)arg1;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2;

@end