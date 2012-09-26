/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSPort, NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface NSConcreteTask : NSTask  {
    NSMutableDictionary *_dictionary;
    BOOL _hasExeced;
    BOOL _isRunning;
    BOOL _hasPostedDeathNotification;
    BOOL _terminationRun;
    int _suspendCount;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;

    int _pid;
    int _platformExitInfo;
    NSObject<OS_dispatch_source> *_dsrc;
    NSPort *_tmpPort;
}


- (BOOL)suspend;
- (id)standardError;
- (id)environment;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)setTerminationHandler:(id)arg1;
- (BOOL)isRunning;
- (void)setStartsNewProcessGroup:(BOOL)arg1;
- (int)_procid;
- (void)terminateTask;
- (id)taskDictionary;
- (void)setTaskDictionary:(id)arg1;
- (id)preferredArchitectures;
- (void)setPreferredArchitectures:(id)arg1;
- (void)waitUntilExit;
- (int)_platformExitInformation;
- (id)standardOutput;
- (id)standardInput;
- (void)setStandardError:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (id)launchPath;
- (int)suspendCount;
- (BOOL)resume;
- (void)terminate;
- (void)interrupt;
- (void)setLaunchPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)launch;
- (int)terminationReason;
- (int)terminationStatus;
- (id)terminationHandler;
- (void)launchWithDictionary:(id)arg1;
- (int)processIdentifier;
- (void)setArguments:(id)arg1;
- (id)arguments;
- (id)currentDirectoryPath;

@end