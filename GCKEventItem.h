/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GCKEventItem : NSObject  {
    struct { int x1; char *x2; int x3; unsigned int x4; } *_event;
    unsigned int _pid;
}

@property struct { int x1; char *x2; int x3; unsigned int x4; }* event;
@property unsigned int pid;


- (id)initWithEvent:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1 remotePeer:(unsigned int)arg2;
- (void)setPid:(unsigned int)arg1;
- (unsigned int)pid;
- (id)init;
- (void)dealloc;
- (struct { int x1; char *x2; int x3; unsigned int x4; }*)event;
- (void)setEvent:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1;

@end